#include <iostream>
#include "sources.h"
//#include "sources_2.h"

using namespace std;

int main()
{
    char numbers[256];
    cout << "Please type numbers : ";
    cin.getline(numbers, 256);
    prime(numbers);
    return 0;
}
