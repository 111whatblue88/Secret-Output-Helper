workspace "Secret-Output-Helper"
  configurations { "debug", "release" }
  location "build"

project "Secret-Output-Helper"

  kind "SharedLib"
  language "C++"

  targetdir "build/lib"

  files { "src/**" }

  filter "configurations:debug"
    defines "DEBUG"
    symbols "On"

  filter "configurations:release"
    defines "NDEBUG"
    symbols "Off"
