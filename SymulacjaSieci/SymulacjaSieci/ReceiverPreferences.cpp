#include "ReceiverPreferences.h"

std::map<IPackageReceiver*, double> ReceiverPreferences::getProbabilities()
{
	return probabilities;
}

void ReceiverPreferences::setProbabilites(std::map<IPackageReceiver*, double> newProbability)
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



