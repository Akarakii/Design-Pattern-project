//
//  History.h
//  UndoRedo
//
//  Created by surui on 2016/12/13.
//  Copyright © 2016年 surui. All rights reserved.
//

#ifndef History_h
#define History_h

#include <vector>


class Command;



class History {
    
private:
    
    std::vector<Command*> history;
    int lastExecuted;
    int lastSaved;
    
public:
    
    History();
    ~History();
    
    void clear();
    void save();
    bool modified();
    void limit( unsigned int numCommands );
    void add( Command* command, bool execute );
    void revert();
    void undo();
    void redo();
    
};


#endif /* History_h */
