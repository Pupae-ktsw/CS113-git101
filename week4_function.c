#include <stdio.h>
#include <stdlib.h>
int addTen(int x) //method signature, function prototype
{
    x = x+10;
    return x;
}
int addTwenty(); //เหมือนการประกาศตัวแปร , common use
int x = 1000;
int main ()
{
    int x = 50;
    int y = addTen(x);
    printf("x in main = %d\n", x);
    printf("addTen in main = %d\n", y);
    printf("addTwenty in main = %d\n", addTwenty());
    printf("x in main = %d\n", x);
}
int addTwenty(){
    printf("x in addTwenty = %d\n", x);
    x = x + 20;
    return x;
}
/*
--- recursive ---
int x = 100;
int fac(int i)
{
    if (i==0){
        return 1;
    }
    return i*fac(i-1);
}
int main()
{
    int d = fac(5);
    printf("%d", d);
}
*/
