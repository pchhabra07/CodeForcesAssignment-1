#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        vector<int>arr;
        bool sorted=true;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);
            if(i==0)continue;

            if(arr[i]<arr[i-1]){
                sorted=false;
            }
        }

        if(!sorted){
            cout<<0<<endl;
        }
        else{
            pair<int,int>minDist;
            minDist.second=INT_MAX;
            minDist.first=-1;
            for(int i=0;i<n-1;i++){
                if(arr[i+1]-arr[i]<minDist.second){
                    minDist.second=arr[i+1]-arr[i];
                    minDist.first=i;
                }
            }

            int ans=(minDist.second/2)+1;
            cout<<ans<<endl;
        }

    }
        
}