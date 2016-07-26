// guessingRand.cpp : Anubrata Das
// User needs to guess the random number. If the user fails to guess the number
// correctly the program gives hints such as "too high", "too low" etc.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  int input_var = 0, random_num = 0;
  char quit_var = 'n';

  do{
    srand(time(0)); // Seed for the rand function : Uses time (epoch) as a seed
    random_num = rand()%1000;
    cout << " Please try and guess the number I generated (between 1 to 1000)!!" << endl;
    // cout << random_num << endl;

    do{

      cout << " Your guess(-1 to stop guessing): ";

      if(!(cin >> input_var)){
        cout << "Please enter number only!!" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
      }

      if(input_var > random_num){
        cout << "Too high!" << endl;
      } else if (input_var == random_num){
        cout << "Congrats! You got it right!" << endl;
      } else {
        cout << "Too low!" << endl;
      }
    }
    while(input_var != -1 && input_var != random_num);

    cout << "bye bye!" << endl;

    cout <<"Want me to guess a new number? (y/n)";

    if(!(cin >> quit_var)){
      cout << "Please enter character only!!" << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }

  }while(quit_var != 'n');

  return 0;
}
