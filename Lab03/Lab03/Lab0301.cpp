/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab: #3 Assignment: Lab0301
 * Filename: Lab0101
 * Date submitted: 09/12/17
 *
 * I hereby declare that this code, submitted
 * for credit for the course SYDE121, is a product
 * of my own efforts. This coded solution has
 * not been plagiarized from other sources and
 * as not been knowingly plagiarized by others.
 


#include <iostream>
using namespace std;

int main()
{
    int totalTime = 0;
    int weekTime = 0;
    int dayTime = 0;
    int hourTime = 0;
    int minTime = 0;
    int secTime = 0;

    while(totalTime == 0)
    {
        cout << "Enter a time frame in seconds: ";
        cin >> totalTime;
    }
    //Calculate
    weekTime = totalTime / 604800;
    totalTime = totalTime % 604800;

    dayTime = totalTime / 86400;
    totalTime = totalTime % 86400;

    hourTime = totalTime / 3600;
    totalTime = totalTime % 3600;

    minTime = totalTime / 60;
    totalTime = totalTime % 60;

    secTime = totalTime;
    
    cout << "Weeks: " << weekTime << endl << "Days: " << dayTime << endl << "Hours: " << hourTime <<
    endl << "Minutes: " << minTime << endl << "Seconds: " << secTime <<
    endl;
}
*/



