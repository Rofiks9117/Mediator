#include "Stdafx.h"


ConcreteColleague2::ConcreteColleague2(Mediator* mediator) : Colleague(mediator)
{

}

void ConcreteColleague2::Send(std::string message)
{
	mediator->Send(message, this);
}

void ConcreteColleague2::Notify(std::string message)
{
	std::cout << message.c_str() << std::endl;
}
