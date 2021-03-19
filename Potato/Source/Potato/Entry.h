#pragma once

#ifdef PO_PLATFORM_WINDOWS

extern Potato::Application* Potato::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Potato::CreateApplication();
	app->Run();
	delete app;
}

#endif