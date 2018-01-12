#ifndef PACKAGESENDER_H
#define PACKAGESENDER_H

#include "ReceiverPreferences.h"
#include "Types.h"
#include <vector>

class PackageSender
{
public:
	
	void setReceiverPreference(ReceiverPreferences);
	void sendPackage();
	Package* viewSendingBuffer()const;
	inline ReceiverPreferences getReceiverPreferences()const { return receiverPreferences; }

protected:
	ReceiverPreferences receiverPreferences;
	std::vector<Package> sendingBuffer;
};

#endif // !PACKAGESENDER_H

