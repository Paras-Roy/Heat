#include<Heat.h>
class Sandbox : public Heat::Application
{
public:

	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};


Heat::Application* CreateApplication()
{
	return new Sandbox();
}