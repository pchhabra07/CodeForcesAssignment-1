#include<iostream>
#include<vector>
#include<map>
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
        bool found=false;
        for(auto i:arr){
            if(i==k){
                found=true;
            }
        }

        if(found){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}