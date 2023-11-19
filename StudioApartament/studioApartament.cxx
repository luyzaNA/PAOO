#include <iostream>
#include "studioApartament.h"

using namespace studio;
using namespace std;

StudioApartament::StudioApartament(const char* studioAddress, int studiRoomsNumber, double studioPrice, int studioParkingSpaceNumber, const char* studiopropertyManager) : Apartament(studioAddress, studiRoomsNumber, studioPrice, studioParkingSpaceNumber, studiopropertyManager){}

void StudioApartament::setPropertyManager(const char* newPropertyManager) {
        delete[] propertyManager;

        propertyManager = new char[strlen(newPropertyManager) + 1];
        strcpy(propertyManager, newPropertyManager);
        cout<< "Studio - Setting property manager: " << newPropertyManager << endl;
}