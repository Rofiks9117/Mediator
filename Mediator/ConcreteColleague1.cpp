#include "Stdafx.h"

ConcreteColleague1::ConcreteColleague1(Mediator* mediator) : Colleague(mediator)
{

}

void ConcreteColleague1::Send(std::string message)
{
	mediator->Send(message, this);
}

void ConcreteColleague1::Notify(std::string message)
{
	std::cout << message.c_str() << std::endl;
}
