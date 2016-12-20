//
//  IObserver.h
//  Observer
//
//  Created by surui on 2016/12/20.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef IObserver_h
#define IObserver_h


class IObserver
{
public:
    IObserver() = default;
    virtual void update() const = 0;
    virtual ~IObserver() = default;
};


#endif /* IObserver_h */
