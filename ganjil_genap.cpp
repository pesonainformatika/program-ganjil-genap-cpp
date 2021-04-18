#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nomor;
    cout << "Masukan Nomor: ";
    cin >> nomor;

    switch (nomor % 2)
    {
    case 0:
        cout << nomor << " adalah bilangan genap\n";
        break;
    case 1:
        cout << nomor << " adalah bilangan ganjil\n";
    
    default:
        break;
    }
    return 0;
}
