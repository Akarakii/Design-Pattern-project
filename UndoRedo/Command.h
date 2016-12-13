//
//  command.h
//  UndoRedo
//
//  Created by surui on 2016/12/13.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef command_h
#define command_h
class Command {
    
public:
    
    virtual void execute() = 0;
    
    
    virtual void undo() = 0;
    
    
    virtual ~Command() { }
    
};



#endif /* command_h */
