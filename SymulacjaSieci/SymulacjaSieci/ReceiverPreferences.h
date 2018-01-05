#ifndef RECEIVERPREFERENCE_H
#define RECEIVERPREFERENCE_H

#include <map>
#include <utility>
#include "Types.h"
#include "IPackageReceiver.h"

class ReceiverPreferences
{
public:

	inline std::map<IPackageReceiver*, double> getProbabilities() const { return probabilities; }
	void setProbabilites(std::map < IPackageReceiver*, double>);
	void addReceiver(IPackageReceiver*);
	void addReceiverWithProbability(IPackageReceiver*, double);
	void removeReceiver(IPackageReceiver*);
	IPackageReceiver* drawReceiver() const ;
	std::pair<IPackageReceiver*, double>* view() const ;
private:
	std::map<IPackageReceiver*, double> probabilities;

};

#endif // !RECEIVERPREFERENCE_H