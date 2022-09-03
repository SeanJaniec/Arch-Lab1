#include <stdio.h>
#include <stdbool.h>

bool IsPowerful(int num){

    int primeNumbers[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    
    int primeFactors[] = {};

    int index = 0;

    for ( int i = 0; i < sizeof(primeNumbers); i++)
    {
        if(num % primeNumbers[i] == 0)
        {
            primeFactors[num] = primeNumbers[i];

            index++;
            
        }
        
    }

    for ( int i = 0; i < sizeof(primeFactors); i++)
    {
        if ( num % (primeFactors[i] * primeFactors[i]) == 0)
        {
            return true;
        }
        
    }

    return false;
    


}


int main(){



    IsPowerful(64);
    
    

    return 0;
}