class ConcreteColleague1 : public Colleague
{
public:
	ConcreteColleague1(Mediator* mediator);
	void Send(std::string message);
	void Notify(std::string message);
};