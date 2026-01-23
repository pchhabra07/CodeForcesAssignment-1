#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;
    for(int testcase=0;testcase<t;testcase++){
        int a,b,n;cin>>a>>b>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);
        }

        sort(arr.begin(),arr.end());

        long long totalTime=0;
        int i=0;
        while(i<n){
            totalTime+=b-1;
            b=1;
            b=min(a,b+arr[i]);
            i++;

        }

        totalTime+=b;  

        cout<<totalTime<<endl;
    }
}