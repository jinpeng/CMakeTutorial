#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int main(int argc, char *argv[])
{
    int i;
    double result;

    if (argc < 2) {
        return 1;
    }

    string filename = argv[1];
    ofstream fout;
    fout.open(filename);
    fout << "double sqrtTable[] = {" << endl;
    for (int i=0; i<10; i++) {
        result = sqrt(static_cast<double>(i));
        fout << result << endl;
    }
    fout << "0}" << endl;
    fout.close();
    return 0;
}
