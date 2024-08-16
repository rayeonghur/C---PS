#include <iostream>

using namespace std;

int main(){
    int n, m, count;
    cin>>n>>m; 
    char arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        bool canEscape=true;
        for(int j=0; j<n; j++){
            if(arr[j][i]=='O'){
                canEscape=false;
                break;
            }
        }
        if(canEscape){cout<<i+1; return 0;}
    }
    cout<<"ESCAPE FAILED";
    return 0;
}