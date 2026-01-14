#include<iostream>
#include<vector>
using namespace std;

int gcd(int a, int b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}

int main(){
    int t;cin>>t;

    for(int i=0;i<t;i++){
        //Input n
        int n;cin>>n;
        vector<int>arr;

        //Input array elements
        for(int j=0;j<n;j++){
            int x;cin>>x;
            arr.push_back(x);
        }

        //Check elements from index=1
        bool foundGood=false;
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(gcd(arr[j],arr[k])<=2){
                    foundGood=true;
                }
            }
        }

        if(foundGood){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}