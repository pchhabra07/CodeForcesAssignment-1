#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;cin>>t;

    for(int i=0;i<t;i++){
        string s;cin>>s;
        int numOf0=0;
        int numOf1=0;

        for(auto j:s){
            if(j=='0'){
                numOf0++;
            }
            else{
                numOf1++;
            }
        }

        int moves=0;

        if(numOf0==numOf1){
            moves=numOf0;
        }
        else{
            moves=min(numOf0,numOf1);
        }

        if(moves%2==0){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
    }
}