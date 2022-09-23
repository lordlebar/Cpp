#include "sources.h"

void split(char numbers[]){
    char *number = strtok(numbers, " ");

     while (number != NULL)
    {
        cout << number << " is a prime: " << (prime(number) ? "True" : "False") << endl;
        number = strtok(NULL, " ");
    }
}

bool prime(char *number){

        int num = atoi(number);
        int r = 0;
        if (num == 1)
            return false;

        for (int y = 1; y <= num; y++){
            if(num % y == 0){
                r++;
            }
        }

        if(r > 2)
            return false;
   
        else
            return true;
}
