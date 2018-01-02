#include "PackageSender.h"

ReceiverPreferences PackageSender::getReceiverPreferences()
{
	return receiverPreferences;
}

void PackageSender::setReceiverPreference(ReceiverPreferences newPreferences)
{
	receiverPreferences = newPreferences;
}

std::vector<Package> PackageSender::getSendingBuffer()
{
	return sendingBuffer;
}

void PackageSender::sendPackage()
{

}