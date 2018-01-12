#include "SpecificTurnsReportNotifier.h"

bool SpecificTurnsReportNotifier::shouldGenerateReport(Time _time)
{
	if (turns.find(_time) == turns.end)
		return false;
	else
		return true;
}

