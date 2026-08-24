project "Secret-Output-Helper"

  kind "StaticLib"
  language "C++"
  cppdialect "C++20"
  architecture "x86_64"

  targetdir "build/lib"

  files { "outputHelper/src/**.cpp" }

  filter "configurations:debug"
    defines "DEBUG"
    runtime "Debug"
    symbols "On"

  filter "configurations:release"
    defines "NDEBUG"
    runtime "Release"
    symbols "Off"
