#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <iostream>
using namespace std;




int main(){
  float numbers[] = {1.0,2.0,3.0,4.0,5.0};
  cout << "Mean: " << mean(numbers,5) << endl;
  cout << "Standard Deviation: " << stdev(numbers, 5) << endl;
}
