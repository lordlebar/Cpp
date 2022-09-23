#include "sources.h"

char numbers;
void prime(char numbers[]){
    char *number = strtok(numbers, " ");


    while (number != NULL)
    {
        int num = atoi(number);
        int r = 0;
        if (num == 1)
            cout << num << "False" << endl;

        for (int y = 1; y <= num; y++){
            if(num % y == 0){
                r++;
            }
        }

        if(r > 2)
            cout << num << "False" << endl;
   
        else
            cout << num << "True" << endl;

        number = strtok(NULL, " ");
    }
}
