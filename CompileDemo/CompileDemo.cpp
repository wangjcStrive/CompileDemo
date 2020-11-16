// CompileDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Math.h"
#include "English.h"
#include "StudentInfo.h"

int main()
{
	English* pEng = new English(90);
	Math* pmath = new Math(100);
	StudentInfo ins(pmath, pEng);
	ins.printAllScore();
}
/*
	1. first compile this project
	Rebuild started...
	1>------ Rebuild All started: Project: CompileDemo, Configuration: Debug Win32 ------
	1>CompileDemo.cpp
	1>English.cpp
	1>Math.cpp
	1>StudentInfo.cpp
	1>Generating Code...
	1>CompileDemo.vcxproj -> G:\Code\CPP\CompileDemo\CompileDemo\Debug\CompileDemo.exe
	========== Rebuild All: 1 succeeded, 0 failed, 0 skipped ==========
*/


/*
	2. modify English.cpp
	Build started...
	1>------ Build started: Project: CompileDemo, Configuration: Debug Win32 ------
	1>English.cpp
	1>CompileDemo.vcxproj -> G:\Code\CPP\CompileDemo\CompileDemo\Debug\CompileDemo.exe
	========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
*/

/*
	2. modify English.h
	Build started...
	1>------ Build started: Project: CompileDemo, Configuration: Debug Win32 ------
	1>CompileDemo.cpp
	1>English.cpp
	1>StudentInfo.cpp
	1>Generating Code...
	1>CompileDemo.vcxproj -> G:\Code\CPP\CompileDemo\CompileDemo\Debug\CompileDemo.exe
	========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
*/
