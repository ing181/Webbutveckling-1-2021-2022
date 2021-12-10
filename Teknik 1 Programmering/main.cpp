#include <iostream>
using namespace std;
int main()
{
    int alder; // Variabel för heltal
    cin >> alder;


    if (alder < 7) // Om det som står mellan ( och ) är sant
    {
        // Så händer det som står mellan måsvingarna
        cout << "Det kostar 50 kronor";
    }
    else
    {
        cout << "Det kostar 100 kronor";
    }


    return 0;
}
