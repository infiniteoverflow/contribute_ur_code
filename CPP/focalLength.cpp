
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

/**
 * Calculates the focal length of a lens.
 * @param d thickness of the lens
 * @param r1 radii r1
 * @param r2 radii r2
 * @param n the refractive index
 * @return the focal length
 */
double focalLength(double d, double r1, double r2, double n)
{
    double f;

    f = 1 / ((n - 1) * ((1 / r1) - (1 / r2) + (((n - 1) * d) / (n * r1 * r2))));

    return f;
}



/////////////// Optional Student Code /////////////////
int run()
{
    return 0;
}
