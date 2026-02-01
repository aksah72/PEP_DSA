#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1 || n == 0) return 1;
     n = n * factorial(n-1);
     

}