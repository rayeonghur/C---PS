#include <iostream>

using namespace std; 
int main(){
    long long unsigned int a, b; 
    cin>> a>>b;

    long long unsigned int result=a/b;
    cout<<result<<endl; 
    cout<<a-result*b<<endl;

    return 0;
}