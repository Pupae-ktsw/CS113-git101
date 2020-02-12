#include<stdio.h>
#include <stdlib.h>
//char name[20];
char number[20];
int main() {
    fgets(number, 5, stdin);
    int i = atoi(number);
    /* LOOP WHILE (เหมาะกับ infinity loop)
        int count = 0;
    while (count < i){
        printf("count = %d\n", count);
        count++;
    } while (1) infinity loop*/
    // FOR LOOP ไม่ควรทำ infinite loop
    for (int j = 0; j < i; j++){ // replace j++ with j = 10 //or replace j < i with 1 , loop will be always true and it will be infinity loop
        printf("j = %d\n", j);
    }
}