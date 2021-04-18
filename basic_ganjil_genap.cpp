#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int nomor1=27;
    switch (nomor1 % 2)
    {
    case 0:
        cout << nomor1 << " adalah bilangan genap";
        break;
    case 1:
        cout << nomor1 << " adalah bilangan Ganjil";

    default:
        break;
    }
    return 0;
}
