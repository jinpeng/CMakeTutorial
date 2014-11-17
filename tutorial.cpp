#include <iostream>
#include <cmath>
#include "TutorialConfig.h"
#ifdef USE_MYMATH
#include "MathFunctions.h"
#endif

using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2) {
        cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << endl;
        cout << "Usage: " << argv[0] << " number" << endl;
        return 1;
    }
    double inputValue = atof(argv[1]);

#ifdef USE_MYMATH
    double outputValue = mysqrt(inputValue);
#else
    double outputValue = sqrt(inputValue);
#endif
    cout << "The square root of " << inputValue << " is " << outputValue << endl;
    return 0;
}
