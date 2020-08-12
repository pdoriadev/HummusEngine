#pragma once
#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Hummus 
{
	class HUMMUS_API Log
	{
	public:

		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:

		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define HS_CORE_TRACE(...)		Hummus::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HS_CORE_DEBUG(...)		Hummus::Log::GetCoreLogger()->debug(__VA_ARGS__)
#define HS_CORE_INFO(...)		Hummus::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HS_CORE_WARN(...)		Hummus::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HS_CORE_ERROR(...)		Hummus::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HS_CORE_CRITICAL(...)	Hummus::Log::GetCoreLogger()->critical(__VA_ARGS__)

#define HS_TRACE(...)			Hummus::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HS_DEBUG(...)			Hummus::Log::GetClientLogger()->debug(__VA_ARGS__)
#define HS_INFO(...)			Hummus::Log::GetClientLogger()->info(__VA_ARGS__)
#define HS_WARN(...)			Hummus::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HS_ERROR(...)			Hummus::Log::GetClientLogger()->error(__VA_ARGS__)
#define HS_CRITICAL(...)		Hummus::Log::GetClientLogger()->critical(__VA_ARGS__)

