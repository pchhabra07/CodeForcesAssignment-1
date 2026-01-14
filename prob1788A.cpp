#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;

    for(int i=0;i<t;i++){
        int n;cin>>n;

        vector<int>arr;
        int noOf2=0;
        for(int j=0;j<n;j++){
            int x;cin>>x;
            arr.push_back(x);
            if(x==2){
                noOf2++;
            }
        }
        bool found=false;

        if(noOf2==0){
            cout<<1<<endl;
            found=true;
        }
        else if(noOf2%2==0){
            int cur2s=0;
            for(int j=0;j<n;j++){
                if(arr[j]==2){
                    cur2s++;
                }

                if(cur2s==noOf2/2){
                    cout<<j+1<<endl;
                    found=true;
                    break;
                }
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
}