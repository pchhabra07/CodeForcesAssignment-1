#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n,m;cin>>n>>m;

        string x,s;cin>>x>>s;
        int ops=-1;

        for(int i=0;i<5;i++){
            if(x.find(s)!=string::npos){
                if(ops==-1)ops=0;
                break;
            }
            else{
                x+=x;
                if(ops==-1){
                    ops=1;
                }
                else{
                    ops++;
                }
            }
        }

        if(x.find(s)==string::npos){
            ops=-1;
        }

        cout<<ops<<endl;
    }
}