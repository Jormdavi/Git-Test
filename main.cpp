#include <iostream>

using namespace std;

int sum(int num){

  int number = num + 1;

  return number;

}

int main(){

  cout << "Hello World!" << endl;
  int num =0;

  cout << "please enter a number" << endl;
  cin >> num;
  cout << endl;
  cout << "Thanks" << endl;

  int num2;
  num2 = sum(num);
  cout << "the sum is " << num2 << endl;

}
