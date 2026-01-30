#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;

    for(int i=0;i<t;i++){
        int n;cin>>n;

        if(n==1){
            cout<<0<<endl;
            continue;
        }

        if(n%3!=0){
            cout<<-1<<endl;
            continue;
        }

        int ans=0;
        while(n>=1){
            if(n==1){
                cout<<ans<<endl;
                break;
            }

            if(n%6==0){
                n=n/6;
            }
            else if(n%3!=0){
                cout<<-1<<endl;
                break;
            }
            else{
                n=n*2;
            }
            ans++;
        }
    }
}