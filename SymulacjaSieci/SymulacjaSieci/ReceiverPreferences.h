#ifndef RECEIVERPREFERENCE_H
#define RECEIVERPREFERENCE_H

#include <map>
#include <utility>
#include "Types.h"
#include "IPackageReceiver.h"

class ReceiverPreferences
{
public:

	inline std::map<IPackageReceiver*, double> getProbabilities() { return probabilities; }
	void setProbabilites(std::map < IPackageReceiver*, double>);
	void addReceiver(IPackageReceiver*);
	void addReceiverWithProbability(IPackageReceiver*, double);
	void removeReceiver(IPackageReceiver*);
	IPackageReceiver* drawReceiver();//?? co to ma robiæ
	std::pair<IPackageReceiver*, double>* view();
private:
	std::map<IPackageReceiver*, double> probabilities;

};

#endif // !RECEIVERPREFERENCE_H