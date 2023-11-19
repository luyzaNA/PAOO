#pragma once

class Residence{
    private:
        char* address;
        int roomsNumber;
        double price;
        int parkingSpaceNumber;

    public:
        Residence();

        Residence(const char* address, int roomsNumber, double price, int parkingSpaceNumber);
       
        Residence(const Residence& house);
       
        Residence(Residence&& house);
       
        ~Residence();

        void print();

        void updatePrice(double newPrice);

        void updateParkingSpace(int newParkingSpace);

};