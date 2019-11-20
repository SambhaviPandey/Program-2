/*
 * GreedyRobot.h
 * HW 2: CSS342
 *
 * Last modified by Sambhavi Pandey on 4/28/2019
 *
 * This file is a interface (.h file) that contains declarations
 * of the functions and variables that exist in the GreedyRobot.cpp
 * file.
 */

//Header guards to prevent duplicate definitions
#ifndef GreedyRobot_h
#define GreedyRobot_h

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "math.h"
using namespace std;

class GreedyRobot
{
public:
    //Constructors
    GreedyRobot();
    GreedyRobot(int xR, int yR, int xT, int yT);
    
    //Destructor
    ~GreedyRobot();
    
    //Getter functions
    int getInitialX() const;
    int getInitialY() const;
    int getFinalX() const;
    int getFinalY() const;
    
    //Public functions
    int getNumberOfPaths() const;
    string getPathNames() const;
    
    //Setter functions
    void setInitialX(int xR);
    void setInitialY(int yR);
    void setFinalX(int xT);
    void setFinalY(int yT);
    
    //Public functions
    int findPath(int xR, int yR, int xT, int yT, string path);
    int determineShortestPath(int xR, int yR, int xT, int yT);
    void display();
    
private:
    //Private variables
    int initialX;
    int initialY;
    int finalX;
    int finalY;
    int numberOfPaths = 0;
    string pathNames;
    
    //For the possible paths taken by the robot
    vector <string> possiblePaths;
};
#endif

