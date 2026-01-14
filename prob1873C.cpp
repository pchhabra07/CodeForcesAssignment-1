#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        // vector<vector<char>>arr(10,vector<char>(10,'.'));
        int points=0;

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                char x;cin>>x;

                if(x=='X'){
                    //First and last row
                    if( i==0 || i==9 ){
                        points+=1;
                    }
                    //First and last column
                    else if( j==0 || j==9 ){
                        points+=1;
                    }
                    //2 pointer zone
                    else if( (i==1 || i==8) || (j==1 || j==8) ){
                        points+=2;
                    }
                    //3 pointer zone
                    else if( (i==2 || i==7) || (j==2 || j==7) ){
                        points+=3;
                    }
                    //4 pointer zone
                    else if( (i==3 || i==6) || (j==3 || j==6) ){
                        points+=4;
                    }
                    //5 pointer zone
                    else{
                        points+=5;
                    }
                }
            }
        }

        cout<<points<<endl;

        
    }
}