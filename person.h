#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QDebug>

class Person : public QObject
{
    Q_OBJECT
public:
    explicit Person(QString name, QObject *parent = nullptr);
    enum license_type{vehicle, motorcycle, truck};

    void anotherLicense(license_type license);
signals:
    void licenseChanged(QString license);
};

#endif // PERSON_H
