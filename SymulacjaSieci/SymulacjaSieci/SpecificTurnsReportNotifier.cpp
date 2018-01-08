<<<<<<< HEAD
#include "SpecificTurnsReportNotifier.h"

SpecificTurnsReportNotifier::SpecificTurnsReportNotifier(std::set<Time> _turns){
	turns = _turns;
}

=======
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
>>>>>>> f27b00d07c8376d8d711637f90bb47ffe22f34d1
