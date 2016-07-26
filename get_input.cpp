// get_input.cpp : Anubrata
// Description: Illustrate the use of cin to get input

#include <iostream>
using namespace std;

int main() {
  int input_var = 0;
  // Enter the do while loop and stay there until either
  // a non-numeric is entered, or -1 is entered. Note that
  // cin will accept any integer 4, 40, 400 etc.

  do {
    cout << "Enter a number (-1 = quite:): ";
    // the following line accepts input from keyboard into
    // variable input_var.
    // cin returns flase if an input operation fails, that is if
    // something other than an int (the type of input_var) is entered

    if (!(cin >> input_var)) {
      cout << " You entered a non-numeric. Exiting..." << endl;
      break;
      // exit the do while loop
    }
    if(input_var != -1){
      cout << "You enterd " << input_var << endl;
    }
  }while(input_var != -1);
  cout << "All done." << endl;
  return 0;

}
