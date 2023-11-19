#pragma once
#include "../Residence/residence.h"

class House : public Residence{
    private:
        char* address;
        int roomsNumber;
        double price;
        int parkingSpaceNumber;
        bool hasPool;

    public:
        House();

        House(const char* houseAddress, int houseRoomsNumber, double housePrice, int houseParkingSpaceNumber, bool houseHasPool);
       
        House(const House& house);
       
        House(House&& house);
       
        ~House();

        void print() const override;

        void updatePrice(double newPrice) override;

};
