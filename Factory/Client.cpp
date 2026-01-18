#include<iostream>
#include "VehicleFactory.h"
#include "Vehicle.h"
using namespace std;

int main()
{
    int option;
    while(1)
    {
        cout<<"Press 1 to create a Car\nPress 2 to create a Bike"<<endl;
        cin>>option;
        VehicleFactory *factory = new VehicleFactory();

        Vehicle *vehicleptr = factory->getVehicle(option);


        if(vehicleptr != nullptr)
        {
            vehicleptr->CreateVehicle();
            delete vehicleptr;
        }
        else
        {
            cout<<"Enter a valid selection"<<endl;
        }

    }
}
