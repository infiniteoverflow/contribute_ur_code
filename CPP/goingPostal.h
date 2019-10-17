#ifndef H09_H_
#define H09_H_

/**
 * takes one digit and returns the appropriate code for that digit
 * @param digit the int
 * @returns string result
*/
string codeForDigit(int digit);
/*
    calculates the check digit
    @param int zip
    @return return sum
*/
int checkDigit(int zip);

/**
 * calculates and encodes the check digit
 * surrounds the entire code with the frame bars
 * using ':' for the half-bars and '|' for the full bars
 * @param zip the int
 * @return string result
*/
string barCode(int zip);

#endif
