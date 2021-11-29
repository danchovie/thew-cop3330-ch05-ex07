/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Daniel Thew
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  //ints to hold user input
  int a, b, c;
  //auxilliary double for radical val, doubles for roots
  double rad, root_1, root_2;
  //get user input
  cin>>a;
  cin>>b;
  cin>>c;
  //calculate the value under the radical in the quadratic formula
  rad = (pow(b,2))-(4*a*c);
  //if the number under the radical is a negative value, print an error
  //and exit the code
  if(rad<0){
    cout<<"Error. No real roots.\n";
    exit(0);
  }
  //get the square root of the radical
  rad = sqrt(rad);
  //calculate each of the roots and print
  root_1 = ((-1*b)+rad)/(2*a);
  root_2 = ((-1*b)-rad)/(2*a);
  cout<<"Root 1 is "<<root_1<<" and Root 2 is "<<root_2<<".\n";
} 