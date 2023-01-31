#include <iostream>
using namespace std;

/*
Diane E. Granger
dianeegranger@gmail.com
Filename:  multiple_3_5.cpp

Given an integer M, perform the following conditional actions:
- If M is multiple of 3 and 5 then print "Good Number" (without quotes).
- If M is only multiple of 3 and not of 5 then print "Bad Number" (without quotes).
- If M is only multiple of 5 and not of 3 then print "Poor Number" (without quotes).
- If M doesn't satisfy any of the above conditions then print "-1" (without quotes).
*/

int multiple_3_5(int m)
{
  // m is a multiple of both 3 and 5
  if ((m % 3 == 0) && (m % 5 == 0)) {
    cout << "\nGood Number";

  // m is a multiple of 3 but not 5
  } else if ((m % 3 == 0) && (m % 5 != 0)) {
    cout << "\nBad Number";

  // m is multiple of 5 but not 3
  } else if ((m % 5 == 0) && (m % 3 != 0)) {
    cout << "\nPoor Number";

  // m is not a multiple of 3 or 5
  } else {
    cout << "\n-1";
  }
  return 0;
}

// Driver Program to test above function
int main()
{
  //Function Call:      Expected Output:
  multiple_3_5(30);       // Good Number
  multiple_3_5(9);        // Bad Number
  multiple_3_5(10);       // Poor Number
  multiple_3_5(7);        // -1
  multiple_3_5(0);        // Good Number
  multiple_3_5(1);        // -1
  multiple_3_5(-1);       // -1
  multiple_3_5(-90);      // Good Number
  multiple_3_5(90);       // Good Number
  return 0;
}

/*
TERMINAL OUTPUT:
PS C:\Users\diane\letsupgrade\C++> g++ multiple_3_5.cpp
PS C:\Users\diane\letsupgrade\C++> ./a                 
Good Number
Bad Number
Poor Number
-1
Good Number
-1
-1
Good Number
Good Number
PS C:\Users\diane\letsupgrade\C++>1
*/