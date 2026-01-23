#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;
    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        bool all0=true;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);
            if(x!=0){
                all0=false;
            }
        }
        
        if(all0){
            cout<<0<<endl;
        }
        else{
            if(n%2==0){
                cout<<2<<endl;
                cout<<1<<" "<<n<<endl;
                cout<<1<<" "<<n<<endl;
            }
            else{
                cout<<4<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<n-1<<" "<<n<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
    }
}