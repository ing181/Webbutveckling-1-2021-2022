#include <iostream>
using namespace std;
int main()
{
    // Anvv�ndaren v�ljer
    float antalliter;
    float literpris;
    cout << "Antal liter ";
    cin >> antalliter;
    cout << "Literpris ";
    cin >> literpris;
    // float literpris = 2.0;
    // float antalliter = 5.0;
    float tankadeliter = 0;
    while (tankadeliter < antalliter)
    {
        cout << tankadeliter * literpris;
        cout << endl;
        tankadeliter = tankadeliter + 1;
    }


    return 0;
}
