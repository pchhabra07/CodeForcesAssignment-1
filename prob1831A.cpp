#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a.push_back(x);
        }

        vector<int>b(n,0);
        for(int i=0;i<n;i++){
            b[i]=n+1-a[i];
        }

        for(auto i:b){
            cout<<i<<" ";
        }
        cout<<endl;
    }
        
}