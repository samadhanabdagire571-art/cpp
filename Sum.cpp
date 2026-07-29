#include<iostream>
int main(){

    int n,i,sum = 0;
    std::cout<<"Enter a num:";
    std::cin>>n;

    for(i=0;i<=n;i++){

        sum = sum + i;


    }
    
    std::cout<<"Sum:"<<sum;
    return 0;


}
