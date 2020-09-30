// Indirect Recursion to calculate factorial of a number

#include <iostream>
using namespace std;

int func_a(int);
int func_b(int);

int func_a(int n){
   if(n<=1)
      return 1;
   else
      return n*func_b(n-1);
}

int func_b(int n){
   if(n<=1)
      return 1;
   else
      return n*func_a(n-1);
}

int main(){
   int num = 5;
   cout<< fa(num);
   return 0;
}
