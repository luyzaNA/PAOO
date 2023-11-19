#include <codecvt>
#include <iostream>
#include "house.h"

using namespace std;

House::House() : address(nullptr), roomsNumber(0), price(0.0), parkingSpaceNumber(0), hasPool(false) {
    cout<< "House constructor - DEFAULT" <<endl;
}

House::House(const char* houseAddress, int houseRoomsNumber, double housePrice, int houseParkingSpaceNumber, bool houseHasPool)
        : roomsNumber(houseRoomsNumber), price(housePrice), parkingSpaceNumber(houseParkingSpaceNumber), hasPool(houseHasPool) {
        address = new char[strlen(houseAddress) + 1];
        strcpy(address, houseAddress);

        cout <<"House constructor - PARAMETERIZED" << endl;
    }

House::House(const House& house)
        : roomsNumber(house.roomsNumber), price(house.price), parkingSpaceNumber(house.parkingSpaceNumber), hasPool(house.hasPool) {
        address = new char[strlen(house.address) + 1];
        strcpy(address, house.address);

        cout<< "House constructor - COPY" <<endl;
    }

House::House(House&& house) 
        : address(house.address), roomsNumber(house.roomsNumber),
          price(house.price), parkingSpaceNumber(house.parkingSpaceNumber), hasPool(house.hasPool) {

        house.address = nullptr;

        cout<< "House constructor - MOVE" <<endl;
    }

 House::~House() {
        delete[] address;

        cout<<"House destructor"<<endl;
    }

void House::print() const {
    if(this->address == NULL){
		cout<<"House not found"<<endl;
		return;
	}
    cout<<"House with adress: "<<address<<", rooms number: " <<roomsNumber<<", parking space number: "<<parkingSpaceNumber<<", price:"<<price;

    if (hasPool) {
        cout << ", has pool: " << (hasPool ? "Yes" : "No") << endl;
    }
}

void House::updatePrice(double newPrice) {
    if (hasPool) {
        price = newPrice * 1.9;
    } else {
        price = newPrice;
    }
}
