//
//  SocialMedia.cpp
//  Observer
//
//  Created by surui on 2016/12/20.
//  Copyright © 2016年 surui. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <utility>
#include <iostream>

#include "SocialMedia.h"

SocialMedia::SocialMedia(std::string const & name) : m_name { name } {}

SocialMedia::SocialMedia(std::string && name) : m_name { std::move(name) } {}

void SocialMedia::update() const
{
    std::cout << "There is a buzz on " << m_name << " about the new PicsouMagazine !" << std::endl;
}
