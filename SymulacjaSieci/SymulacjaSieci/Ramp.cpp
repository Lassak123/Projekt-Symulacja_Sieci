#include "Ramp.h"

Ramp::Ramp(ElementID ID, TimeOffset time)
{
	id = ID;
	deliveryInterval = time;
}

void Ramp::deliveryGoods(Time time)
{
	if (time == deliveryInterval)
	{
		Package package;
		sendingBuffer.push_back(package);
	}
}