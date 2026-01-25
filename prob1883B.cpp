#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    int t;cin>>t;
    for(int testcase=0;testcase<t;testcase++){
        int n,k;cin>>n>>k;
        string s;cin>>s;

        if(n-k==1){
            cout<<"Yes"<<endl;
            continue;
        }

        map<char,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=1;
            }
            else{
                mp[s[i]]++;
            }
        }

        int numOfOddChar=0;
        for(auto i:mp){
            if(i.second%2!=0){
                numOfOddChar++;
            }
        }

        if(numOfOddChar-1<=k){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}