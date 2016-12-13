//
//  main.cpp
//  observer
//
//  Created by surui on 2016/12/13.
//  Copyright © 2016年 surui. All rights reserved.
//

#include <iostream>
#include "subject.h"
#include "checkinput.h"

Subject* Subject::instance = NULL;
CheckInput* CheckInput::instance = NULL;

int main() {
    
    Subject* subject = Subject::getInstance();
    CheckInput* checkInput = CheckInput::getInstance();
    HeapObserver heapObs(subject);
    BTrackingObserver btObs(subject);
    
    while (true){
        cout << "Input a number n to get permutations from 1 to 9: ";
        string s;
        cin >> s;
        int n = checkInput->isValid(s);
        if (n == -1){
            cout << "Please input valid number" << endl;
            continue;
        }
        subject->getVal(n);
        cout << "The outputs are located at current directory" << endl;
    }
    
}

