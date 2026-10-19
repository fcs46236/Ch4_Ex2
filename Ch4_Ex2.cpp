/* Calculator Program
   Create a program that asks for an integer in the range [1, 10], then uses a switch statement to output the corresponding Roman numeral.
   Validate that the input is an integer in the specified range.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int Arabic_number;
    
    cout << "Please enter an integer in the range [1, 10]" << endl;
    
    cin >> Arabic_number;

        switch (Arabic_number) {
        case 1: cout << "The Roman numeral equivalent for " << Arabic_number << " is I." << endl;
            break;
        case 2: cout << "The Roman numeral equivalent for " << Arabic_number << " is II." << endl;
            break;
        case 3: cout << "The Roman numeral equivalent for " << Arabic_number << " is III." << endl;
            break;
        case 4: cout << "The Roman numeral equivalent for " << Arabic_number << " is IV." << endl;
            break;
        case 5: cout << "The Roman numeral equivalent for " << Arabic_number << " is V." << endl;
            break;
        case 6: cout << "The Roman numeral equivalent for " << Arabic_number << " is VI." << endl;
            break;
        case 7: cout << "The Roman numeral equivalent for " << Arabic_number << " is VII." << endl;
            break;
        case 8: cout << "The Roman numeral equivalent for " << Arabic_number << " is VIII." << endl;
            break;
        case 9: cout << "The Roman numeral equivalent for " << Arabic_number << " is IX." << endl;
            break;
        case 10: cout << "The Roman numeral equivalent for " << Arabic_number << " is X." << endl;
            break;
        
        default: cout << "Your number is not an integer in the range [1,10]." << endl;
        break;

    }

    return 0;

}
