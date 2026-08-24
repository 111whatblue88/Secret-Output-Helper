project "Secret-Output-Helper"

  kind "SharedLib"
  language "C++"
  cppdialect "C++20"
  architecture "x86_64"

  targetdir "build/lib"

  filter "system:windows"
    systemversion "latest"
    defines { "PLATFORM_WINDOWS" }
    files { "outputHelper/**.cpp", "outputHelper/**.hpp" }
    removefiles { "outputHelper/**LNX.cpp", "outputHelperLNX.hpp" }

  filter "system:linux"
    defines { "PLATFORM_LINUX" }
    files { "outputHelper/**.cpp", "outputHelper/**.hpp" }
    removefiles { "outputHelper/**WIN.cpp", "outputHelper/**WIN.hpp" }

  filter "configurations:debug"
    defines "DEBUG"
    runtime "Debug"
    symbols "On"

  filter "configurations:release"
    defines "NDEBUG"
    runtime "Release"
    symbols "Off"
