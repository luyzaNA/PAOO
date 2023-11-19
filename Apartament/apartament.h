#pragma once
#include "../Residence/residence.h"

class Apartament : public Residence{
    protected:
        char* address;
        int roomsNumber;
        double price;
        int parkingSpaceNumber;
        char* propertyManager;

    public:
        Apartament();

        Apartament(const char* apartamentAddress, int apartamentRoomsNumber, double apartamentPrice, int apartamentParkingSpaceNumber, const char* apartmanetPropertyManager);
       
        Apartament(const Apartament& apartament);
       
        Apartament(Apartament&& apartament);
       
        ~Apartament();

        Apartament& operator=(const Apartament& apartament);
        
        Apartament& operator=(Apartament&& apartament) ;

        void print() const override;

        void updatePrice(double newPrice) override;

        virtual void setPropertyManager(const char* newcharPropertyManager);
};
