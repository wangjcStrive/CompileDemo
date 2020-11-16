#include <iostream>
#include "Math.h"

Math::Math(size_t mathScore) :m_score(mathScore)
{

}

void Math::coursePrint()
{
	std::cout << "Math " << m_score << std::endl;
}
