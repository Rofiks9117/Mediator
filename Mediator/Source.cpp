#include "Stdafx.h"

int main(int argc, char* argv[])
{
	ConcreteMediator* mediator = new ConcreteMediator();
	ConcreteColleague1* colleague1 = new ConcreteColleague1(mediator);
	ConcreteColleague2* colleague2 = new ConcreteColleague2(mediator);

	mediator->Colleague1 = colleague1;
	mediator->Colleague2 = colleague2;
	colleague1->Send("Message 1");
	colleague2->Send("Message 2");


	return 0;
}