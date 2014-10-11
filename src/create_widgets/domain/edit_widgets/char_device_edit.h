#ifndef CHAR_DEVICE_EDIT_H
#define CHAR_DEVICE_EDIT_H

#include "create_widgets/domain/common_widgets/char_device.h"

class CharDevice_Edit : public CharDevice
{
    Q_OBJECT
public:
    explicit CharDevice_Edit(
            QWidget *parent = 0,
            virConnectPtr conn = NULL,
            virDomainPtr domain = NULL,
            QString _tag = QString());

signals:

public slots:
    void             setDeviceData(QString&);
};

#endif // CHAR_DEVICE_EDIT_H