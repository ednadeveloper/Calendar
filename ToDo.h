//
// Created by sebastiano insinga on 14/11/2020.
//

#ifndef CALENDAR_TODO_H
#define CALENDAR_TODO_H

class ToDo {
public:
    char name;
    bool checked;
    int DeadLine;
public:
    ToDo();
    int setToDo();

    int UpdateToDo();
    ~ToDo();

};



#endif //CALENDAR_TODO_H
