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
            arr.push_back(x);
        }

        int longestBlank=0;
        int curBlank=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                curBlank++;
            }
            else{
                longestBlank=max(longestBlank,curBlank);
                curBlank=0;
            }
        }
        longestBlank=max(longestBlank,curBlank);
        cout<<longestBlank<<endl;
    }
}