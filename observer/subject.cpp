//
//  subject.cpp
//  observer
//
//  Created by surui on 2016/12/13.
//  Copyright © 2016年 surui. All rights reserved.
//

#include <stdio.h>
#include "subject.h"

Subject* Subject::getInstance() {
    if (!instance) instance = new Subject();
    return instance;
}
