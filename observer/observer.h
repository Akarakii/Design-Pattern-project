//
//  observer.h
//  observer
//
//  Created by surui on 2016/12/13.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef observer_h
#define observer_h

#include <iostream>
#include <vector>
using namespace std;

class  Observer{
public:
    virtual ~Observer() {}
    virtual void getPermutation(int n) = 0;
};



#endif /* observer_h */
