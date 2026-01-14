#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        int sum=0;
        for(int i=0;i<n-1;i++){
            int x;cin>>x;
            sum+=x;
        }
        cout<<-1*sum<<endl;
    }
}