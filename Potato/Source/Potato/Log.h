#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Potato
{
	class POTATO_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> CoreLogger;
		static std::shared_ptr<spdlog::logger> ClientLogger;

	};
}

// Engine level macros
#define PO_CORE_FATAL(...)		::Potato::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define PO_CORE_ERROR(...)		::Potato::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PO_CORE_WARNING(...)	::Potato::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PO_CORE_INFO(...)		::Potato::Log::GetCoreLogger()->info(__VA_ARGS__)

#define PO_FATAL(...)			::Potato::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define PO_ERROR(...)			::Potato::Log::GetClientLogger()->error(__VA_ARGS__)
#define PO_WARNING(...)			::Potato::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PO_INFO(...)			::Potato::Log::GetClientLogger()->info(__VA_ARGS__)