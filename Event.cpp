//
// Created by sebastiano insinga on 14/11/2020.
//

#include "Event.h"
#include <iostream>
using namespace std ;




Event ::Event() {

    struct CreateEvent {
        char name;
        struct tm;
    };
    this->name='\0';
    this->EndTime=NULL;
    this->StartTime=NULL;
};


int Event:: setEvent() {
    // struct createEvent *Event1 =new struct CreateEvent;
    cout << "INSERISCI NOME EVENTO" << endl;
    cin >> name;
    cout << "Inserisci data inizio" << endl;
    cin >> StartTime;
    cout << "Inserisci data fine" << endl;
    cin >> EndTime;
};

int Event:: UpdateEvent() {
    struct createEvent {
        char name;
        struct tm;
    };
    cout << "nuovo nome" << endl;
    cin >> name;
    cout << "Inserisci nuova data inizio" << endl;
    cin >> StartTime;
    cout << "Inserisci nuova data fine" << endl;
    cin >> EndTime;


}
int Event:: DeleteEvent() {
    struct createEvent {
        char name;
        struct tm;
    };
    // delete

}