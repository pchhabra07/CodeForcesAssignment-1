#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    for(int testcase=0;testcase<t;testcase++){
        long long n,k,x;cin>>n>>k>>x;

        long long nk=n-k;

        long long minSum=(k*(k+1))/2;
        long long maxSum=(n*(n+1)/2)-(nk*(nk+1)/2);

        if(minSum<=x && x<=maxSum){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}