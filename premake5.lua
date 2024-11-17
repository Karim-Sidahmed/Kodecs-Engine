workspace "Kodecs"
    architecture "x64"

configurations{

    "Debug",
    "Release",
    "Dist"
}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-${cfg.architecture}"

project "Kodecs"
    location "Kodecs"
    kind "SharedLib"
    language "C++"

    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

    pchheader "kdspch.h"
    pchsource "Kodecs/src/kdspch.cpp"
    
    characterset "Unicode"
    
    files{

        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs{
       "%{prj.name}/src" ,
       "%{prj.name}/vendor/spdlog/include"
    }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        buildoptions {"/utf-8"}

        defines{

            "KDS_PLATFORM_WINDOWS;KDS_BUILD_DLL;_WINDLL",
            "KDS_BUILD_DLL"
        
        }

        postbuildcommands{

            ("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
        }

    filter "configurations:Debug"
        defines "KDS_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "KDS_RELEASE"
        optimize "On"
    
    filter "configurations:Dist"
        defines "KDS_DIST"
        optimize "On"

project "Sandbox"
    location "Sandbox"

    kind "ConsoleApp"
    language "C++"

    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin/" .. outputdir .. "/%{prj.name}")
    
    characterset "Unicode"

    files{

        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs{

       "Kodecs/vendor/spdlog/include",
       "Kodecs/src"
    }

    links{

        "Kodecs"
    }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        buildoptions { "/utf-8" }

        defines{

            "KDS_PLATFORM_WINDOWS"
        
        }

    filter "configurations:Debug"
        defines "KDS_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "KDS_RELEASE"
        optimize "On"
    
    filter "configurations:Dist"
        defines "KDS_DIST"
        optimize "On"



    