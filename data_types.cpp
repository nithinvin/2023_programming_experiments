#include <iostream>
using namespace std;

int main() {

    char ch = 'h';
    char ch1 = '5';
    char ch2 = 53;
    bool b1 = false;

    cout << "Character = " << ch << endl;
    cout << "ASCII Value of Character = " << int(ch) << endl;

    cout << "Character = " << ch1 << endl;
    cout << "ASCII Value of Character = " << int(ch1) << endl;

    cout << "Character = " << ch2 << endl;
    cout << "ASCII Value of Character = " << int(ch2) << endl;

    cout << "Bool = " << b1 << endl;
    cout << "ASCII Value of bool = " << int(b1) << endl;
    cout << "sizeof bool = " << sizeof(b1) << endl;

    return 0;
}
