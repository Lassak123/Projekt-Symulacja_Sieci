#include "Factory.h"
#include <array>

template<class T>
T* getT(std::list<T> list)
{
	T* result = new T[list.size()];
	i=0
	for (auto elem:list)
	{
		result[i] = elem;
		i++;
	}
	return result;
}

Ramp* Factory::getRamps()
{
	return getT<Ramp>(ramps);
}

Worker* Factory::getWorkers()
{
	return getT<Worker>(workers);
}

Storehouse* Factory::getStorehouses()
{
	return getT<Storehouse>(storehouses);
}


void Factory::addRamp(Ramp newRamp)
{
	ramps.push_back(newRamp);
}


void Factory::addWorker(Worker newWorker)
{
	workers.push_back(newWorker);
}

void Factory::addStorehouse(Storehouse newStoragehouse)
{
	storehouses.push_back(newStoragehouse);
}


void Factory::removeRamp(ElementID id)
{
	ramps.remove_if([id](const Ramp& lambdaRamp) 
	{
		return (lambdaRamp.getId()==id);
	});
}

void Factory::removeWorker(ElementID id)
{
	IPackageReceiver* remove;
	for (auto& worker:workers)
	{
		if (worker.getId()==id)
		{
			remove = &worker;
			break;
		}
	}
	for (auto& ramp:ramps)
	{
		ramp.receiverPreferences.removeReceiver(remove);
	}
	for (auto& worker : workers)
	{
		worker.receiverPreferences.removeReceiver(remove);
	}
	workers.remove_if([id](const Worker& lambdaWorker)
	{
		return (lambdaWorker.getId() == id);
	});
}

void Factory::removeStorehouse(ElementID id)
{
	IPackageReceiver* remove;
	for (auto& sth : storehouses)
	{
		if (sth.getId() == id)
		{
			remove = &sth;
			break;
		}
	}
	for (auto& worker : workers)
	{
		worker.receiverPreferences.removeReceiver(remove);
	}
	storehouses.remove_if([id](const Storehouse& lambdaSth)
	{
		return (lambdaSth.getId() == id);
	});
}



bool Factory::isConsistent()
{
	int n = workers.size();
	int* ok = new int[n];
	for (int i=0;i<n;i++)
	{
		ok[i] = 0;
	}
	int newi = 0, oldi = 0;
	bool change = true;
	for (auto& work:workers)
	{
		auto* pref= work.receiverPreferences.view();
		for (int i = 0; i < work.receiverPreferences.getPreferences().size(); i++)
		{
			if (pref[i].first->getReceiverType == ReciverType::STORAGEHOUSE)
				ok[i] = 1;
		}

	}
	while (change)
	{
		
	}

}

