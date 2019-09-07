/*
 
 Chapter 4 Part 6 Task:
 Public vs. Protected vs Private & Friend
 
 1) get familiar with the classes.
 
 2) Fix the include errors.
 
 3) HighwayPatrol can check the speed of vehicles on the highway.
 make this happen without adding getters to the Highway or Vehicle class
 
 4) implement the Highway::addVehicleInternal
 this function should call the non-evasive member function of the derived class, so use the technique shown in the Casting video.
 
 5) implement the Highway::removeVehicleInternal
 this function should call the evasive member function of the derived class, if it has one. use the technique shown in the Casting video.
 
 6) Add a Truck type
 semi-trucks don't evade when they're pulled over, unlike cars and motorcycles.
 7) Add some Cars to the Highway
 
 8) Add some Motorcycles to the Highway
 
 9) Add some SemiTrucks to the highway
 
 remember to follow the rules regarding Base Classes that have virtual functions
 
 share it in #ch4_p06 when you can compile and run it without errors
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

int main()
{
    Highway highway;
    
    std::vector<Car> cars
    {
        Car("janice"),
    };
    std::vector<Motorcycle> motorcycles
    {
        
    };
    
    std::vector<SemiTruck> trucks
    {
        
    };
    
    assert(false);
    //add the cars, motorcycles and trucks to the highway using range-based for() loops.
    
    
    HighwayPatrol cop;
    cop.scanHighway(&highway);
    
    std::cout << "done" << std::endl;
    
    return 0;
}
