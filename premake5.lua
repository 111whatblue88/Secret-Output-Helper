project "Secret-Output-Helper"

  kind "SharedLib"
  language "C++"
  cppdialect "C++20"
  architecture "x86_64"

  targetdir "build/lib"


  filter "system:windows"
    systemversion "latest"
    defines { "PLATFORM_WINDOWS" }
    files { "win64/CLIParser/**.cpp", "win64/common/**.hpp" }
    removefiles { "win64/CLIParser/**LNX.cpp", "win64/common/**LNX.hpp" }

  filter "system:linux"
    defines { "PLATFORM_LINUX" }
    files { "linux/CLIParser/**.cpp", "linux/common/**.hpp" }
    removefiles { "win64/CLIParser/**WIN.cpp", "win64/common/**WIN.hpp" }

  filter "configurations:debug"
    defines "DEBUG"
    runtime "Debug"
    symbols "On"

  filter "configurations:release"
    defines "NDEBUG"
    runtime "Release"
    symbols "Off"
