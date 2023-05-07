#include <iostream>
#include <vector>
#include <time.h>
#include <string>
#include <algorithm>

using namespace std;

string lotto(vector<int> numbers)
{
    
}

int main()
{
    //Vorgegebene Main Funktion: Ihr sollt nur eure Namen, Matrikelnummern und Gruppennummer ergänzen.
    cout << "Aufgabe Nr.5, Gruppe Nr.X,\nGruppenmitglieder: Max Mustermann (1234), Maria Musterfrau (1234), xxxx (1234)\n"
         << endl;
    cout << "Please enter all numbers individually and confirm with enter:" << endl;
    vector<int> numbers;
    while (true)
    {
        if (cin.peek() == '\n')
            break;
        int n;
        cin >> n;
        cin.ignore();
        numbers.push_back(n);
    }
    cout << lotto(numbers) << endl;
    cin.get();
    system("pause");
    return 0;
}