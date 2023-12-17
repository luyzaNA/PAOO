#include <iostream>
#include <cstring>
#include "renovationTeam.h"
#include "../House/house.h"


RenovationTeam::RenovationTeam(const char* team) {
    name = new char[strlen(team) + 1];
    strcpy(name, team);
    std::cout << name << "Renovation Team Constructor" << std::endl;
}

RenovationTeam::~RenovationTeam() {
    delete[] name;
}

void RenovationTeam::setHouse(const std::shared_ptr<House>& house) {
    houseP = house;
}