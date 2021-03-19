#pragma once

#ifdef PO_PLATFORM_WINDOWS

extern Potato::Application* Potato::CreateApplication();

int main(int argc, char** argv)
{
	Potato::Log::Init();

	PO_CORE_WARNING("wARNING");

	PO_INFO("SHITFUCK");

	auto app = Potato::CreateApplication();
	app->Run();
	delete app;
}

#endif