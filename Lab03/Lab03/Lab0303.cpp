/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab: #3 Assignment: Lab0303
 * Filename: Lab0101
 * Date submitted: 09/12/17
 *
 * I hereby declare that this code, submitted
 * for credit for the course SYDE121, is a product
 * of my own efforts. This coded solution has
 * not been plagiarized from other sources and
 * as not been knowingly plagiarized by others.
 */


#include <iostream>
#include <cmath>
//#include "Lab0303.hpp"


using namespace std;

int  main(){
    
    double temp = 0;
    double wind = 0;
    double windIndex = 0;
    double updatedWinds = 0;
    double updatedTemps = 0;

    
    cout << "Enter the temperature in Celsius: ";
    cin >> temp;
    cout << "Enter the wind speed in km/hr: ";
    cin >> wind;
    
    updatedWinds = wind * .6215;
    updatedTemps = ((temp * 9)/5) + 32;
    
    if(wind <= 4){
        windIndex = updatedTemps;
    }
    else if(4 < wind && wind <= 45){
        windIndex = (91.4 - ((10.45 + (6.69 * (sqrt(updatedWinds))) - (0.447 * updatedWinds)) *
                             ((91.4 - updatedTemps)/22)));
    }
    else{
        windIndex = 1.6 * temp - 55;
    }
    windIndex = ((windIndex - 32) * 5) / 9;
    cout << "The wind-chill index is: " << windIndex;
    
    
    
    
    
}


