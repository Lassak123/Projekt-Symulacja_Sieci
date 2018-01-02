#pragma once
#include <vector>
#include "Ramp.h"
#include "Worker.h"
#include "Storehouse.h"

class Factory
{
public:
	Ramp * getRamps();
	void addRamp(Ramp);
	void removeRamp(ElementID);

	Worker * getWorkers();
	void addWorker(Worker);
	void removeWorker(ElementID);

	Storehouse *  getStorehouses();
	void addStorehouse(Storehouse);
	void removeStorehouse(ElementID);

	bool isConsistent();
	

private:
	std::vector<Ramp> ramps;
	std::vector<Worker> workers;
	std::vector<Storehouse> storehouses;
};