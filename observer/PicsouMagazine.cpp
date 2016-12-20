//
//  PiscouMagazine.cpp
//  Observer
//
//  Created by surui on 2016/12/20.
//  Copyright © 2016年 surui. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>

#include "PicsouMagazine.h"

void PicsouMagazine::new_magazine(std::string const & magazine_name) const
{
    std::cout << "There is a new PicsouMagazine : " << magazine_name << std::endl;
    
    ISubject::update_observers();
}
