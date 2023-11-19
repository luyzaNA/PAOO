#include <iostream>
#include <cstring>
#include "Residence/residence.h"

int main(int argc, char* argv[]) {

    //normal constructor
    Residence house1("str Principala, nr 51", 2, 51000.0, 2);
    house1.print();
    

    //copy constructor
    Residence copyHouse = house1;
    copyHouse.updateParkingSpace(4);
    house1.print();


    Residence* house2= new Residence("str Bicazm mr 31", 1, 21000.0,1);
    house2->print();
    Residence* house;
    house=house2;
    house->updatePrice(25000.0);
    house2->print();

    delete house2;
    house2->print();
 
    //move constructor
    Residence house3(std::move(house1));
    house1.print();
    house3.print();


}
