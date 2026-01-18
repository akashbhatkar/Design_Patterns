#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike : public Vehicle
{
    public:
        Bike();
        virtual void CreateVehicle() override;
};
#endif
