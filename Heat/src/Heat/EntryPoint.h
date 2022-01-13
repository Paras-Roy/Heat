#pragma once

#ifdef HEAT_PLATFORM_WINDOWS

extern Heat::Application* Heat::CreateApplication();

int main(int argc, char** argv)

{
	auto app = Heat::CreateApplication();
	sandbox->Run();
	delete sandbox;
}

#endif