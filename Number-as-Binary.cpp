#include <iostream>
#include <ctime> 
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
    srand(time(NULL));
    int tmp;
    char* result = new char[11];

    for (int i = 0; i < 10; i++) {
        tmp = rand() % 513;
        NumberAsBinary(result, tmp);
        cout << tmp << " " << result << endl;
    }

    delete[] result;
    return 0;
}