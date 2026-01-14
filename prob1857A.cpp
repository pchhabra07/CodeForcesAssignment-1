#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        vector<int>arr;
        int numOfOdds=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);
            if(x%2!=0){
                numOfOdds++;
            }
        }

        if(numOfOdds%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}