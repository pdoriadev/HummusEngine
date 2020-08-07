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
	printf("HummusExe is a go! \n");
	return new HummusExe();
}

