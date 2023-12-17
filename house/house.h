#pragma once
#include "../Residence/residence.h"
#include <memory>

class RenovationTeam;

class House : public Residence{
    private:
        char* address;
        int roomsNumber;
        double price;
        int parkingSpaceNumber;
        bool hasPool;
        std::shared_ptr<RenovationTeam> renovation;


    public:
        House();

        House(const char* houseAddress, int houseRoomsNumber, double housePrice, int houseParkingSpaceNumber, bool houseHasPool);
       
        House(const House& house);
       
        House(House&& house);
       
        ~House();

        void print() const override;

        void updatePrice(double newPrice) override;
        void enter(const char* person) ;
        void leave(const char* person) ;
        void setRenovationTeam(const std::shared_ptr<RenovationTeam>& owner);

};
