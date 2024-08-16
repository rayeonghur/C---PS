#include <iostream>
#include <string>
#include <sstream>

using namespace std; 
int main(){
    string input;
    getline(cin, input, '#');
    
    istringstream iss(input);
    string buffer;
    while(getline(iss, buffer, '\n')){
        int count=0; 
        for(int i=0; i<buffer.length(); i++){
            if (buffer[i] == 'a' || buffer[i] == 'e' || buffer[i] == 'i' || buffer[i] == 'o' || buffer[i] == 'u'
            ||buffer[i] == 'A' || buffer[i] == 'E' || buffer[i] == 'I' || buffer[i] == 'O' || buffer[i] == 'U'
            ) {
			count++;
		    }
        }
        cout<<count<<endl;
    }
}