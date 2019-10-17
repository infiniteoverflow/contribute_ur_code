#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "h13.h"

string dataSets(const string& fileName)
{
    ifstream infile(fileName);
    if (infile.fail())
    {
        return "data/notfound.txt cannot be opened.\n";
    }
    int repeat = 0;
    double x = 1.0;
    int set = 1;
    string result;
    infile >> repeat;

    while (!infile.fail())
    {
        double sum = 0;
        int count = 0;

        while (repeat != 0)
        {
            infile >> x;
            count += repeat;
            sum += (repeat * x);
            infile >> repeat;
        }
        ostringstream out;
        double avg = (sum * 1.0) / (count * 1.0);
        out << fixed << setprecision(4) << avg;

        if (count > 0)
        {
            if (set > 1)
            {
                result += "\n";
            }
        }
        result += "data set " + to_string(set) + ": total values = " + to_string(count)
            + "\n" + "average value = " + out.str() + "\n";
        set++;
        infile >> repeat;
    }
    return result;
}

///////////////// Student Testing /////////////////////////
int run()
{
    cout << "Student tests" << endl;
    return 0;
}