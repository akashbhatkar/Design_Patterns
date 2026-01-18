#ifndef CLIENT_H
#define CLIENT_H

#include "Vehicle.h"

class VehicleFactory
{
    public:
    VehicleFactory();
    Vehicle* getVehicle(int option);
};

#endif
