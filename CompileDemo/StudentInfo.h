#pragma once
class Math;
class English;
class StudentInfo
{
public:
	StudentInfo(Math* math, English* eng);
	void printAllScore();
private:
	Math* m_pMath;
	English* m_pEng;
};

