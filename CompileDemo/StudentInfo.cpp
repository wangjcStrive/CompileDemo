#include "StudentInfo.h"
#include "Math.h"
#include "English.h"

/*
	1. Math.cpp�޸ġ�Math.h����
		���ļ��������±��룬��ΪMath�Ľӿ�û��
	2. Math.h�޸�
		���ļ������±��룬�ӿڱ���
		����ʹ��StudengInfo���಻��䣬��ΪStudenInfo.hû�б�
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
