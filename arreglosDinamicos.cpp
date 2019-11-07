#include <iostream>
#include <stdlib.h>

using namespace std;

int factorial(int n);

int main(int argc, char const *argv[]) {

  int n;
  cout << "ingrese n" << endl;
  cin >> n;

  int *array1 = new int [n];

  for (size_t i = 0; i < n; i++) {
    array1[i] = factorial(i);
  }

  for (size_t j = 0; j < n; j++) {
    cout << "array[" << j << "]= " << array1[j] << endl;
  }

  return 0;
}
int factorial(int n){
  if(n == 0){
    return 1;
  }
  else{
    return n*factorial(n-1);
  }
}
