//
//  Composite.h
//  Composite
//
//  Created by surui on 2016/12/20.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef Composite_h
#define Composite_h
#include <list>
using std::list;

#include <string>
using std::string;

#include <iostream>
using namespace std;

class Composite
{
public:
    Composite(char* name):mName(name){}
    virtual void attach(Composite* file_name){}
    virtual void detach(Composite* file_name){}
    virtual void display(string str){}
    
    
protected:
    char* mName;
    list<Composite* > mList;
};

class ConcreteComposite:public Composite{
public:
    ConcreteComposite(char* name):Composite(name){}
    virtual void attach(Composite* file_name);
    virtual void detach(Composite* file_name);
    virtual void display(string str);
    
};

class AbstractFileHpp:public Composite{
public:
    AbstractFileHpp(char* name):Composite(name){}
    virtual void display(string str);
    
    
};

class AbstractFileCpp:public Composite{
public:
    AbstractFileCpp(char* name):Composite(name){}
    virtual void display(string str);
    
    
};



#endif /* Composite_h */
