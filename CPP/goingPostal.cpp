
#include <string>
using namespace std;

#include "h09.h"

string codeForDigit(int digit)
{
    string result;
    switch(digit)
    {
        case 1: result = ":::||";
            break;

        case 2: result = "::|:|";
            break;

        case 3: result = "::||:";
            break;

        case 4: result = ":|::|";
            break;

        case 5: result = ":|:|:";
            break;

        case 6: result = ":||::";
            break;

        case 7: result = "|:::|";
            break;

        case 8: result = "|::|:";
            break;

        case 9: result  = "|:|::";
            break;

        case 0: result  = "||:::";
            break;
    }
    return result;
}

int checkDigit(int zip)
{
    int sum = 0;

    while (zip != 0)
    {
        sum += zip % 10;
        zip /= 10;
    }
    if (sum % 10 == 0)
    {
        return 0;
    }
    sum = 10 - (sum % 10) % 10;
    return sum;
}

string barCode(int zip)
{
    int i = checkDigit(zip);
    string result = codeForDigit(i);
    i = 0;
    while (zip != 0)
    {
        i = zip % 10;
        result =  codeForDigit(i) + result;
        zip /= 10;
    }
    return + "|" + result + "|";
}

/////////// Student Testing ///////////////////////
int run()
{
    return 0;
}