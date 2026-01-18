#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x==1)x++;
            arr.push_back(x);
        }

        for(int i=0;i<n-1;i++){
            if(arr[i+1]%arr[i]==0){
                arr[i+1]++;
            }
        }

        for(auto i:arr){
            cout<<i<<" ";
        }
        cout<<endl;

    }
}