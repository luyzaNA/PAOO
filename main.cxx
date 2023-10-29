#include <iostream>
#include <cstring>
#include "house/house.h"

int main(int argc, char* argv[]) {

    //normal constructor
    House house1("str Principala, nr 51", 2, 51000.0, 2);
    house1.print();
    

    //copy constructor
    House copyHouse = house1;
    copyHouse.updateParkingSpace(4);
    house1.print();


    House* house2= new House("str Bicazm mr 31", 1, 21000.0,1);
    house2->print();
    House* house;
    house=house2;
    house->updatePrice(25000.0);
    house2->print();

    delete house2;
    house2->print();
 
    //move constructor
    House house3(std::move(house1));
    house1.print();
    house3.print();


}
