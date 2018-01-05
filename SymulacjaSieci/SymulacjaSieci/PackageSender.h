#ifndef PACKAGESENDER_H
#define PACKAGESENDER_H

#include "ReceiverPreferences.h"
#include "Types.h"
#include <vector>

class PackageSender
{
public:
	inline ReceiverPreferences getReceiverPreferences()const { return receiverPreferences; }
	void setReceiverPreference(ReceiverPreferences);
	void sendPackage();
	std::vector<Package> getSendingBuffer() const { return sendingBuffer; }


protected:
	ReceiverPreferences receiverPreferences;
	std::vector<Package> sendingBuffer;
};

#endif // !PACKAGESENDER_H

