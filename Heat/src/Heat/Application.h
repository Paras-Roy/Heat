#pragma once
#include "Core.h"

namespace Heat
{

	class HEAT_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();

	};

	//To be defined in CLIENT

	Application* CreateApplication();
}