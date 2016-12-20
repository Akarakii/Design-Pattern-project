//
//  SocialMedia.h
//  Observer
//
//  Created by surui on 2016/12/20.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef SocialMedia_h
#define SocialMedia_h

#include <string>

#include "IObserver.h"

class SocialMedia final : public IObserver
{
private:
    std::string m_name;
public:
    SocialMedia(std::string const & name);
    SocialMedia(std::string && name);
    void update() const override;
    ~SocialMedia() override = default;
};

#endif /* SocialMedia_h */
