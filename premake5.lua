project "Secret-Output-Helper"

  kind "SharedLib"
  language "C++"
  cppdialect "C++20"
  architecture "x86_64"

  targetdir "build/lib"

  files { "outputHelper/src/**.cpp" }

  filter "configurations:debug"
    defines "DEBUG"
    symbols "On"

  filter "configurations:release"
    defines "NDEBUG"
    symbols "Off"
