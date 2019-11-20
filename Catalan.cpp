/*
 * Catalan.cpp
 * HW 2: CSS342
 *
 * Last modified by Sambhavi Pandey on 4/28/2019
 *
 * The purpose of the code in this file is to take an
 * argument and call a recursive function which computes
 * the nth Catalan number using the Catalan number formula.
 */

#include "Catalan.h"
#include <iostream>
using namespace std;

/*
 * Default constructor that does not take in any parameters
 * and does not return anything.
 */

Catalan :: Catalan()
{
    
}

/*
 * Destructor that does not take in any parameters and does not
 * return anything.
 */

Catalan :: ~Catalan()
{
    
}

/*
 * Method that calculates the nth Catalan number using the
 * Catalan number formula. It does so in a recursive manner.
 * This method takes in one parameter of type int which
 * corresponds to the number for which the Catalan sequence
 * is calculated. This method returns a number of type int,
 * which corresponds to the number that is determined after
 * using the Catalan recursive formula.
 */

int Catalan :: calculateCatalanNumber(int number)
{
    int sum = 0;
    //In the case of a negative number
    if (number < 0)
    {
        cout << "Error: Negative Number. The nth Catalan number cannot be "
        "determined." << endl;
    }
    //Base case
    else if (number == 0)
    {
        return 1;
    }
    //If the number is not negative and not zero
    else
    {
        for (int i = 0; i < number; i++)
        {
            sum += calculateCatalanNumber (i) * calculateCatalanNumber(number - i - 1);
            
        }
    }
    return sum;
}

/*
 * Main function tests if the Catalan.cpp functions are working
 * properly. It takes in a parameter of type int which corresponds
 * to the number of command line arguments passed by user and a
 * parameter of type char array which corresponds to a list of
 * command line arguments. This function returns an int value.
 */

int main(int argc, char* argv[])
{
    //Testing with command line
    if (argc != 2)
    {
        cout << "Error: Incorrect Number of Arguments" << endl;
        
    }
    int n = atoi(argv[1]);
    Catalan case1;
    if (n >= 0)
    {
        cout << "The Catalan Number is: " << case1.calculateCatalanNumber(n) << endl;
    }
    else
    {
        cout << "Catalan Number cannot be less than zero" << endl;
    }
    
    //Blank line between outputs
    cout << endl;
    
    //Testing with already given values
    cout << "Testing: If the number entered is 4 " << endl;
    Catalan case2;
    cout << "The Catalan Number is: " << case2.calculateCatalanNumber(4) << endl;
    
    cout << "Testing: If the number entered is 5 " << endl;
    Catalan case3;
    cout << "The Catalan Number is: " << case3.calculateCatalanNumber(5) << endl;
    
    cout << "Testing: If the number entered is 7 " << endl;
    Catalan case4;
    cout << "The Catalan Number is: " << case4.calculateCatalanNumber(7) << endl;
    
    cout << "Testing: If the number entered is 10 " << endl;
    Catalan case5;
    cout << "The Catalan Number is: " << case5.calculateCatalanNumber(10) << endl;
    
    //Blank line between outputs
    cout << endl;
    
    //Testing with user input
    cout << "Now testing with user input " << endl;
    cout << "Please enter a number: " << endl;
    Catalan case6;
    int number;
    cin >> number;
    cout << "The Catalan Number is: " << case6.calculateCatalanNumber(number) << endl;
}

