#include "driving_license.h"
#include "person.h"

Driving_license::Driving_license(QString name, license_type l_type, QObject *parent)
    : QObject{parent}
{
    this->name = name;
    this->l_type = l_type;
    qInfo() << "Driving license for " << name << " : Type: " << l_type;
}

void Driving_license::setLicenseType(license_type l_type){
    this->l_type = l_type;
}

void Driving_license::changeLicense(QString string){
    Driving_license::license_type license;
    if(string == "vehicle"){
        license = vehicle;
    }else if(string == "truck"){
        license = truck;
    }else if(string == "motorcycle"){
        license = motorcycle;
    }
    setLicenseType(license);
    Person* person = qobject_cast<Person*>(QObject::sender());
    qInfo() << "New license type: " << license << " for " << this->name;
    qInfo() << "The sender is: " << person << ". His name is: " << person->getName();
}
