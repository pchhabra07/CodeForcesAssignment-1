#include<iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        vector<int>arr;
        map<int,int>mp;
        mp[-1]=0;
        mp[1]=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);
            mp[x]++;
        }

        int sumOfAllEls=(mp[-1]*-1)+(mp[1]*1);
        int prodOfAllEls=pow(-1,mp[-1]);
        int ans=0;
        if(sumOfAllEls>=0 && prodOfAllEls==1){
            cout<<0<<endl;
        }
        else{
            while(mp[-1]>mp[1] || mp[-1]%2!=0){
                mp[-1]--;
                mp[1]++;
                ans++;
            }

            cout<<ans<<endl;
        }   
    }
}