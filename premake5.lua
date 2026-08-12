project "Secret-Output-Helper"

  kind "SharedLib"
  language "C++"

  targetdir "build/lib"

  files { "outputHelper/src/**.cpp" }

  filter "configurations:debug"
    defines "DEBUG"
    symbols "On"

  filter "configurations:release"
    defines "NDEBUG"
    symbols "Off"
