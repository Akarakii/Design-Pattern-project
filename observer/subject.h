//
//  subject.h
//  observer
//
//  Created by surui on 2016/12/13.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef subject_h
#define subject_h

#include "heapobserver.h"
#include "btrackingobserver.h"
#include <vector>
using namespace std;

class Subject {
    
public:
    static Subject* getInstance();
    //Get input number
    void getVal(int v){
        n = v;
        notify();
    }
    //Register observers
    void addObserver(Observer* obs){
        vec.push_back(obs);
    }
    //Notify observers
    void notify() {
        for (int i = 0; i < vec.size(); i++){
            vec[i]->getPermutation(n);
        }
    }
    
    
private:
    static Subject* instance;
    Subject () : vec(), n(0) {}
    Subject (const Subject&);
    Subject& operator=(const Subject&);
    
    vector<Observer*> vec; //Keep the poiters of observers
    int n; //Inputed number;
};



#endif /* subject_h */
