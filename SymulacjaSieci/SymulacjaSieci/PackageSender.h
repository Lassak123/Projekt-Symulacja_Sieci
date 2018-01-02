#pragma once
#include "ReceiverPreferences.h"
#include "Types.h"
#include <vector>

class PackageSender
{
public:
	PackageSender();
	~PackageSender();
	ReceiverPreferences getReceiverPreferences();
	void setReceiverPreference(ReceiverPreferences);
	void sendPackage();
	std::vector<Package> getSendingBuffer();


protected:
	ReceiverPreferences receiverPreferences;
	std::vector<Package> sendingBuffer;
};