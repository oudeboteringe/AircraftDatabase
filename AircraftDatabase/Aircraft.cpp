// Aircraft.cpp defines the methods of the CAircraft class

#include "stdafx.h"

#include "Aircraft.h"

#include <iostream>

int CAircraft::count_ = 0;

CAircraft::CAircraft()
{
  type_ = "Boeing747";
  id_ = ++count_;
}

CAircraft::~CAircraft()
{
}

void CAircraft::PrintData()
{
  cout << "Aircraft: " << id_ << ": type: " << type_ << endl;
}


