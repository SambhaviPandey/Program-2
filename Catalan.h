/*
 * Catalan.h
 * HW 2: CSS342
 * 
 * Last modified by Sambhavi Pandey on 4/28/2019
 *
 * This file is a interface (.h file) that contains declarations
 * of the functions and variables that exist in the Catalan.cpp
 * file.
 */

//Header guards to prevent duplicate definitions
#ifndef Catalan_h
#define Catalan_h

#pragma once
#include <iostream>
using namespace std;

class Catalan
{
public:
    //Default constructor
    Catalan ();
    //Destructor
    ~Catalan();
    //Function to calculate the calculate the Catalan number
    int calculateCatalanNumber(int number);
    
};
#endif
