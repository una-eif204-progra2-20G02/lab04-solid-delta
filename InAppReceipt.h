#ifndef LAB04_SOLID_INAPPRECEIPT_H
#define LAB04_SOLID_INAPPRECEIPT_H

#include "IReceiptSender.h"

class InAppReceipt : public IReceiptSender {
    void send_receipt() override;
};

#endif //LAB04_SOLID_INAPPRECEIPT_H