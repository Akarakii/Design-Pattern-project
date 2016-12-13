//
//  heapobserver.h
//  observer
//
//  Created by surui on 2016/12/13.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef heapobserver_h
#define heapobserver_h
#include "observer.h"
using namespace std;

class Subject;

class HeapObserver : public Observer {
    
public:
    HeapObserver(Subject* sbj);
    void getPermutation(int n);
    
private:
    void heapPermute (vector<vector<int> >& result,
                      vector<int>& nums, int n);
    void printVec(vector<vector<int> >& vec);
};



#endif /* heapobserver_h */
