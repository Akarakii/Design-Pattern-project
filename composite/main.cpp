//
//  main.cpp
//  Composite
//
//  Created by surui
//  Copyright © 2016年 surui. All rights reserved.
//

#include <iostream>
#include "Composite.h"


using namespace std;

int main()
{
    
    ConcreteComposite folder1("Design Pattern");
    AbstractFileCpp file1_1("Observer");
    AbstractFileHpp file1_2("Undo/Redo");
    
    folder1.attach(&file1_1);
    folder1.attach(&file1_2);
    
    ConcreteComposite folder1_3("Composite");
    AbstractFileCpp file1_3_1("Composite.h");
    AbstractFileHpp file1_3_2("Composite.cpp");
    
    folder1_3.attach(&file1_3_1);
    folder1_3.attach(&file1_3_2);
    
    folder1.attach(&folder1_3);
    
    string str("─");
    folder1.display(str);
    
    cout<<endl;
    folder1_3.detach(&file1_3_1);
    folder1.display(str);
    
    
    cout<<endl;
    folder1.detach(&folder1_3);
    folder1.display(str);
    return 0;
}


