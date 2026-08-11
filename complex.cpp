#include<iostream>
using namespace std;

void comp_add(int r1 ,int i1 ,int r2 ,int i2)
{
    cout<<"Sum = "<<r1+r2<<" + "<<i1+i2<<"i"<<endl;
}
void comp_sub(int r1,int i1,int r2,int i2)
{
    cout<<"Sub = "<<r1-r2<<" + "<<i1-i2<<"i";

}
int main()
{
    int r1 , r2 , i1 , i2;

    cout<<"Enter the first complex number: ";
    cin>>r1>>i1;

    cout<<"Enter the second complex number: ";
    cin>>r2>>i2;

    comp_add(r1,i1,r2,i2);
    comp_sub(r1,i1,r2,i2);

    return 0;
}