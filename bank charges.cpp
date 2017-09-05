#include <iostream>

using namespace std;

int main()
{
    int number_of_checks, fee;
    cout << "Tell me the number of checks and I will calculate the bank fee for the month.";
    cin >> number_of_checks;
    if (number_of_checks >= 1-19){
        fee = number_of_checks * 0.10 + 15;
        cout << "This month fee is: $ " << fee << endl;
    }
    else if (number_of_checks >= 20-39){
             fee = number_of_checks * 0.08 + 15;
             cout << "This month fee is:$" << fee << endl;
    }
    else if (number_of_checks >= 40-59){
             fee = number_of_checks * 0.06 + 15;
             cout << "This month fee is:$" << fee << endl;
    }
    else
       fee = number_of_checks * 0.04 + 15;
       cout << "This month fee is:$" << fee << endl;

    return 0;
}
