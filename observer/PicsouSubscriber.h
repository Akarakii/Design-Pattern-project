//
//  PicsouSubscriber.h
//  Observer
//
//  Created by surui on 2016/12/20.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef PicsouSubscriber_h
#define PicsouSubscriber_h

#include <string>

#include "IObserver.h"

class PicsouSubscriber final : public IObserver
{
private:
    std::string m_name;
public:
    PicsouSubscriber(std::string const & name);
    PicsouSubscriber(std::string && name);
    void update() const override;
    ~PicsouSubscriber() override = default;
};

#endif /* PicsouSubscriber_h */
