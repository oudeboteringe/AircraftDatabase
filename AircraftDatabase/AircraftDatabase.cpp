// AircraftDatabase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"

#include <iostream>
#include <vector>
using namespace std;

#include "Aircraft.h"
#include "Solution.h"

int main()
{
  //std::vector<CAircraft*> aircraftDb;

  //// Fill the database:
  //for (int iAc = 0; iAc < 10; iAc++)
  //{
  //  CAircraft* pAircraft = new CAircraft;
  //  aircraftDb.push_back(pAircraft);
  //}

  //// Read the database and print contents:
  //for (std::vector<CAircraft*>::iterator aircraftDbIt = aircraftDb.begin(); aircraftDbIt != aircraftDb.end(); aircraftDbIt++)
  //{
  //  (*aircraftDbIt)->PrintData();
  //}

  // Declare the vector:
  vector<int> intVec;

/*
  // Fill the vector with data from user input:
  int nextInt = 0;
  cout << "Enter next integer and press enter (press non-integer key after last entry)" << endl;
  bool continueReading = true;
  while (continueReading)
  {
    cin >> nextInt;
    if (!cin) // or if(cin.fail())
    {
      continueReading = false;
      // user didn't input a number
      cin.clear(); // reset failbit
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
                                                                     // next, request user reinput
    }
    else
    {
      intVec.push_back(nextInt);
    }
  }
*/
  intVec.push_back(-1);
  intVec.push_back(3);
  intVec.push_back(-4);
  intVec.push_back(5);
  intVec.push_back(1);
  intVec.push_back(-6);
  intVec.push_back(2);
  intVec.push_back(1);

  int result = solution(intVec);
  cout << "Result: " << result << endl;

  // End of program
  cout << "Press any key to exit.";
  _getch();

  //// Clean-up:
  //for (std::vector<CAircraft*>::iterator aircraftDbIt = aircraftDb.begin(); aircraftDbIt != aircraftDb.end(); aircraftDbIt++)
  //{
  //  delete *aircraftDbIt;
  //}
  return 0;
}


