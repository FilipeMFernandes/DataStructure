/*At time t = 0, a bacterial culture contains 8 × 10^6
individuals. At time t = i
(where i is a positive integer that expresses the number of hours), the number of individuals 
in the culture and double the number of individuals in the previous instant minus 7 × 10^3.
Write two algorithms, one recursive and one non-recursive, that calculate the number of individuals
present in culture at time i. Calculate the complexities of the algorithms.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculateBacteria(int i){
    if(i == 0){
        return 8 *pow(10, 6);
    }else{
        return calculateBacteria(i-1)*2 - 7 * pow(10, 3);
    }
}

int main(){
    printf("%d \n", calculateBacteria(0));
    printf("%d \n", calculateBacteria(1));
    printf("%d \n", calculateBacteria(2));
    printf("%d \n", calculateBacteria(3));
    printf("%d \n", calculateBacteria(4));
}
