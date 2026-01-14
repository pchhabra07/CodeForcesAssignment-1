#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        vector<int>arr;
        bool same=true;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);
            if(i>0 && arr[i]!=arr[i-1]){
                same=false;
            }
        }

        if(same==true){
            cout<<"No"<<endl;
        }
        else{
            sort(arr.begin(),arr.end(),greater<int>());
            if(arr[0]==arr[1]){
                swap(arr[0],arr[n-1]);
            }

            cout<<"Yes"<<endl;
            for(auto i:arr){
                cout<<i<<" ";
            }
            cout<<endl;
        }



    }
}