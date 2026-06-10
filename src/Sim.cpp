#include <vector>
#include "Sim.h"

struct Prey 
{
    float posX;
    float posY;
};

struct Predator 
{
    float PosX;
    float posY;
};

struct Plant 
{
    float PosX;
    float posY;
};

std::vector<Prey> PredatorPopulation;
std::vector<Prey> PreyPopulation;
std::vector<Prey> PlantPopulation;

Sim::Sim()
{
    Log::LogInfo("Starting Sim");
}

Sim::~Sim()
{
    Log::LogInfo("Ending Sim");
}
