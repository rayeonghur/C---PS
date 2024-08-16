#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

int main(){
    int count; 

    const double KG_TO_LB = 2.2046;
    const double LB_TO_KG = 0.4536;
    const double L_TO_G = 0.2642;
    const double G_TO_L = 3.7854;

    cin>>count;

    for(int i=0; i<count; i++){
        double num; 
        string unit;
        double convertedNum;
        string convertedUnit;

        cin>>num>>unit;

        if (unit == "kg") {
            convertedNum = num * KG_TO_LB;
            convertedUnit = "lb";
        } else if (unit == "lb") {
            convertedNum = num * LB_TO_KG;
            convertedUnit = "kg";
        } else if (unit == "l") {
            convertedNum = num * L_TO_G;
            convertedUnit = "g";
        } else if (unit == "g") {
            convertedNum = num * G_TO_L;
            convertedUnit = "l";
        }
        cout << fixed<<setprecision(4) << convertedNum << " " << convertedUnit << endl;
    }
    return 0;
}