#include "person.h"

using namespace std;

Person::Person(QString name, QObject *parent)
    : QObject{parent}
{
    this->name = name;
    qInfo() << "New person created: " << name;
}

void Person::anotherLicense(license_type license){
    switch (license) {
    case truck:
        emit licenseChanged("truck");
        break;
    case motorcycle:
        emit licenseChanged("motorcycle");
        break;
    case vehicle:
        emit licenseChanged("vehicle");
        break;
    }
}

QString Person::getName(){
    return this->name;
}
