cmake_minimum_required(VERSION 3.10)
project(prgII_bank_inheritance)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(prgII_bank_inheritance
        Account.cpp
        Account.h
        Bank.cpp
        Bank.h
        Client.cpp
        Client.h
        main.cpp
        PartnerAccount.cpp
        PartnerAccount.h
        Person.cpp
        Person.h)
