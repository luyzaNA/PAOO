#include <iostream>
#include <cstring>
#include "Residence/residence.h"
#include "House/house.h"
#include "renovationTeam/renovationTeam.h"
#include <thread>

int main(int argc, char* argv[]) {

    House house("str Bega nr 13", 2, 10000, 1, true);
    std::thread person1enter([&house]() { 
        house.enter("Person 1"); 
    });
    
    std::thread person2enter([&house]() { 
        house.enter("Person 2");
    });

    std::thread person2leave([&house]() {
         house.leave("Person 2"); 
    });

    person1enter.join();
    person2enter.join();
    person2leave.join();

    // Afisează informații despre casă
    house.print();

    std::shared_ptr<House> house2 = std::make_shared<House>("str Timis nr 32", 3, 20000, 0, false);
    std::shared_ptr<RenovationTeam> renovationTeam = std::make_shared<RenovationTeam>("example team");

    std::weak_ptr<House> weakHouse= house2;

    if (auto sharedHouse = weakHouse.lock()) {
        sharedHouse->setRenovationTeam(renovationTeam);
    }

    renovationTeam->setHouse(house2);
    return 0;

}
