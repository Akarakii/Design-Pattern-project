//
//  main.cpp
//  Observer
//
//  Created by surui 
//  Copyright © 2016年 surui. All rights reserved.
//

#include <cstdlib>
#include <exception>
#include <iostream>
#include <functional>

#include "PicsouSubscriber.h"
#include "SocialMedia.h"
#include "PicsouMagazine.h"

int main()
{
    bool success { false };
    
    try
    {
        PicsouSubscriber const subscriber_john { "John" };
        PicsouSubscriber const subscriber_diggle { "Diggle" };
        SocialMedia const twitter { "Twitter" };
        
        PicsouMagazine picsou_magazine {};
        picsou_magazine.add_observer(subscriber_john)
        .add_observer(subscriber_diggle)
        .add_observer(twitter);
        
        picsou_magazine.new_magazine("Picsou against aliens vol.1");
        
        PicsouSubscriber const subscriber_mahtiah { "Mahtiah" };
        
        picsou_magazine.add_observer(subscriber_mahtiah);
        
        picsou_magazine.new_magazine("Picsou against aliens vol.2");
        
        picsou_magazine.remove_observer(subscriber_john)
        .remove_observer(twitter);
        
        picsou_magazine.new_magazine("Picsou feat Indiana Jones against the aliens pumpkins !");
        
        success = true;
    }
    catch(std::exception const & e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cerr << "unknown error !" << std::endl;
    }
    
    return success ? EXIT_SUCCESS : EXIT_FAILURE;
}
