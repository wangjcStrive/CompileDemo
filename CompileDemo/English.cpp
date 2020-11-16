#include <iostream>
#include "English.h"

English::English(size_t score) :m_score(score)
{

}
void English::coursePrint(size_t newScore)
{
	std::cout << "English " << m_score << std::endl;
	std::cout << "English modified!" << newScore<< std::endl;
}
