#include <iostream>
using namespace std;
#include <stdlib.h>

int main()
{
    int x;

    // Function prototypes.
    int fahr2cel(int);
    void pretty_print(int);

    cout << "Enter Celsius value: ";
    cin >> x;
    pretty_print(fahr2cel(x));

    return EXIT_SUCCESS;
}

int fahr2cel(int celsius)
{
    int fahrenheit;

    fahrenheit = 9 * celsius / 5 + 32;
    return fahrenheit;
}

void pretty_print(int value)
{
    cout << "Fahrenheit Value: " << value << endl;
    cout << endl;
}

