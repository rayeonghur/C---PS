#include <iostream>
#include <algorithm>
#include <set>

using namespace std; 


int main(){
    int count; 
    cin>>count; 
    set<int> s;
    for(int i=0; i<count; i++){
        int num; 
        cin>>num;
        s.insert(num);
    }
    cout<<*(s.begin())*(*(--s.end()));
    return 0;
}