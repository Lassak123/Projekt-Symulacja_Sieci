#ifndef FACTORY_H
#define FACTORY_H

#include <list>
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

	std::list<Ramp> getRampsL() { return ramps; }
	std::list<Worker> getRWorkerL() { return workers; }
	std::list<Storehouse> getStorehouseL() { return storehouses; }

	bool isConsistent();


private:
	std::list<Ramp> ramps;
	std::list<Worker> workers;
	std::list<Storehouse> storehouses;
};

#endif // !FACTORY_H