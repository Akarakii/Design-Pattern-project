//
//  btrackingobserver.h
//  observer
//
//  Created by surui on 2016/12/13.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef btrackingobserver_h
#define btrackingobserver_h
#include "observer.h"
#include "subject.h"

class BTrackingObserver : public Observer {
public:
    BTrackingObserver(Subject* sbj);
    void getPermutation(int n);
    
private:
    void backTrackingPerm(vector<vector<int> >& result, vector<int>& solution,
                          vector<int>& flag, vector<int>& nums, int step);
    void printVec(vector<vector<int> >& vec);
};


#endif /* btrackingobserver_h */
