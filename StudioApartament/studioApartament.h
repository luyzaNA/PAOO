#pragma once
#include "../Apartament/apartament.h"

namespace studio {
    class StudioApartament : public Apartament{
        public: 
            StudioApartament(const char* studioAddress, int studiRoomsNumber, double studioPrice, int studioParkingSpaceNumber, const char* studiopropertyManager);

            void setPropertyManager(const char* newcharPropertyManager) override;
    };
}