#include "ReceiverPreferences.h"
#include <cstdlib>
#include <ctime>

void ReceiverPreferences::setPreferences(std::map<IPackageReceiver*, double> newProbability)
{
	probabilities = newProbability;

}
void ReceiverPreferences::addReceiver(IPackageReceiver* newreceiver)
{
	int size = probabilities.size() + 1;
	for (auto& prob : probabilities)
	{
		prob.second *= (1 - 1 / size);
	}
	
	probabilities.insert(std::pair<IPackageReceiver*, double>(newreceiver, 1 / size));
}

void ReceiverPreferences::addReceiverWithProbability(IPackageReceiver* newreceiver, double newprob)
{
	for (auto &prob : probabilities)
	{
		prob.second *= (1 - newprob);
	}
	probabilities.insert(std::pair<IPackageReceiver*, double>(newreceiver, newprob));
}

void ReceiverPreferences::removeReceiver(IPackageReceiver* deletedReceiver)
{
	auto deletedprob = probabilities[deletedReceiver];
	probabilities.erase(deletedReceiver);
	for (auto & prob : probabilities)
	{
		prob.second /= (1 - deletedprob);
	}
}

std::pair<IPackageReceiver*, double>* ReceiverPreferences::view() const
{
	auto* result = new std::pair<IPackageReceiver*, double>[probabilities.size];
	int i = 0;
	for (auto& prob:probabilities)
	{
		result[i].first = prob.first;
		result[i].second = prob.second;
		i++;
	}
	return result;
}

IPackageReceiver* ReceiverPreferences::drawReceiver(double porbability) const
{
	double help = 0;
	for (auto& prob : probabilities)
	{
		help += prob.second;
		if (porbability<help)
		{
			return prob.first;
		}
	}
}






