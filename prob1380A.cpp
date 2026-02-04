#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;
    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        vector<int>arr;
        bool sortedInc=true;
        bool sortedDec=true;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);

            if(i==0)continue;

            if(arr[i]<arr[i-1]){
                sortedInc=false;
            }

            if(arr[i]>arr[i-1]){
                sortedDec=false;
            }
        }

        if(sortedInc || sortedDec){
            cout<<"No"<<endl;
        }
        else{
            bool found=false;
            for(int j=1;j<n;j++){
                if(found){
                    break;
                }
                if(arr[j]>arr[j-1] && found==false){
                    int i=j-1;
                    for(int k=j+1;k<n;k++){
                        if(arr[j]>arr[k] && found==false){
                            cout<<"Yes"<<endl;
                            cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                            found=true;
                        }
                    }
                }
            }
            if(!found){
                cout<<"No"<<endl;
            }
        }

        
    }
}