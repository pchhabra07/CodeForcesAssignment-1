#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n,k,x;cin>>n>>k>>x;

        if(x==1 && k<3 && n%2!=0){
            cout<<"No"<<endl;
        }
        else if(x==1 && k==1){
            cout<<"No"<<endl;
        }
        else{
            vector<int>integers;
            
            if(x!=1){
                for(int i=0;i<n;i++){
                    integers.push_back(1);
                }
            }
            else{
                if(n%2==0){
                    for(int i=0;i<n/2;i++){
                        integers.push_back(2);
                    }
                }
                else{
                    int numOf2s=(n/2)-1;
                    for(int i=0;i<numOf2s;i++){
                        integers.push_back(2);
                    }
                    integers.push_back(3);
                }
            }

            cout<<"Yes"<<endl;
            cout<<integers.size()<<endl;
            for(auto i:integers){
                cout<<i<<" ";
            }
            cout<<endl;

        }

        
    }
}