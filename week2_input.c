#include<stdio.h>
#include <stdlib.h>
char name[20];
char number[20];
int main() {
/*--- INPUT ---*/
    printf("Enter name : ");
    // gets(name);
    fgets(name, 20, stdin); //stdin รับอินพุตจากคีย์บอร์ด //fgets กำหนดได้ว่าจะรับ input จาก source ไหน
    // getchar(chr); //รับแค่ตัวเดียว บัฟเฟอร์ตัวเดียว
    printf("%s", name); //ถ้าเป็น bash จะทำทีละ channel คือรับ input มาก่อนถึงจะ print

    /*fgets(number, 5, stdin);
    int i = atoi(number);
    printf("number = %s, i = %d"); */

    /* fgets(number, 5, stdin);
    int i = atoi(number);
    puts(number);
    putchar(100);
    putchar('u');*/

    /*chr = getchar();
    getchar();
    chr1 = getchar();
    การรับ input ทีละตัวโดยใช้ getchar */
}


/*
--- เพิ่มเติม ค่าเสมือน boolean ในภาษาซี ---
    int found = 0;
    float isExist = 0.0;
    char isOnline = '\0';
    // 0 0.0 \0 เป็น false ทั้งหมดที่เหลือ True
    fgets(number, 5, stdin);
    int i = atoi(number);

    if (i > 0 && i <= 10)
    {
        printf("if = %d\n", i > 0 && i <= 10);
    }else if(i <=20 || !found){
        printf("else if\n");
    }else{
        printf("else\n");
    }
*/

