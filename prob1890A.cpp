#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n;cin>>n;
        vector<int>arr;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);

            if(mp.find(x)==mp.end()){
                mp[x]=1;
            }
            else{
                mp[x]++;
            }
        }

        if(mp.size()>2){
            cout<<"No"<<endl;
        }
        else if(mp.size()==1){
            cout<<"Yes"<<endl;
        }
        else{
            int num1=-1,num2=-1;
            for(auto i:mp){
                if(num1==-1){
                    num1=i.first;
                }
                else{
                    num2=i.first;
                }
            }

            if( (n%2==0 && mp[num1]==mp[num2]) || (n%2!=0 && abs(mp[num1]-mp[num2])==1) ){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }


    }
}