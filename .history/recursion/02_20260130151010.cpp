#include<iostream>
using namespace std;
int p = 1;
int factorial(int n){
    if(n==1 || n == 0) return 1;
    p *=  factorial(n-1);


}