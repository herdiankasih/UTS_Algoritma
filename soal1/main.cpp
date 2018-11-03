#include<iostream>
using namespace std;

int main()
{
    int a,b,x,y;
    cout<<"Program Hitungan"<<endl<<endl;
    cout<<"Input A : ";
    cin>>a;
    cout<<"Input B : ";
    cin>>b;
    x=a;
    y=b;

    while(x!=y){
        if (x<y){
            x=x+a;
        }else{
            y=y+b;
        }
    }
    cout<<"Nilai x = "<<x;
}
