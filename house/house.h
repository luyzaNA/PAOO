#pragma once

class House{
    private:
        char* address;
        int roomsNumber;
        double price;
        int parkingSpaceNumber;

    public:
        House();

        House(const char* address, int roomsNumber, double price, int parkingSpaceNumber);
       
        House(const House& house);
       
        House(House&& house);
       
        ~House();

        void print();

        void updatePrice(double newPrice);

        void updateParkingSpace(int newParkingSpace);

};