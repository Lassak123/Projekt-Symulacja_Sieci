#pragma once
#ifndef SPECTURNREPORT_H
#define SPECTURNREPORT_H
#include<iostream>
#include<set>
#include "Types.h"
class SpecificTurnsReportNotifier
{
public:

	SpecificTurnsReportNotifier(std::set<Time>);
	bool shouldGenerateReport(Time);

private:
	std::set<Time> turns;

};
#endif // !SPECTURNREPORT
