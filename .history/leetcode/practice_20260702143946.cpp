//tcs

#include<bits/stdc++.h>
using namespace std;

/*

int main(){
    int N , V ,C;
    cin>>N>>V>>C;
    int ans = INT_MAX;
    int car = ceil((double)N/4.00);
    int van = ceil((double)N/100.00);
    //cout<<car<<" "<<van<<endl;
    ans = min(car*C , van * V);
    for(int vans = 1 ; vans<van;vans++){
        int rem = max(0 , N - vans*100);
        //cout<<rem<<endl;
        int remc = ceil((double)rem/4.00);
        //cout<<remc<<endl;
        //cout<<vans*V+remc*C<<" *";

        ans = min(ans , (vans*V+remc*C));
    }
    cout<<ans;
    return 0;
}


*/


int main(){
    string str = "pwwkew";
    //cin>>str;
    vector<int>visit(256,-1);
    int ans = 0;

    /*for(int i =0;i<str.size();i++){
        for(int j = i;j<str.size();j++){
            if(visit[str[j]] != -1){
                break;
            }
            visit[str[j]] = 1;
            ans++;
        }
        visit.assign(256,-1);
    }*/

    int left = 0;
    long long ans = 0;

    for(int right = 0;right<str.size();right++){
        if(visit[str[i]]>=)
    }
    cout<<ans;
}





