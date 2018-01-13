#ifndef PACKAGESENDER_H
#define PACKAGESENDER_H

#include "ReceiverPreferences.h"
#include "Types.h"
#include <vector>

class PackageSender
{
public:
	void sendPackage();
	Package* viewSendingBuffer()const;
	ReceiverPreferences receiverPreferences;
protected:
	
	std::vector<Package> sendingBuffer;
};

#endif // !PACKAGESENDER_H

