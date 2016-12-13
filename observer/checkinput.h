//
//  checkinput.h
//  observer
//
//  Created by surui on 2016/12/13.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef checkinput_h
#define checkinput_h
#include <string>
using namespace std;

class CheckInput {
    
public:
    static CheckInput* getInstance();
    int isValid(const string& s);
    
private:
    static CheckInput* instance;
    CheckInput () {}
    CheckInput (const CheckInput&);
    CheckInput& operator=(const CheckInput&);
};


#endif /* checkinput_h */
