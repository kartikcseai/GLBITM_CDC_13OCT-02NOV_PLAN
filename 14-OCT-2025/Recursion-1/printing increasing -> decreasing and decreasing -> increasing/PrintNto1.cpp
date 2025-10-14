#include<iostream>
using namespace std;
void print_numbers(int n){
    if(n==0) return;
    cout<<n<<" ";
    print_numbers(n-1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print_numbers(n);
    return 0;
}
