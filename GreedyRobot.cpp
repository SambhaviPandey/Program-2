/*
 * GreedyRobot.cpp
 * HW 2: CSS342
 *
 * Last modified by Sambhavi Pandey on 4/28/2019
 *
 * The purpose of the code in this file is to determine
 * all the shortest possible paths from the robot to the
 * treasure following the condition that the robot may not
 * move in the same direction more than two times in a row.
 * This will be done using recursion.
 */

#include "GreedyRobot.h"
#include "math.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * Default constructor used to initialize variables. This constructor
 * does not take in any paramters and does not return anything.
 */
GreedyRobot :: GreedyRobot()
{
    setInitialX(0);
    setInitialY(0);
    setFinalX(0);
    setFinalY(0);
}

/*
 * Constructor takes in four int arguments xR and yR (which is the coordinate
 * position of the robot) and xT and yT (which is the coordinate position of the
 * treasure). It takes these parameters and sets the values. This constructor does
 * not return anything.
 */
GreedyRobot :: GreedyRobot(int xR, int yR, int xT, int yT)
{
    setInitialX(xR);
    setInitialY(yR);
    setFinalX(xT);
    setFinalY(yT);
}

/*
 * Destructor that does not take in any parameters and does not
 * return anything.
 */
GreedyRobot :: ~GreedyRobot()
{
    
}

/*
 * Getter function that returns initialX which is the the initial x position
 * of the robot. This function does not take in any parameters.
 */
int GreedyRobot :: getInitialX() const
{
    return initialX;
}

/*
 * Getter function that returns initialY which is the initial y position
 * of the robot. This function does not take in any parameters.
 */
int GreedyRobot :: getInitialY() const
{
    return initialY;;
}

/*
 * Getter function that returns finalX which is the x position of the treasure.
 * This function does not take in any parameters.
 */
int GreedyRobot :: getFinalX() const
{
    return finalX;
}

/*
 * Getter function that returns finalY which is the y position of the treasure.
 * This function does not take in any parameters.
 */
int GreedyRobot :: getFinalY() const
{
    return finalY;
}

/*
 * Getter function that does not take in any parameters and
 * returns an int value corresponding to the number of paths
 * that the robot can take to get to the treasure.
 */
int GreedyRobot :: getNumberOfPaths() const
{
    
    return numberOfPaths;
}

/*
 * Getter function that does not take any parameters and returns
 * a string corresponding to the path names that the robot can take.
 */
string GreedyRobot :: getPathNames() const
{
    
    return pathNames;
}

/*
 * Setter function that takes in a parameter of type int that corresponds to the
 * initial x position of the robot. This function sets the initial x position of the
 * robot. This function does not return anything.
 */
void GreedyRobot :: setInitialX(int xR)
{
    
    initialX = xR;
}

/*
 * Setter function that takes in a parameter of type int that corresponds
 * to the initial y position of the robot. This function sets the initial y
 * position of the robot. This function does not return anything.
 */
void GreedyRobot :: setInitialY(int yR)
{
    
    initialY = yR;
}

/*
 * Setter function that takes in a parameter of type int that corresponds
 * to the x position of the treasure. This function sets the x position of
 * the treasure. This function does not return anything.
 */
void GreedyRobot :: setFinalX(int xT)
{
    
    finalX = xT;
}

/*
 * Setter function that takes in a parameter of type int that corresponds
 * to the y position of the treasure. This function sets the y position of
 * the treasure. This function does not return anything.
 */
void GreedyRobot :: setFinalY(int yT)
{
    
    finalY = yT;
}

/*
 * This function takes in five parameters. Four of these parameters are of type
 * int and correspond to the x and y coordinates of the robot and the x and y
 * y coordinates of the treasure. This function returns an int value that determines
 * the paths that the robot can take. The purpose of this function is to determine
 * the paths that the robot can take to the treasure.
 */
int GreedyRobot :: findPath(int xR, int yR, int xT, int yT, string path)
{
    //Base case (if the coordinates of the robot and treasure are same)
    if ((xR == xT) && (yR == yT))
    {
        //Path is added to the vector
        possiblePaths.push_back(path);
        //The number of paths increments
        numberOfPaths++;
        //Prints to screen
        cout << path << endl;
    }
    //If the path is less than two characters
    else if (path.length() < 2)
    {
        if (yR < yT)
        {
            findPath(xR, yR + 1, xT, yT, path + "N");
        }
        if (xR > xT)
        {
            findPath(xR - 1, yR, xT, yT, path + "W");
        }
        if (xR < xT)
        {
            findPath(xR + 1, yR, xT, yT, path + "E");
        }
        if (yR > yT)
        {
            findPath(xR, yR - 1, xT, yT, path + "S");
        }
    }
    //If there are more than two characters of the same directions
    else
    {
        if(path.length() >= 2)
        {
            if (yR < yT && path.substr(path.length() - 2, path.length()) != "NN")
            {
                findPath(xR, yR + 1, xT, yT, path + "N");
            }
            if (xR > xT  && path.substr(path.length() - 2, path.length()) != "WW")
            {
                findPath(xR - 1, yR, xT, yT, path + "W");
            }
            if (yR > yT && path.substr(path.length() - 2, path.length()) != "SS")
            {
                findPath(xR, yR - 1, xT, yT, path + "S");
            }
            if (xR < xT && path.substr(path.length() - 2, path.length()) != "EE")
            {
                findPath(xR + 1, yR, xT, yT, path + "E");
            }
        }
    }
    return numberOfPaths;
}

/*
 * Function takes in four parameters of type int that correspond to the x and y
 * positon of the robot and the treasure. Function returns a value of type int that
 * corresponds to the shortest path between the roboot and the treasure. The
 * purpose of this function is to determine the shortest path that the robot
 * can take to get to he treasure.
 */
int GreedyRobot :: determineShortestPath(int xR, int yR, int xT, int yT)
{
    int shortestPath = abs(xR - xT) + abs(yR - yT);
    return shortestPath;
}

/*
 * Display function does not take any parameters and does not return
 * anything. The purpose of this function is to print out the number of
 * paths.
 */
void GreedyRobot :: display()
{
    cout << "Number of paths: " << getNumberOfPaths() << endl;
}

