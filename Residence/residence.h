#pragma once

class Residence{
    public:
       
        virtual ~Residence(){}

        virtual void print() const = 0;

        virtual void updatePrice(double newPrice) = 0;
};