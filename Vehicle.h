#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>

class Vehicle
{
    public:
    Vehicle();
    virtual ~Vehicle();
    virtual void CreateVehicle() = 0;
};
#endif
