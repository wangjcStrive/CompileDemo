#include "StudentInfo.h"
#include "Math.h"
#include "English.h"

/*
	1. Math.cpp修改。Math.h不变
		该文件不会重新编译，因为Math的接口没变
	2. Math.h修改
		该文件会重新编译，接口变了
		但是使用StudengInfo的类不会变，因为StudenInfo.h没有变
*/
void StudentInfo::printAllScore()
{
	m_pEng->coursePrint(110);
	m_pMath->coursePrint();
}

StudentInfo::StudentInfo(Math* math, English* eng)
{
	m_pEng = eng;
	m_pMath = math;
}
