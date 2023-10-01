class ConcreteColleague2 : public Colleague
{
public:
	ConcreteColleague2(Mediator* mediator);
	void Send(std::string message);
	void Notify(std::string message);
};