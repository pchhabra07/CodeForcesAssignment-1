#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        vector<int>arr;
        for(int j=0;j<n;j++){
            int x;cin>>x;
            arr.push_back(x);
        }

        if(n==1){
            cout<<0<<endl;
            continue;
        }

        int ans=0;
        int sizeOfSameParity=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]%2==arr[i+1]%2){
                sizeOfSameParity++;
            }
            else{
                ans+=sizeOfSameParity-1;
                sizeOfSameParity=1;
            }
        }
        ans+=sizeOfSameParity-1;
        cout<<ans<<endl;
    }
}