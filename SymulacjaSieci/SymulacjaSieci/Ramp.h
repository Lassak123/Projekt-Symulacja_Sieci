#ifndef RAMP_H
#define RAMP_H

#include "PackageSender.h"

class Ramp :public PackageSender
{
public:
	Ramp(ElementID, TimeOffset);
	void deliveryGoods(Time);
	inline TimeOffset getDeliveryInterval() { return deliveryInterval; }
	inline ElementID getId() { return id; }

private:
	ElementID id;
	TimeOffset deliveryInterval;
};

#endif // !RAMP_H
