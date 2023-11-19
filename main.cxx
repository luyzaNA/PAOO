#include <iostream>
#include <cstring>
#include "Residence/residence.h"
#include "House/house.h"
#include "Apartament/apartament.h"
#include "StudioApartament/studioApartament.h"

int main(int argc, char* argv[]) {

    House house("str Bega nr 13", 2, 10000, 1, true);
    house.print();

    House house3 = house;
    house.updatePrice(53535);

    house.print();
    house3.print();

    Apartament ap("str Cometei nr 3", 2,121212,1,"Ionela");
    Apartament ap2;

    ap.print();
    ap2.print();

    ap2=ap;
    ap2.print();

    Apartament ap3("str Luna NR 4", 2,134254,1,"Andreea");
    ap3.print();
    ap3=std::move(ap);
    ap.print();
    ap3.print();

    ap3.updatePrice(2000);
    ap3.setPropertyManager("karina");
    ap3.print();
    
    studio::StudioApartament studioApartament("Strada Z", 1, 80000.0, 0, "Alex Johnson");
    studioApartament.print();
    studioApartament.setPropertyManager("Mari");
    studioApartament.print();


    return 0;

}
