#include <iostream>
using namespace std;
int factorial (int n);
int main(int argc, char const *argv[]) {
  int numero = atoi(argv[1]);

  cout<<"Factorial de "<<factorial (numero) << endl;

  return 0;
}
int factorial (int n){

  if (n >= 1){
    return n*factorial(n-1);;
  }
  else {
    return 1;
  }
    //cout<<"Factorial de "<< factorial(n) << endl;
}
