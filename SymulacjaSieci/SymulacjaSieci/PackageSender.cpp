#include "PackageSender.h"
#include <cstdlib>
#include <ctime>

void PackageSender::sendPackage()
{
	std::srand(std::time(nullptr));
	double random = rand() / RAND_MAX;
	auto receiver = receiverPreferences.drawReceiver(random);
	Package package = sendingBuffer.back();
	sendingBuffer.pop_back();
	receiver->receivePackage(package);
}

Package* PackageSender::viewSendingBuffer()const
{
	Package* result = new Package[sendingBuffer.size()];
	for (int i = 0; i < sendingBuffer.size(); i++)
	{
		result[i] = sendingBuffer[i];
	}
	return result;
}