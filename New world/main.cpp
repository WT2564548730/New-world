#include <iostream>
#include <string>
#include <fstream>
using namespace std;

ifstream sin("/Users/WT20181105881/Desktop/in.txt");

int main(){
    int n;
    sin>>n;
    int f=0;
    int j=0;
    int l=0;
    char a[30];
    do{
        f++;
        int x=n%10;
        l+=x;
        n/=10;
        if(f==1){
            for(int i=x;i>0;i--)
                a[j++]=i+'0';
        }
        if(f==2)
            for(int i=0;i<x;i++)
                a[j++]='s';
        if(f==3)
            for(int i=0;i<x;i++)
                a[j++]='b';
    }while(n!=0);
    for(int i=0;l/2+1;i++)
        a[i]=a[l-i-1];
    cout<<a<<endl;
}
