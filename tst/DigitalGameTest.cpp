#include <DigitalGame.h>
#include "gtest/gtest.h"

TEST(DigitalGameSuite, GigitalGamePrice) {
    DigitalGame digitalGame;
    digitalGame.setName("Call of Duty: Black Ops (PS3)");
    digitalGame.setPrice(15.00);

    EXPECT_DOUBLE_EQ(digitalGame.calculatePriceWithTax(),12.75);
    EXPECT_EQ(digitalGame.toString(),"Game Name: Call of Duty: Black Ops (PS3)\nPrice: $15.00\nPrice with Discount: $12.75");
}