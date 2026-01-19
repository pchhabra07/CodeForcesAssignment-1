#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;
    for(int testcase=0;testcase<t;testcase++){
        int n,q;cin>>n>>q;
        vector<int>arr;
        vector<int>prefixSum;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);
            sum+=x;
            prefixSum.push_back(sum);
        }
        
        for(int query=0;query<q;query++){
            int l,r,k;cin>>l>>r>>k;

            int subArrSum=l-1>0?prefixSum[r-1]-prefixSum[l-2]:prefixSum[r-1];
            int newSum=sum-subArrSum+((r-l+1)*k);
            if(newSum % 2 == 0.0){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
}