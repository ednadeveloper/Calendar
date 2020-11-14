//
// Created by sebastiano insinga on 14/11/2020.
//

#ifndef CALENDAR_EVENT_H
#define CALENDAR_EVENT_H

class Event {
public:
    char name;
    int StartTime;
    int EndTime;
public:
    Event();
    int setEvent();
    int DeleteEvent();
private:
    int setName();
    int UpdateEvent();
    int shareEvent();
};

#endif //CALENDAR_EVENT_H
