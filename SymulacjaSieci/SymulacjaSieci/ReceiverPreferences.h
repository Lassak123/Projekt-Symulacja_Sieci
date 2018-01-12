#ifndef RECEIVERPREFERENCE_H
#define RECEIVERPREFERENCE_H

#include <map>
#include <utility>
#include "Types.h"
#include "IPackageReceiver.h"

class ReceiverPreferences
{
public:

	inline std::map<IPackageReceiver*, double> getPreferences() const { return probabilities; }
	void setPreferences(std::map < IPackageReceiver*, double>);
	void addReceiver(IPackageReceiver*);
	void addReceiverWithProbability(IPackageReceiver*, double);
	void removeReceiver(IPackageReceiver*);
	IPackageReceiver* drawReceiver(double) const ;
	std::pair<IPackageReceiver*, double>* view() const ;
private:
	std::map<IPackageReceiver*, double> probabilities;

};

#endif // !RECEIVERPREFERENCE_H