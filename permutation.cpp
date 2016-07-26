// permutation.cpp
// This program solves the problem:
// How many ways can you arrange 6 different books, left to right, on a shelf?

#include <iostream>
using namespace std;

int main(){
  int noOfBooks = 6;
  int tmp = 1;

  for(int i=1; i <= 6; i++){
      tmp = tmp * i ;
  }

  cout <<"It can be arranged in " << tmp << " ways!" <<endl;

}
