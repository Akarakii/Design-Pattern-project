//
//  PiscouMagazine.h
//  Observer
//
//  Created by surui on 2016/12/20.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef PiscouMagazine_h
#define PiscouMagazine_h

#include <string>
#include <functional>

#include "ISubject.h"

class PicsouMagazine final : public ISubject
{
public:
    PicsouMagazine() = default;
    void new_magazine(std::string const & magazine_name) const;
    ~PicsouMagazine() override = default;
};

#endif /* PiscouMagazine_h */
