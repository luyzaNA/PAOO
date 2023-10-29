#include <iostream>
#include "house.h"

House::House(const char* homeAddress, int rooms, double housePrice, int parking)
        : roomsNumber(rooms), parkingSpaceNumber(parking), price(housePrice) {
        address = new char[strlen(homeAddress) + 1];
        strcpy(address, homeAddress);
        std::cout << "Constructor" << std::endl;
}

 House::House(const House& house)
        : roomsNumber(house.roomsNumber),
          parkingSpaceNumber(house.parkingSpaceNumber),
          price(house.price) {
        address = new char[strlen(house.address) + 1];
        strcpy(address, house.address);
        std::cout << "Copy Constructor" << std::endl;
    }
House:: House(House&& house)
        : address(house.address),
          roomsNumber(house.roomsNumber),
          parkingSpaceNumber(house.parkingSpaceNumber),
          price(house.price) {

        house.address = nullptr;
        house.roomsNumber = 0;
        house.parkingSpaceNumber = 0;
        house.price = 0.0;
        std::cout << "Move Constructor" << std::endl;
    }

House::~House(){
    delete[] address;
    std::cout << "Destructor" << std::endl;

}

House::House():
    address(nullptr),
    roomsNumber(0),
    parkingSpaceNumber(0),
    price(0.0){
    std::cout << "Default constructor" << std::endl;
}

void House::print(){
    if(this->address == NULL){
		std::cout<<"House not found"<<std::endl;
		return;
	}
    std::cout<<"House with adress: "<<address<<", rooms number: " <<roomsNumber<<", parking space number: "<<parkingSpaceNumber<<", price:"<<price<<std::endl;
}

void House::updatePrice(double newPrice){
    this->price=newPrice;
}

void House::updateParkingSpace(int newParkingSpace){
    this->parkingSpaceNumber=newParkingSpace;
}
