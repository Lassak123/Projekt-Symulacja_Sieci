#include "PackageSender.h"

void PackageSender::setReceiverPreference(ReceiverPreferences newPreferences)
{
	receiverPreferences = newPreferences;
}

void PackageSender::sendPackage()
{
	auto receiver = receiverPreferences.drawReceiver();
	Package package = sendingBuffer.back();
	sendingBuffer.pop_back();
	receiver->receivePackage(package);
}