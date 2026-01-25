#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;cin>>t;
    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        string s;cin>>s;

        int maxSame=1;
        int curSame=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                curSame++;
            }
            else{
                curSame=1;
            }
            maxSame=max(maxSame,curSame);
        }

        cout<<maxSame+1<<endl;
    }
}