#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setiosflags(ios::showpoint) << setiosflags(ios::fixed) << setprecision(2);
    cout << setfill('.');
    cout << "Lapis    " << setw(9) << " R$ " << setw(6) << 1.50 << endl;
    cout << "Caderno  " << setw(9) << " R$ " << setw(6) << 35.0 << endl;
    cout << "borracha " << setw(9) << " R$ " << setw(6) << 0.80 << endl;
    cout << "Caneta   " << setw(9) << " R$ " << setw(6) << 2.75 << endl;

    return 0;
}
