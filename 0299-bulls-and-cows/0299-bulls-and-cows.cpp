class Solution {
public:
    string getHint(string secret, string guess) {
        int cow = 0 , bull = 0;
        vector<int>catch1(10,0);

        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]) bull++;

            else{
                if(catch1[secret[i]-'0']<0) cow++;
                if(catch1[guess[i]-'0']>0) cow++;
                catch1[secret[i]-'0']++;
                catch1[guess[i]-'0']--;
            }
        }
        return to_string(bull)+"A"+to_string(cow)+"B";
    }
};