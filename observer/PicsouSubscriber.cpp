//
//  PicsouSubscriber.cpp
//  Observer
//
//  Created by surui on 2016/12/20.
//  Copyright © 2016年 surui. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <utility>
#include <iostream>

#include "PicsouSubscriber.h"

PicsouSubscriber::PicsouSubscriber(std::string const & name) : m_name { name } {}

PicsouSubscriber::PicsouSubscriber(std::string && name) : m_name { std::move(name) } {}

void PicsouSubscriber::update() const
{
    std::cout << m_name << " got his new PicsouMagazine ! Hourra !" << std::endl;
}
