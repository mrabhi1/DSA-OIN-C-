#include<iostream>
using namespace std;
int main(){
    int p,c,m,h,e,total;
    float per;

    cout<<"enter the maarks of physics=";
    cin>>p;

    cout<<"enter the maarks of chemistry=";
    cin>>c;

    cout<<"enter the maarks of maths=";
    cin>>m;
    cout<<"enter the maarks of hindi=";
    cin>>h;
    
    cout<<"enter the maarks of english=";
    cin>>e;

    total=p+c+m+h+e;

    cout<<"total marks="<<total;

    per=(total*100)/500;

    cout<<"percentage="<<per;

    return 0;
}