#include "Stdafx.h"

void ConcreteMediator::Send(std::string msg, Colleague* colleague)
{
	if (Colleague1 == colleague)
		Colleague2->Notify(msg);
	else
		Colleague1->Notify(msg);
}
