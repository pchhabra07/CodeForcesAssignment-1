#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;

    for(int i=0;i<t;i++){
        int a,b,c,d;cin>>a>>b>>c>>d;

        if(d<b || (d==b && a<c) || (d>b && (d-b)<(c-a)) ){
            cout<<-1<<endl;
        }
        else{
            int moves=0;
            while(d>b){
                moves++;
                a++;
                b++;
            }
            while(a>c){
                moves++;
                a--;
            }
            cout<<moves<<endl;
        }
    }
}