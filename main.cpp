#include <QCoreApplication>
#include <QTextStream>
#include "person.h"
#include "driving_license.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Person person("Jeredoso", &a);
    Driving_license d("Jeredoso", Driving_license::truck, &a);
    QObject::connect(&person, &Person::licenseChanged, &d, &Driving_license::changeLicense);
    while(1){
        //QString input;
        QTextStream in(stdin);
        qInfo() << "Enter either vehicle or motorcycle or truck";
        QString line = in.readLine().trimmed();
        //in >> input;
        if(line.isEmpty()){
            break;
        }
        if(line == "vehicle"){
            person.anotherLicense(Person::vehicle);
            qInfo() << "You entered vehicle";
        }else if(line == "truck"){
            person.anotherLicense(Person::truck);
            qInfo() << "You entered truck";
        }else if(line == "motorcycle"){
            person.anotherLicense(Person::motorcycle);
            qInfo() << "You entered motorcycle";
        }else{
            qInfo() << "NOT AN OPTION. You entered:" << line;
        }
    }

    return a.exec();
}
