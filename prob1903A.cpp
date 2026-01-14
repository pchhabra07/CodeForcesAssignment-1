#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int n,k;cin>>n>>k;
        vector<int>boxes;
        for(int j=0;j<n;j++){
            int boxNum;cin>>boxNum;
            boxes.push_back(boxNum);
        }

        if(k>=2){
            cout<<"Yes"<<endl;
            continue;
        }

        bool sorted=true;
        
        for(int i=0;i<n-1;i++){
            if(boxes[i]>boxes[i+1]){
                sorted=false;
                break;
            }
        }

        if(!sorted){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}