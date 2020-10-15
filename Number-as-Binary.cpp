#include <iostream>
using namespace std;

void NumberAsBinary(char* _result, unsigned int _number) {
    static unsigned int i;
    i = 0;
    if (_number / 2 != 0) NumberAsBinary(_result, _number / 2);
    _result[i] = _number % 2 == 0 ? '0' : '1';
    _result[++i] = '\0';
}

int main()
{
    cout << "Hello World!\n";
}