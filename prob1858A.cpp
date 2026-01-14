#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int a,b,c;cin>>a>>b>>c;

        int buttonsPressedByAnna=0;
        int buttonsPressedByKatie=0;
        if(c%2==0){
            buttonsPressedByAnna=a+(c/2);
            buttonsPressedByKatie=b+(c/2);
        }
        else{
            buttonsPressedByAnna=a+(c/2)+1;
            buttonsPressedByKatie=b+(c/2);
        }

        if(buttonsPressedByAnna>buttonsPressedByKatie){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
}