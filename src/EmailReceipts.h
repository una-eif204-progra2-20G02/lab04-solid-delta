#ifndef LAB04_SOLID_EMAILRECEIPTS_H
#define LAB04_SOLID_EMAILRECEIPTS_H

#include "IReceiptSender.h"

class EmailReceipts : public IReceiptSender{
    void send_receipt() override;
};

#endif //LAB04_SOLID_EMAILRECEIPTS_H