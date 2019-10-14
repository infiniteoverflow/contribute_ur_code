#include <string>
#include <cctype>
using namespace std;

int sumNums(const string& s)
{
    int sum = 0;
    int num = 0;
    for (size_t i = 0, len = s.size(); i <= len - 1; i++)
    {
        char digit = s.at(i);
        if (isdigit(digit))
        {
            digit -= '0';
            num *= 10;
            num += digit;
        }
        else
        {
            sum += num;
            num = 0;
        }
    }
    sum += num;
    return sum;
}
