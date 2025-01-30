#include <iostream>
#include <cmath>

using namespace std;

int main(){

    string operation;
    float number1, number2, number3;
    // double currentAnswer;

    system("clear");
    cout << "Calculator app" << endl;
    cout << "Please enter your numbers and Operation(+, -, x, / or ÷): ";
    cin >> number1;
    while(cin >> operation){
    if (operation != "+" && operation != "-" && operation != "x" && operation != "/" && operation != "÷"){
        cout <<  "Invalid input try again" << endl;
    }else if (operation == "+" || operation == "-" || operation == "x" || operation == "/" || operation == "÷"){
            break;
        }
    }
    cin >> number2;
    if (operation == "+"){
        cout << "FInal Answer: " <<  number1 + number2 << endl;
    }else if (operation == "-"){
        cout << "FInal Answer: " <<  number1 - number2 << endl;
    }else if (operation == "x"){
        cout << "FInal Answer: " <<  number1 * number2 << endl;
    }else if (operation == "/" || operation == "÷"){
        cout << "FInal Answer: " <<  number1 / number2 << endl;
    }
  // testing git
    

    return 0;
}