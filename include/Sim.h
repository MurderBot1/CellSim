#ifndef SIM_H
#define SIM_H

#include "Util.h"
#include "Types.h"

#include <vector>

struct Prey 
{
    LocationData locData;
};

struct Predator 
{
    LocationData locData;
};

struct Plant 
{
    LocationData locData;
};

class Sim
{
public:
    Sim();
    ~Sim();
private:
    std::vector<Prey> PredatorPopulation;
    std::vector<Prey> PreyPopulation;
    std::vector<Prey> PlantPopulation;
};

#endif