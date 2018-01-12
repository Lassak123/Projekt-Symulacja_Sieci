#ifndef SPECIFICTURNSREPORTNOTIFIER
#define SPECIFICTURNSREPORTNOTIFIER

#include "IReportNotifier.h"
#include "Types.h"
#include <set>

class SpecificTurnsReportNotifier : public IReportNotifier 
{
public:
	SpecificTurnsReportNotifier(std::set<Time> _turns) :turns(_turns) {}
	bool shouldGenerateReport(Time);
private:
	std::set<Time> turns;
};

#endif // !SPECTURNREPORT
