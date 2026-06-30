//tcs

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N , V ,C;
    cin>>N>>V>>C;
    int ans = INT_MAX;
    int car = ceil((double)N/4.00);
    int van = ceil((double)N/100.00);
    ans = min(car*C , van * V);
    for(int vans = 1 ; vans<van;vans++){
        int rem = N % (vans)*100;
        int remc = ceil((double)rem/4.00);
        ans = min(ans , (vans*V+remc*C));
    }
    cout<<ans;
    return 0;
}