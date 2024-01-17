#include <iostream>
using namespace std;

bool narcissistic( int value ){
  //Code away
  int x, positive_sum;
  x = 0, positive_sum = 0;
    if (value > 0) {
        // here we deal with positive
        x++;
        positive_sum += value;
    }
  cout << "From the entered numbers " << x << " of them are positive numbers"<<endl;
  cout << "Sum of these " << x << " numbers is " << positive_sum << endl; 
  return true; // debugging to be removed
}
