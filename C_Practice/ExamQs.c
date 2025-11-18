#include <stdio.h>   
/*
//q1
int main() {
    int i = 0;
    int num = 0;

    do
    {
        i++;
        printf("i is %d\n", i);
        
    }
    while(i < 10); 
    
    return 0;
}  
*/
/*
//q2
int main()
{
    int num1 = 5;
    int num2 = 8;
    int num3, num4;

    num3 = ++num1;//num1 is now 6, and num3 is 6
    num4 = num2++ + --num3;//num3 is now 5, num4 is 8 + 5 = 13, num2 is now 9

    printf("num3 is %d and num4 is %d", num3, num4);
    
    return 0;
}
*/
/*
//q3
int main ()
{
    //to print a \ in a printf statement, use (\\)   
    printf("Place a (\\) before the character 'n' in a printf statement to print a new line.\n");
}
*/

//q4
int main(void)
{
    int my_array[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("%d\n", my_array[1][2]);
    return 0;   
}   