// AircraftDatabase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"

#include <iostream>
#include <vector>
using namespace std;

#include "Aircraft.h"

int main()
{
  std::vector<CAircraft*> aircraftDb;

  // Fill the database:
  for (int iAc = 0; iAc < 10; iAc++)
  {
    CAircraft* pAircraft = new CAircraft;
    aircraftDb.push_back(pAircraft);
  }

  // Read the database and print contents:
  for (std::vector<CAircraft*>::iterator aircraftDbIt = aircraftDb.begin(); aircraftDbIt != aircraftDb.end(); aircraftDbIt++)
  {
    (*aircraftDbIt)->PrintData();
  }

  // End of program
  cout << "Press any key to exit.";
  _getch();

  // Clean-up:
  for (std::vector<CAircraft*>::iterator aircraftDbIt = aircraftDb.begin(); aircraftDbIt != aircraftDb.end(); aircraftDbIt++)
  {
    delete *aircraftDbIt;
  }
  return 0;
}


