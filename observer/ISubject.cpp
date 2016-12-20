//
//  ISubject.cpp
//  Observer
//
//  Created by surui on 2016/12/20.
//  Copyright © 2016年 surui. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

#include "ISubject.h"
#include "IObserver.h"

void ISubject::update_observers() const
{
    for(auto observer : m_observers)
    {
        observer.get().update();
    }
}

ISubject & ISubject::add_observer(IObserver const & observer)
{
    m_observers.emplace_back(observer);
    
    std::cout << "Add an observer !" << std::endl;
    
    return *this;
}

ISubject & ISubject::remove_observer(IObserver const & observer)
{
    auto const observer_adress = &observer;
    
    m_observers.erase(std::remove_if(m_observers.begin(), m_observers.end(),
                                     [observer_adress](std::reference_wrapper<IObserver const> my_observer)
                                     {
                                         return &my_observer.get() == observer_adress;
                                     }
                                     ), m_observers.end());
    
    std::cout << "Remove an observer !" << std::endl;
    
    return *this;
}
