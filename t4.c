#include <stdio.h>

int main(){
    const int var=20;
    printf("Initial value of constant : %d\n",var);

    int *ptr=&var;
    *ptr =500;
    printf("Final value of constant: %d",var);
    return 0;
}