#include <stdio.h>
//การ pass be ref ต้องรับด้วย pointer
int addTen(int *numbers, int n)
{
    for (int i = 0; i < n; i++){
        printf("[%p] = %d\n", numbers + i, *(numbers + i));
        *(numbers + i) += 10; //+10 every elements in list
    }
    return 1;
}
void addTwenty(int *n) //รับ pointer เป็น pass by ref 
{
    *n += 20;
}
 int main()
 {
     int numbers[] = {4, 5, 6, 7, 8};
     int n = 5;
     addTen(numbers, n);
     //ส่งด้วย address รับด้วย pointer
     for (int i = 0; i < n; i++){
        printf("[%p] = %d\n", numbers + i, *(numbers + i));
     }
     addTwenty(&n);
     printf("n = %d\n", n);
 }