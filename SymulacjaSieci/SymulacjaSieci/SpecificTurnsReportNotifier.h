<<<<<<< HEAD
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
=======
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
>>>>>>> f27b00d07c8376d8d711637f90bb47ffe22f34d1
