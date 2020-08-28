#ifndef LAB04_SOLID_IRECEIPTSENDER_H
#define LAB04_SOLID_IRECEIPTSENDER_H

class IReceiptSender {
public:
    virtual std::string send_receipt() = 0;
};

#endif //LAB04_SOLID_IRECEIPTSENDER_H