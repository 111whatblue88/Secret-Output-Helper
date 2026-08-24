project "Secret-Output-Helper"

  kind "SharedLib"
  language "C++"
  cppdialect "C++20"
  architecture "x86_64"

  targetdir "build/lib"

  filter "system:windows"
    systemversion "latest"
    defines { "PLATFORM_WINDOWS", "SOH_BUILD" }
    files { "outputHelper/src/**.cpp", "outputHelper/src/**.hpp" }
    removefiles { "outputHelper/src/**LNX.cpp", "outputHelper/src/**LNX.hpp" }

  filter "system:linux"
    defines { "PLATFORM_LINUX" }
    files { "outputHelper/src/**.cpp", "outputHelper/src/**.hpp" }
    removefiles { "outputHelper/src/**WIN.cpp", "outputHelper/src/**WIN.hpp" }

  filter "configurations:Debug"
    defines "DEBUG"
    runtime "Debug"
    symbols "On"

  filter "configurations:Release"
    defines "NDEBUG"
    runtime "Release"
    symbols "Off"
