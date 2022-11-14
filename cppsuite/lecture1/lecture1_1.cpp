#include <iostream>
#include "limits.h"

using namespace std;

template<typename T>
void showMinMax() {
    if (T == 'char') {
        cout << "min: " << int(numeric_limits<T>::min()) << endl;
        cout << "max: " << int(numeric_limits<T>::max()) << endl;
    }
    else
    {
        cout << "min: " << numeric_limits<T>::min() << endl;
        cout << "max: " << numeric_limits<T>::max() << endl;
    }
    cout << endl;
}

void main() {

    setlocale(LC_ALL, "Rus");

    cout << "char (signed):" << endl;
    showMinMax<char>();
    cout << "unsigned char:" << endl;
    showMinMax<unsigned char>();

    cout << "int (signed):" << endl;
    showMinMax<int>();
    cout << "int (unsigned):" << endl;
    showMinMax<unsigned int>();

    /*
signed char
signed char	at least
8	8	8	8	8
unsigned char
unsigned char
short
short int	at least
16	16	16	16	16
short int
signed short
signed short int
unsigned short
unsigned short int
unsigned short int
int
int	at least
16	16	32	32	32
signed
signed int
unsigned
unsigned int
unsigned int
long
long int	at least
32	32	32	32	64
long int
signed long
signed long int
unsigned long
unsigned long int
unsigned long int
long long
long long int
(C++11)	at least
64	64	64	64	64
long long int
signed long long
signed long long int
unsigned long long
unsigned long long int
(C++11)
unsigned long long int
    */
}