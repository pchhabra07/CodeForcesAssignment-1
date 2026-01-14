#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int x,k;cin>>x>>k;

        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else{
            vector<int>moves;
            int curPointer=0;
            while(curPointer!=x){
                int curMove=x-curPointer;
                while(curMove%k==0 && curPointer<x){
                    curMove--;
                }
                moves.push_back(curMove);
                curPointer+=curMove;
            }

            cout<<moves.size()<<endl;
            for(auto i:moves){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        
    }
}