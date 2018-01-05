#include "Ramp.h"

Ramp::Ramp(ElementID ID=0, TimeOffset time=1)
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