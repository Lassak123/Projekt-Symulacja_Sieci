#ifndef IReportNotifier_h
#define IReportNotifier_h
#include"Types.h"

class IReportNotifier
{
public:
	virtual bool shouldGenerateRepotr(Time) = 0;
};


#endif // !IReportNotifier
