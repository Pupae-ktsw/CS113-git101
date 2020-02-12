#include <stdio.h>
#include <stdlib.h>
/*--- pointer ---*/
int main()
{
    int x = 100;
    // int a = 0144;
    int b = 0x64;
    int number[] = {3, 4, 5, 6, 7}; // ตำแหน่งคือ 00 04 08 12 16
    int *ptr = &x; // * เอาค่าที่อยู่ใน address มาโชว์
    int *arrPtr; // ประกาศก่อน assign address ที่หลัง (ไม่มีดอกจัน) ดูบรรทัดต่อไป
    arrPtr = number;
    arrPtr = number;
    arrPtr += 2;
    *arrPtr = *arrPtr + 10; // เอาค่าที่อยู่ใน address คือ 5 พอ+10 จะเท่ากับ 15
    printf("arrptr = %p, *arrPtr = %d", arrPtr, *arrPtr);
    printf("number[2] = %d\n", number[2]);
    //int number[] = {3, 4, 5, 6, 7};
    for (int *ptr = number; ptr <= &number[4]; ptr++){
        printf("[%p] = %d\n", ptr, *ptr);
    }
    int *ptr2 = number;
    for (int i = 0; i < 5; i++){
        printf("[%p] = %d\n", ptr2 + i, *(ptr2 + i)); // บวก pointer ก่อน ค่อย* deferencing
    }

    /* วนลูปรับค่า ปริ้นทีละตัว */
    char input[100];
    int count = 0;
    char c;
    while ( (c = getchar()) != '\n' ){
        input[count] = c;
        ++count;
    }
    input[count] = '\0'; // ถ้าวนลูปต้องปิดเอง
    for (char *cPtr = input ;*cPtr != '\0'; cPtr++){
        printf("%c\n", *cPtr);
    }
    //char c;
    int i;
    char s[100];
    scanf("%d-%c-%s", &i, &c, s); //พิมตาม format เป๊ะๆ
    printf("%d  %c  %s", i, c, s);
}
/* --- ARRAY --- 
#include <stdio.h>
#include <stdlib.h>
//array ก็เหมือน pointer
int main()
{
    // int x = 100;
    // int a = 0144;
    // int b = 0x64;
    // printf("x = %d\n", x);
    // printf("reference x = %lu\n", &x); //&x ดึงค่า reference ของ x ออกมาดู
    // printf("reference x = %p", &x);
    
    int number[] = {3, 4, 5, 6, 7};
    // int number[100];
    // int number[100] = {3, 4, 5, 6, 7}; //ขนาด 100 แต่กำหนดแค่ 5 ตัวแรก
    number[2000] = 2000;
    printf("index 1 = %d\n", number[2000]);
    printf("reference number[1] = %p\n", &number[2000]);
    // printf("reference number[0] = %p\n", &number[0]);
    // printf("reference number = %p\n", number+1); //ตัวแปร pointer เก็บ address
}
*/