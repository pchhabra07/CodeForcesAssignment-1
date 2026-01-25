#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;
    for(int testcase=0;testcase<t;testcase++){
        int n,k;cin>>n>>k;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);
        }

        sort(arr.begin(),arr.end());

        int window=0;
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>k){
                window=0;
            }
            else{
                window++;
            }
            ans=max(ans,window);
        }

        cout<<n-(ans+1)<<endl;
    }
}