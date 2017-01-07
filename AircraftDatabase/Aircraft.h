#pragma once

// Aircraft.h: defines the CAircraft class

#include <string>
using namespace std;

class CAircraft
{
public:
  CAircraft();  // Null constructor
  ~CAircraft(); // Destructor

  // Print data:
  void PrintData();

private:
  string type_;
  int id_;
  static int count_; // Total number of CAircraft objects
};
