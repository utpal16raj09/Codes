#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // Variable declaration
    int Number, J, M, D, C, L, X, IX, V, IV, I;

    // Take user input
    cout << "Enter Number : ";
    cin >> Number;

    // Check if the entered number is less than or equal to zero
    if (Number <= 0)
    {
        cout << "Invalid Number ." << endl;
        cout << "Press enter to continue..." << endl;
        cin.ignore();
        cin.get();
        return 0;
    }

    // Convert the number to its Roman numeral representation
    M = Number / 1000;
    Number = Number % 1000;

    D = Number / 500;
    Number = Number % 500;

    C = Number / 100;
    Number = Number % 100;

    L = Number / 50;
    Number = Number % 50;

    X = Number / 10;
    Number = Number % 10;

    IX = Number / 9;
    Number = Number % 9;

    V = Number / 5;
    Number = Number % 5;

    IV = Number / 4;
    Number = Number % 4;

    I = Number;

    // Display the Roman numeral representation
    cout << " Roman numeral : ";
    for (J = 1; J <= M; J++) // Print 'M' M times
        cout << "M";

    for (J = 1; J <= D; J++) // Print 'D' D times
        cout << "D";

    for (J = 1; J <= C; J++) // Print 'C' C times
        cout << "C";

    for (J = 1; J <= L; J++) // Print 'L' L times
        cout << "L";

    for (J = 1; J <= X; J++) // Print 'X' X times
        cout << "X";

    for (J = 1; J <= IX; J++) // Print 'IX' IX times
        cout << "IX";

    for (J = 1; J <= V; J++) // Print 'V' V times
        cout << "V";

    for (J = 1; J <= IV; J++) // Print 'IV' IV times
        cout << "IV";

    for (J = 1; J <= I; J++) // Print 'I' I times
        cout << "I";

    cout << endl;

    // Wait for the user to press Enter and then exit
    cout << "Press enter to continue...." << endl;
    cin.ignore();
    cin.get();
    return 0;
}
