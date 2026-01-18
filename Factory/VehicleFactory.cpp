#include "VehicleFactory.h"
#include "Bike.h"
#include "Car.h"


#include<iostream>
using namespace std;

VehicleFactory::VehicleFactory() {} 

Vehicle* VehicleFactory::getVehicle(int option)
{
    Vehicle *ptr = nullptr;
    switch(option)
    {
        case 1: ptr = new Car();
                break;
        case 2: ptr = new Bike();
                break;
        default: ptr = nullptr;
                 break;
    }
    return ptr;
}
