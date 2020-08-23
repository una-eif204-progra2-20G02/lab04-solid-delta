cmake_minimum_required(VERSION 3.14)
project(lab04-solid)

set(CMAKE_CXX_STANDARD 17)
add_executable(game Game.h Game.cpp MainGame.cpp PhysicalGame.cpp PhysicalGame.h IShippable.h IShippable.h IReplaceable.h StreamingGame.cpp StreamingGame.h IReceiptSender.h EmailReceipts.h InAppReceipt.h)