//
//  Composite.cpp
//  Composite
//
//  Created by surui on 2016/12/20.
//  Copyright © 2016年 surui. All rights reserved.
//

#include <stdio.h>
#include "Composite.h"
#include <iostream>
using namespace std;

void ConcreteComposite::attach(Composite* cmp)
{
    if(nullptr != cmp)
    {
        mList.push_back(cmp);
    }
}

void ConcreteComposite::detach(Composite* cmp)
{
    if(nullptr != cmp)
    {
        mList.remove(cmp);
    }
}

void ConcreteComposite::display(string str)
{
    list<Composite* >::iterator beg = mList.begin();
    cout<<str<<mName<<endl;
    str = str + str;
    for ( ; beg != mList.end(); beg++)
    {
        (*beg)->display(str);
    }
}



void AbstractFileHpp::display(string str)
{
    cout<<str<<mName<<endl;
}


void AbstractFileCpp::display(string str)
{
    cout<<str<<mName<<endl;
}


