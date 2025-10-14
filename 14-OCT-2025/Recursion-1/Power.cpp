#include<iostream>
using namespace std;
int number_power(int base, int power){
    if (power==0) return 1;
    return base*number_power(base, power-1);
}
int main(){
    int base;
    cout<<"enter value of base : ";
    cin>>base;
    int power;
    cout<<"enter value of exponent : ";
    cin>>power;
    cout<<number_power(base,power);
    return 0;
}
