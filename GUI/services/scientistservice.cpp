#include "scientistservice.h"

#include <algorithm>

using namespace std;

ScientistService::ScientistService()
{

}

std::vector<Scientist> ScientistService::getAllScientists(string orderBy, bool orderAscending)
{
    return scientistRepo.getAllScientists(orderBy, orderAscending);
}

std::vector<Scientist> ScientistService::searchForScientists(string searchTerm)
{
    return scientistRepo.searchForScientists(searchTerm);
}

bool ScientistService::addScientist(Scientist scientist)
{
    return scientistRepo.addScientist(scientist);
}

bool ScientistService::removeScientist(Scientist scientist)
{
    return scientistRepo.removeScientist(scientist);
}

bool ScientistService::editScientist(Scientist scientist)
{
    return scientistRepo.editScientist(scientist);
}

std::vector<Computer> ScientistService::getComputersByScientists(Scientist scientist)
{
    return scientistRepo.getComputersByScientists(scientist);
}
