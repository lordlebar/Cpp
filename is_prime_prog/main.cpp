#include <iostream>
#include "sources.h"
//#include "sources_2.h"

using namespace std;

int main()
{
    char numbers[256];
    cin.getline(numbers, 256);
    split(numbers);
    return 0;
}
