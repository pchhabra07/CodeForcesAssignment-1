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
            if(i==0)continue;
            if(arr[i]!=arr[i-1]){
                same=false;
            }
        }

        if(same){
            cout<<-1<<endl;
        }
        else{
            sort(arr.begin(),arr.end(),greater<int>());
            vector<int>b,c;
            c.push_back(arr[0]);
            int i=1;
            while(arr[i]==arr[i-1]){
               c.push_back(arr[i]);
               i++;
            }

            while(i<n){
                b.push_back(arr[i]);
                i++;
            }

            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto j:b){
                cout<<j<<" ";
            }
            cout<<endl;
            for(auto j:c){
                cout<<j<<" ";
            }
            cout<<endl;
        }

        
    }
}