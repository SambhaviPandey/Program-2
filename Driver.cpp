/*
 * Driver.cpp
 * HW 2: CSS 342
 * Last modified by Sambhavi Pandey on 4/28/2019
 *
 * This file contains a driver that tests the functions
 * in the GreedyRobot.cpp file in order to ensure they are
 * working properly.
 */

#include "GreedyRobot.h"
#include <iostream>
#include <vector>
#include "math.h"
using namespace std;

int main()
{
    cout << "Initial Position:(3,3) Final Position (5, 6) " << endl;
    GreedyRobot case1 (3, 3, 5, 6);
    case1.findPath(case1.getInitialX(), case1.getInitialY(),
                   case1.getFinalX(), case1.getFinalY(), " ");
    case1.display();
    cout << endl;
    
    cout << "Initial Position:(1,2) Final Position (3, 5) " << endl;
    GreedyRobot case2 (1, 2, 3, 5);
    case2.findPath(case2.getInitialX(), case2.getInitialY(),
                   case2.getFinalX(), case2.getFinalY(), " ");
    case2.display();
    cout << endl;
    
    cout << "Initial Position:(1,3) Final Position (-2, 4) " << endl;
    GreedyRobot case3 (1, 3, -2, 4);
    case3.findPath(case3.getInitialX(), case3.getInitialY(),
                   case3.getFinalX(), case3.getFinalY(), " ");
    case3.display();
    cout << endl;
    
    cout << "Please enter an initial x and y position: " << endl;
    int x1;
    int y1;
    cin >> x1 >> y1;
    cout << "Please enter the final x and y position: " << endl;
    int x2;
    int y2;
    cin >> x2 >> y2;
    
    GreedyRobot case4 (x1, y1, x2, y2);
    case4.findPath(case4.getInitialX(), case4.getInitialY(),
                   case4.getFinalX(), case4.getFinalY(), " ");
    case4.display();
    cout << endl;
    
    cout << "Please enter an initial x and y position: " << endl;
    int x3;
    int y3;
    cin >> x3 >> y3;
    cout << "Please enter the final x and y position: " << endl;
    int x4;
    int y4;
    cin >> x4 >> y4;
    GreedyRobot case5 (x3, y3, x4, y4);
    case5.findPath(case5.getInitialX(), case5.getInitialY(),
                   case5.getFinalX(), case5.getFinalY(), " ");
    case5.display();
    cout << endl;
    
    cout << "Please enter an initial x and y position: " << endl;
    int x5;
    int y5;
    cin >> x5 >> y5;
    cout << "Please enter the final x and y position: " << endl;
    int x6;
    int y6;
    cin >> x6 >> y6;
    GreedyRobot case6 (x5, y5, x6, y6);
    case6.findPath(case5.getInitialX(), case5.getInitialY(),
                   case5.getFinalX(), case5.getFinalY(), " ");
    case6.display();
    cout << endl;
    return 0;
}

