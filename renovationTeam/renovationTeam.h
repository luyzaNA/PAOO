#pragma once
#include <memory>

class House;

class RenovationTeam {
private:
    char* name;
    std::weak_ptr<House> houseP;

public:
    RenovationTeam(const char* team);
    ~RenovationTeam();

    void setHouse(const std::shared_ptr<House>& house);
};