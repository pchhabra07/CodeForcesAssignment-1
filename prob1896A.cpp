#include<iostream>
#include<vector>
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
            if(x!=i+1){
                sorted=false;
            }
        }

        if(sorted){
            cout<<"Yes"<<endl;
            continue;
        }
        else{
            if(arr[0]==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}