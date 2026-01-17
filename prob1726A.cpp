#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        vector<int>arr;
        int minEl=INT_MAX;
        int maxEl=INT_MIN;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);

            maxEl=max(x,maxEl);
            minEl=min(x,minEl);
        }

        if(arr[0]==minEl || arr[n-1]==maxEl){
            cout<<maxEl-minEl<<endl;
        }
        else{
            int ans=arr[n-1]-arr[0];

            //Fixing first and cycling index 1 to n-1
            int maxNum=INT_MIN; //max number from index 1 to n-1
            for(int i=1;i<n;i++){
                maxNum=max(maxNum,arr[i]);
                ans=max(ans,maxNum-arr[0]);
            }

            //Fixing last and cycling index 0 to n-2
            int minNum=INT_MAX; //min number from index 0 to n-2
            for(int i=1;i<n;i++){
                minNum=min(minNum,arr[i]);
                ans=max(ans,arr[n-1]-minNum);
            }
            
            //Cycling the whole array
            int l=0,r=n-1;
            int cycles=0;
            while(cycles<=n){
                l--;
                r--;
                if(l==-1){
                    l=n-1;
                }
                if(r==-1){
                    r=n-1;
                }

                ans=max(ans,arr[r]-arr[l]);
                cycles++;
            }
            cout<<ans<<endl;
        }
    }
}