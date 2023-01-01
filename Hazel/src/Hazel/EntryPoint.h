#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication(); // extern: similar to #include

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized log!");
	int a = 5;
	HZ_INFO("Hi! Var = {0}", a);

	Hazel::Application* app = Hazel::CreateApplication();
	app->Run(); 
	delete app;
	return 0;
}

#endif