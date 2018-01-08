#ifndef SPECIFICTURNSREPORTNOTIFIER
#define SPECIFICTURNSREPORTNOTIFIER

#include "IReportNotifier.h"
#include "Types.h"
#include <set>

class SpecificTurnsReportNotifier : public IReportNotifier 
{
public:
	bool shouldGenerateReport(Time);
	SpecificTurnsReportNotifier(std::set<Time>);
private:
	std::set<Time> turns;
};

#endif