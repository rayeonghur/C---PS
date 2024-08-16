#include <iostream>
#include <climits>
using namespace std; 

int main(){
    for(int i=0; i<3; i++){
        int count;
        int overflow=0;
        cin>>count; 
        long long sum=0;
        for(int j=0; j<count; j++){
            long long input;
            cin>>input;
            if(sum>0 && input>0 && input>LLONG_MAX-sum){
                overflow++;
            }
            else if(sum<0 && input<0&& input<LLONG_MIN-sum){
                overflow--;
            }
            sum+=input;    
        }
        if(overflow<0){
            cout<<'-'<<endl; 
        }else if(overflow>0){
            cout<<'+'<<endl; 
        }
        else if(sum==0){
            cout<<'0'<<endl;
        }else if(sum<0){
            cout<<'-'<<endl;
        }else if(sum>0){
            cout<<'+'<<endl;
        }
    }
    return 0;
}
