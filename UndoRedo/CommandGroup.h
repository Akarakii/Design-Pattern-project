//
//  CommandGroup.h
//  UndoRedo
//
//  Created by surui on 2016/12/13.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef CommandGroup_h
#define CommandGroup_h
#include <vector>
#include "Command.h"



class CommandGroup : public Command {
    
private:
    
    std::vector<Command*> commands;
    
    
public:
    
    ~CommandGroup();
    void add( Command* command );
    void execute();
    void undo();
    
    
};



#endif /* CommandGroup_h */
