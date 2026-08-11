#include<iostream>
using namespace std;

void frac_add(int n1,int d1,int n2,int d2)
{
    cout<<"Sum = "<<n1*d2+n2*d1<<"/"<<d1*d2<<endl;
}

int main(){
    int n1,d1,n2,d2;

    cout<<"Enter the first fraction: ";
    cin>>n1>>d1;

    cout<<"Enter the second fraction: ";
    cin>>n2>>d2;

    frac_add(n1,d1,n2,d2);

    return 0;
}