#include <iostream>
#include <cstring>
#include "apartament.h"

using namespace std;

Apartament::Apartament() : address(nullptr), roomsNumber(0), price(0.0), parkingSpaceNumber(0), propertyManager(nullptr) {
    cout<< "Apartament constructor - DEFAULT"<<endl;
}

Apartament::Apartament(const char* apartamentAddress, int apartamentRoomsNumber, double apartamentPrice, int apartamentParkingSpaceNumber, const char* apartamentPropertyManager)
        : address(nullptr), roomsNumber(apartamentRoomsNumber), price(apartamentPrice), parkingSpaceNumber(apartamentParkingSpaceNumber), propertyManager(nullptr) {
        address = new char[strlen(apartamentAddress) + 1];
        strcpy(address, apartamentAddress);

        propertyManager = new char[strlen(apartamentPropertyManager) + 1];
        strcpy(propertyManager, apartamentPropertyManager);
    
        cout<<"Apartament constructor - PARAMETERIZED"<<endl;
}

Apartament::Apartament(const Apartament& apartament)
        : address(nullptr), roomsNumber(apartament.roomsNumber), price(apartament.price), parkingSpaceNumber(apartament.parkingSpaceNumber), propertyManager(nullptr) {
        address = new char[strlen(apartament.address) + 1];
        strcpy(address, apartament.address);

        propertyManager = new char[strlen(apartament.propertyManager) + 1];
        strcpy(propertyManager, apartament.propertyManager);
   
        cout<<"Apartament constructor - COPY"<<endl;
}

 Apartament::Apartament(Apartament&& apartament)
        : address(apartament.address), roomsNumber(apartament.roomsNumber),
          price(apartament.price), parkingSpaceNumber(apartament.parkingSpaceNumber), propertyManager(apartament.propertyManager) {
        apartament.address = nullptr;
        apartament.propertyManager = nullptr;

        cout<<"Apartament constructor - MOVE"<<endl;
}

Apartament::~Apartament() {
    delete[] address;
    delete[] propertyManager;
}

Apartament&  Apartament::operator=(const Apartament& apartament) {
        if (this != &apartament) {  

            delete[] address;
            delete[] propertyManager;

            roomsNumber = apartament.roomsNumber;
            price = apartament.price;
            parkingSpaceNumber = apartament.parkingSpaceNumber;

            address = new char[strlen(apartament.address) + 1];
            strcpy(address, apartament.address);

            propertyManager = new char[strlen(apartament.propertyManager) + 1];
            strcpy(propertyManager, apartament.propertyManager);
        }
        return *this;
            cout <<" Copy assigment operator" <<endl;

}

Apartament& Apartament::operator=(Apartament&& apartament) {
        if (this != &apartament) {  
            delete[] address;
            delete[] propertyManager;

            address = apartament.address;
            roomsNumber = apartament.roomsNumber;
            price = apartament.price;
            parkingSpaceNumber = apartament.parkingSpaceNumber;
            propertyManager = apartament.propertyManager;

            apartament.price=0.0;
            apartament.parkingSpaceNumber=0;
            apartament.roomsNumber=0;
            apartament.address = nullptr;
            apartament.propertyManager = nullptr;
        }
        return *this;
        cout<< " Move assigment operator" << endl;

}

void Apartament::print() const {
    if(this->address == NULL){
		cout<<"Apartament not found"<<endl;
		return;
	}
    cout<<"Apartament with adress: "<<address<<", rooms number: " <<roomsNumber<<", parking space number: "<<parkingSpaceNumber<<", price:"<<price<<" property Manager"<<propertyManager<<endl;
}

void Apartament::updatePrice(double newPrice) {
     price = newPrice;
}

void Apartament::setPropertyManager(const char* newPropertyManager) {
        delete[] propertyManager;

        propertyManager = new char[strlen(newPropertyManager) + 1];
        strcpy(propertyManager, newPropertyManager);
        cout << "Apartament - Setting property manager: " << newPropertyManager << endl;

}





 
