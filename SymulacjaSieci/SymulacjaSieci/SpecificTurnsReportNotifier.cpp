#include <iostream>
#include "SpecificTurnsReportNotifier.h"
#include <set>
#include "Types.h"

SpecificTurnsReportNotifier::SpecificTurnsReportNotifier(std::set<Time> time)
{
	turns = time;
}

bool SpecificTurnsReportNotifier::shouldGenerateReport(Time _time)
{
	if (turns.find(_time) == turns.end)
		return false;
	else
		return true;
}
