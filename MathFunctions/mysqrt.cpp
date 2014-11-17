#include <cmath>
#include <iostream>
#include "TutorialConfig.h"

double mysqrt(double inputValue) {
    std::cout << "Enter mysqrt function" << std::endl;
#if defined (HAVE_LOG) && defined (HAVE_EXP)
    return exp(log(inputValue)*0.5);
#else
    return sqrt(inputValue);
#endif
}
