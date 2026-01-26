#include<iostream>
#include<map>
using namespace std;

typedef pair<int,int>pi;

int main(){
    int t;cin>>t;

    for(int testcase=0;testcase<t;testcase++){
        int a,b;cin>>a>>b;

        int xK, yK, xQ, yQ;
        cin>>xK>>yK;
        cin>>xQ>>yQ;

        if(a==b){
            int ans=0;
            map < pair<int,int> , int > pointsForKing;
            
            pi pt1, pt2, pt3, pt4;
            pt1.first=xK+a;pt1.second=yK+a;

            pt2.first=xK+a;pt2.second=yK-a;

            pt3.first=xK-a;pt3.second=yK-a;

            pt4.first=xK-a;pt4.second=yK+a;

            pointsForKing[pt1]=1;
            pointsForKing[pt2]=1;
            pointsForKing[pt3]=1;
            pointsForKing[pt4]=1;
            
            pi pt5, pt6, pt7, pt8;
            pt5.first=xQ+a;pt5.second=yQ+a;
            pt6.first=xQ+a;pt6.second=yQ-a;
            pt7.first=xQ-a;pt7.second=yQ-a;
            pt8.first=xQ-a;pt8.second=yQ+a;

            
            if(pointsForKing.find(pt5)!=pointsForKing.end()){
                ans++;
            }
            if(pointsForKing.find(pt6)!=pointsForKing.end()){
                ans++;
            }
            if(pointsForKing.find(pt7)!=pointsForKing.end()){
                ans++;
            }
            if(pointsForKing.find(pt8)!=pointsForKing.end()){
                ans++;
            }

            cout<<ans<<endl;
        }
        else{
            int ans=0;
            map < pair<int,int> , int > pointsForKing;
            
            pi pt1, pt2, pt3, pt4, pt5, pt6, pt7, pt8;
            pt1.first=xK+a;pt1.second=yK+b;
            pt2.first=xK+a;pt2.second=yK-b;
            pt3.first=xK-a;pt3.second=yK-b;
            pt4.first=xK-a;pt4.second=yK+b;
            pt5.first=xK+b;pt5.second=yK+a;
            pt6.first=xK+b;pt6.second=yK-a;
            pt7.first=xK-b;pt7.second=yK-a;
            pt8.first=xK-b;pt8.second=yK+a;

            pointsForKing[pt1]=1;
            pointsForKing[pt2]=1;
            pointsForKing[pt3]=1;
            pointsForKing[pt4]=1;
            pointsForKing[pt5]=1;
            pointsForKing[pt6]=1;
            pointsForKing[pt7]=1;
            pointsForKing[pt8]=1;

            pi pt9, pt10, pt11, pt12, pt13, pt14, pt15, pt16;
            
            pt9.first=xQ+a;pt9.second=yQ+b;
            pt10.first=xQ+a;pt10.second=yQ-b;
            pt11.first=xQ-a;pt11.second=yQ-b;
            pt12.first=xQ-a;pt12.second=yQ+b;
            pt13.first=xQ+b;pt13.second=yQ+a;
            pt14.first=xQ+b;pt14.second=yQ-a;
            pt15.first=xQ-b;pt15.second=yQ-a;
            pt16.first=xQ-b;pt16.second=yQ+a;

            
            if(pointsForKing.find(pt9)!=pointsForKing.end()){
                ans++;
            }
            if(pointsForKing.find(pt10)!=pointsForKing.end()){
                ans++;
            }
            if(pointsForKing.find(pt11)!=pointsForKing.end()){
                ans++;
            }
            if(pointsForKing.find(pt12)!=pointsForKing.end()){
                ans++;
            }
            if(pointsForKing.find(pt13)!=pointsForKing.end()){
                ans++;
            }
            if(pointsForKing.find(pt14)!=pointsForKing.end()){
                ans++;
            }
            if(pointsForKing.find(pt15)!=pointsForKing.end()){
                ans++;
            }
            if(pointsForKing.find(pt16)!=pointsForKing.end()){
                ans++;
            }

            cout<<ans<<endl;
        }
    }
}