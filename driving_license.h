#ifndef DRIVING_LICENSE_H
#define DRIVING_LICENSE_H

#include <QObject>
#include <QDebug>

class Driving_license : public QObject
{
    Q_OBJECT

public:
    enum license_type{vehicle, motorcycle, truck};
    explicit Driving_license(QString name, license_type l_type, QObject *parent = nullptr);
    void setLicenseType(license_type l_type);

private:
    QString name;
    license_type l_type;
signals:

public slots:
    void changeLicense(QString string);

};

#endif // DRIVING_LICENSE_H
