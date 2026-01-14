#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;

    for(int i=0;i<t;i++){
        int n;cin>>n;
        vector<int>arr;

        for(int j=0;j<n;j++){
            int x;cin>>x;
            arr.push_back(x);
        }

        int xr=0;
        for(int j=0;j<arr.size();j++){
            xr=xr^arr[j];
        }
        if(n%2==0 && xr==0){
            cout<<1<<endl;
        }
        else if(n%2!=0){
            cout<<xr<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}