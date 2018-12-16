#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <iostream>
using namespace std;


float mean(float *numbers, int length){
  float sum = 0.0;
  for (int i = 0;  i < length ; i++){
    sum += numbers[i];
  }
  return sum/length;
}


float var(float *numbers, int length){
  float avg = mean(numbers, length);
  //size_t length = sizeof(numbers)/sizeof(float);
  float sum = 0.0;
  for (int i = 0; i < length ; i++){
    sum += pow(numbers[i]-avg,2);
  }
  return sum/(length-1);
}

float stdev(float *numbers, int length){
  float variance = var(numbers, length);
  return sqrt(variance);
}

std::unordered_map seperate_by_class()

int main(){
  float numbers[] = {1.0,2.0,3.0,4.0,5.0};
  cout << "Mean: " << mean(numbers,5) << endl;
  cout << "Standard Deviation: " << stdev(numbers, 5) << endl;
}
