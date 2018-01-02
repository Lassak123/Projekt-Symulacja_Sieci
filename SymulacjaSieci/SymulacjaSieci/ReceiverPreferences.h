#pragma once
#include "Types.h"
#include <map>
#include "IPackageReceiver.h"
#include <utility>
class ReceiverPreferences
{
public:
	
	std::map<IPackageReceiver*, double> getProbabilities();
	void setProbabilites(std::map < IPackageReceiver*, double>);
	void addReceiver(IPackageReceiver*);
	void addReceiverWithProbability(IPackageReceiver*, double);
	void removeReceiver(IPackageReceiver*);
	IPackageReceiver* drawReceiver();//?? co to ma robiæ
	std::pair<IPackageReceiver*, double>* view();
private:
	std::map<IPackageReceiver*, double> probabilities;

};