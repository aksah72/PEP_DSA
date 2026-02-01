#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> coins(n);
    for(int i = 0;i<n;i++){
        cin>>coins[i];
    }
    int target;
    cin>>target;

    vector<int> dp(target+1,INT_MAX);
    dp[0] = 0;

    for(int i =1;i<=target;i++){
        for(int c : coins){
            if(i>=c){
                dp[i] = min(dp[i],dp[i-c]+1)
            }
        }
    }
}