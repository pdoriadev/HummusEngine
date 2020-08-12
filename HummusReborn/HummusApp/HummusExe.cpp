#include "Hummus.h"


class HummusExe : public Hummus::Application
{
public :
	HummusExe() 
	{

	}
	~HummusExe() 
	{

	}

};

Hummus::Application* Hummus::CreateApplication() 
{
	return new HummusExe();
}

