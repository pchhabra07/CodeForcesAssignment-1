#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        vector<int>b;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            b.push_back(x);
        }

        vector<int>a;
        a.push_back(b[0]);
        for(int i=1;i<n;i++){
            if(a.back()<=b[i]){
                a.push_back(b[i]);
            }
            else{
                if(b[i]-1==0){
                    a.push_back(b[i]);
                }
                else{
                    a.push_back(b[i]-1);
                }
                a.push_back(b[i]);
            }
        }

        cout<<a.size()<<endl;
        for(auto i:a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}