#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;cin>>t;

    for(int i=0;i<t;i++){
        int n;cin>>n;

        string s;cin>>s;
        int l=0, r=n-1;

        while((s[l]=='0' && s[r]=='1' && l<r) || (s[l]=='1' && s[r]=='0' && l<r)){
            l++;
            r--;
        }

        if(l<r){
            cout<<r-l+1<<endl;
        }
        else if(l>r){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}