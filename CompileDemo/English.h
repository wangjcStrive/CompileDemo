#pragma once
#include <iostream>
class English
{
public:
	English(size_t score);
	//void coursePrint(); before modify english.h
	void coursePrint(size_t newScore);
private:
	size_t m_score = 100;
};

