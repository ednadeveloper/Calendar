//
// Created by sebastiano insinga on 14/11/2020.
//

#ifndef CALENDAR_CALENDAR_H
#define CALENDAR_CALENDAR_H
#include <map>
#include <iostream>
using namespace std;


typedef pair<const Key,T> value_type;
template<
        class Key,
        class T,
        class Allocator=allocator <pair<const Key, T>>
>class map;
namespace pmr {
    template<class Key, class T>
    using map =map<Key, T
            pmr::polymorphic_allocator <pair<const Key,T>>>

}


class Calendar {


};



#endif //CALENDAR_CALENDAR_H
