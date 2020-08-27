#include <DigitalGame.h>
#include "gtest/gtest.h"

TEST(DigitalGameSuite, GigitalGamePrice) {
    DigitalGame digitalGame;
    digitalGame.setName("Call of Duty: Black Ops (PS3)");
    digitalGame.setPrice(15.00);

    EXPECT_EQ(digitalGame.calculatePriceWithTax(),12.75);
}
