//main.cpp file for isolation self assessment tool

#include <iostream>
#include <string>
#include <cctype>
#include "Date.h"
#include "calcDays.h"
using namespace std;


int main ()
{
    //Declaration of variables
    string testResult;
    string exposed;
    string vaccineStatus;
    int m;
    int d;
    int y;
    char theSlash;

    //Inputting the test result
    cout << "Test result: ";
    cin >> testResult;

    //Validating the test input by checking to make sure the string is negative or positive
    for (unsigned int i = 0; i < testResult.length(); i++)
    {
        testResult[i] = tolower(testResult[i]);
    }
    while (testResult != "positive" && testResult != "negative") {
        cout << "Please enter valid test result (positive or negative): ";
        cin >> testResult;
        for (unsigned int i = 0; i < testResult.length(); i++)
        {
            testResult[i] = tolower(testResult[i]);
        }
    }

    //Returning their length of isolation as 5 days if they tested positive
    if (testResult == "positive") 
    {
        //Inputting date tested positive and entering it into the Date instance
        cout << "Date tested positive: ";
        cin >> m;
        cin.get(theSlash);
        cin >> d;
        cin.get(theSlash);
        cin >> y;
        Date datePositive {m, d, y};

        //Outputting length of isolation
        cout << "Length of isolation: 5 days" << endl;
    }

    //Returning their length of isolation based on exposure and vaccine staus
    if (testResult == "negative") 
    {
        //Inputting if they were exposed or not and performing input validation
        cout << "Exposed to positive case: ";
        cin >> exposed;
        for (unsigned int i = 0; i < exposed.length(); i++)
        {
            exposed[i] = tolower(exposed[i]);
        }
        while (exposed != "no" && exposed != "yes") {
            cout << "Please enter valid answer (Yes or No): ";
            cin >> exposed;
            for (unsigned int i = 0; i < exposed.length(); i++)
            {
                exposed[i] = tolower(exposed[i]);
            }
        }

        //Outputting 0 as length of isolation if exposed is no
        if (exposed == "no")
        {
            cout << "Length of isolation: 0 days" << endl;
        }

        //Code for if they were negative and exposed
        if (exposed == "yes")
        {
            //inputting date exposed and entering it into the Date class instance
            cout << "Date exposed to positive case: ";
            cin >> m;
            cin.get(theSlash);
            cin >> d;
            cin.get(theSlash);
            cin >> y;
            Date dateExposed {m, d, y};

            //Inputting their vaccine status with input validation
            cout << "Second vaccination does received: ";
            cin >> vaccineStatus;
            for (unsigned int i = 0; i < vaccineStatus.length(); i++)
                {
                    vaccineStatus[i] = tolower(vaccineStatus[i]);
                }
            while (vaccineStatus != "no" && vaccineStatus != "yes") {
                cout << "Please enter valid answer (Yes or No): ";
                cin >> vaccineStatus;
                for (unsigned int i = 0; i < vaccineStatus.length(); i++)
                {
                    vaccineStatus[i] = tolower(vaccineStatus[i]);
                }
            }

            //Outputting 10 days as length of expusure if they were not vaccinated
            if (vaccineStatus == "no")
            {
                cout << "Vaccination status at time of exposure: not fully vaccinated\nLength of isolation: 10 days" << endl;
            }

            //Checking to see if they were vaccined at least 2 weeks before exposure
            if (vaccineStatus == "yes")
            {
                //Inputting date second dose recieved and entering it into Date class instance
                cout << "Date second vaccination dose received: ";
                cin >> m;
                cin.get(theSlash);
                cin >> d;
                cin.get(theSlash);
                cin >> y;
                Date dateSecondDose {m, d, y};


                //Outputting 5 days as length of isolation if calcDays returned 14 or greater, and outputting 10 days otherwise
                if (calcDays(dateExposed, dateSecondDose) >= 14)
                {
                    cout << "Vaccination status at time of exposure: fully vaccinated\nLength of isolation: 5 days" << endl;
                }
                else 
                {
                    cout << "Vaccination status at time of exposure: not fully vaccinated\nLength of isolation: 10 days" << endl;
                }
            }
        }    
    }
}