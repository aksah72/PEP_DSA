#include<iostream>
using namespace std;

bool palindrome

int main(){
    string str = "Hello";
    int i = 0 , j = str.size()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<str;
}
