#include <iostream>
using namespace std;
int main()
{
    int alder; // Variabel f�r heltal
    cin >> alder;


    if (alder < 7) // Om det som st�r mellan ( och ) �r sant
    {
        // S� h�nder det som st�r mellan m�svingarna
        cout << "Det kostar 50 kronor";
    }
    else
    {
        cout << "Det kostar 100 kronor";
    }


    return 0;
}
