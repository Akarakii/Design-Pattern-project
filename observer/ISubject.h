//
//  ISubject.h
//  Observer
//
//  Created by surui on 2016/12/20.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef ISubject_h
#define ISubject_h

#include <vector>
#include <functional>

class IObserver;

class ISubject
{
private:
    std::vector<std::reference_wrapper<IObserver const>> m_observers;
public:
    ISubject() = default;
    void update_observers() const;
    ISubject & add_observer(IObserver const & observer);
    ISubject & remove_observer(IObserver const & observer);
    virtual ~ISubject() = default;
};

#endif /* ISubject_h */
