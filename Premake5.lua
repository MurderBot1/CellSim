workspace "MyProject"
    architecture "x86_64"
    configurations { "Debug", "Release" }
    location "build"

project "MyProject"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++23"
    toolset "gcc"

    targetdir "build/bin/%{cfg.buildcfg}"
    objdir    "build/bin-int/%{cfg.buildcfg}"

    files {
        "src/**.cpp",
        "include/**.hpp"
    }

    includedirs {
        "include"
    }

    filter "configurations:Debug"
        symbols "On"

    filter "configurations:Release"
        optimize "On"
