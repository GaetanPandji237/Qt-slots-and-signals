#ifndef PRINT_H
#define PRINT_H

#include <QDebug>
#include "person.h"
#include "driving_license.h"

template<class T, class U>
class Print
{
public:

    void print_stuff(T t, U u){
        Person* person = dynamic_cast<Person*>(t);
        Driving_license::license_type* license = static_cast<Driving_license::license_type*>(u);
        if(person && license){
            qInfo() << "Name: " << person->getName() << ", license type: " << *license;
        }else{
            throw "Not like I wanted!";
        }
    }
};

#endif // PRINT_H
