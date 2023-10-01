class ConcreteMediator : public Mediator
{
public:
	ConcreteColleague1* Colleague1;
	ConcreteColleague2* Colleague2;

	void Send(std::string msg, Colleague* colleague);
};