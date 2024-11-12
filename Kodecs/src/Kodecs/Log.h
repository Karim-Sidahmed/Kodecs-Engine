#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"


namespace Kodecs {

	class KODECS_API Log {
	
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

//Core log macros
#define KDS_CORE_TRACE(...)   ::Kodecs::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define KDS_CORE_INFO(...)    ::Kodecs::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KDS_CORE_WARN(...)    ::Kodecs::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KDS_CORE_ERROR(...)   ::Kodecs::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KDS_CORE_FATAL(...)   ::Kodecs::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define KDS_TRACE(...)        ::Kodecs::Log::GetClientLogger()->trace(__VA_ARGS__)
#define KDS_INFO(...)         ::Kodecs::Log::GetClientLogger()->info(__VA_ARGS__)
#define KDS_WARN(...)         ::Kodecs::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KDS_ERROR(...)        ::Kodecs::Log::GetClientLogger()->error(__VA_ARGS__)
#define KDS_FATAl(...)        ::Kodecs::Log::GetClientLogger()->fatal(__VA_ARGS__)






