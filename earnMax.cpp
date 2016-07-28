// earnMax.cpp : Anubrata

// Based on weekly sales decide which option can maximize the earning for
//a month. Available schemes are:
// 1. Straight salary of $600 per week;
// 2. A salary of $7.00 per hour plus a 10% commission on sales;
// 3. No salary, but 20% commissions and $20 for each pair of shoes sold

// Assumption: The job has a 40 hour work week.

#include <iostream>
using namespace std;

int GetInput(){
  int WeeklySales;
  cout << "Enter weekly sales in dollars: ";
  while(!(cin >> WeeklySales)){
    cout << "Please enter integer only!" << endl;
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Enter weekly sales in dollars: ";
  }
  return WeeklySales;
}

int CalcMethod1(int WeeklySales){
  return 600;
}

int CalcMethod2(int WeeklySales){
  return 40 * 7 + (WeeklySales * 0.1);
}

int CalcMethod3(int WeeklySales){
  return WeeklySales*(0.20 + 20);
}

int main(){
  int WeeklySales;
  WeeklySales = GetInput();

  int method1 = CalcMethod1(WeeklySales);
  int method2 = CalcMethod2(WeeklySales);
  int method3 = CalcMethod3(WeeklySales);
  cout << "Method 1 " << method1 << " Method 2 " << method2 << " Method 3 " << method3 << endl;

  if((method1 == method2) && (method2 == method3)){
    cout << "Go for anything!!" << endl;
  }
  if (method1 > method2){
    if(method2 > method3){
      cout <<"Go for method1"<< endl;
    } else if(method3 > method2){
        if( method3 > method1)
          cout <<"GO for method3" << endl;
    }
  }else if(method2 > method1){
      if(method2 > method3)
        cout << "Go for method2" << endl;
  }

  return 0;
}
