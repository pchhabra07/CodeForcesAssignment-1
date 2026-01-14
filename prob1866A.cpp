#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>arr;
    int minimumAbsVal=INT_MAX;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.push_back(x);
        minimumAbsVal=min(minimumAbsVal, abs(x));
    }

    cout<<minimumAbsVal<<endl;
}