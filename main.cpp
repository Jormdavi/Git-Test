#include <iostream>

using namespace std;

int sum(int num){

  int number = num + 1;

  return number;

}
int pro(int var){

  int val = var * 2;

  return val;

}

int main(){

  cout << "Hello World!" << endl;
  int num =0;

  cout << "please enter a number" << endl;
  cin >> num;
  cout << endl;
  cout << "Thanks" << endl;

  cout << "the sum is " << sum(num) << endl;

  cout << "The sum * 2 is " << pro(sum(num)) << endl;

}
