/*
    Q1, Q2, Q3, Q5 (see below). Write very small programs for each of these questions.
    Compile (if possible, correct them if not) and run them. See the output of the program.

    Nadyla da Cunha Barbosa

    --/--/----
*/

#include <stdio.h>
#include <string.h>

// Q1
/*int main()
{
    // a
    printf("%5s", "abcd");
    printf("\n");

    // b
    printf("%5s", "abcdef");
    printf("\n");

    // c
    printf("%-5s", "abc");
    printf("\n");

    // d
    printf("%5.2s", "abcde");
    printf("\n");

    // e
    printf("%-5.2s", "abcde");
    printf("\n");

    return 0;
} */

// Q2 -> what's wrong with the following statements?
/*int main()
{
    char name[] = {'R','o','b','e','r','t'};

    // a -> it expects a NULL terminated-string (\0)
    puts(name);

    // b -> 1. wrong argument (&) because name is already a pointer
    // 2. expects a NULL terminated string buffer (may overflow the array)
    scanf("%s", &name);

    // c -> Philip needs SEVEN characters including NULL terminator (array only has SIX spaces)
    strcpy(name, "Philip");

    // d -> "a" is a STRING LITERAL (char *), NOT a character
    *(name + 5) = "a";

    // e -> arrays CANNOT BE ASSIGNED TO after declaration (name is a fixed memory block)
    // must copy instead
    name = "Philip";

    return 0;
}*/

// Q3 -> what is the output for each of these?
/*int main()
{   
    char *text = "some text";

    // a
    printf("%s\n", text);
    // some text

    // b
    printf("%c\n", *text);
    // s

    // c
    printf("%c\n", *"more text");
    // m

    // d
    printf("%c\n", *(text + 1));
    // o

    // e
    printf("%s\n", text + 1);
    // ome text

    // f
    printf(text);
    // segmentation fault (core dumped)

    // g
    *(text + 4) = '\0';
    printf("\n%s\n", text);

    // h
    printf("%c\n", "text"[2]); 
    // x
    
    // i
    printf("%s", "text" + 2);
    // xt

    return 0;
} */

// Q5
/*int main()
{
    // a
    char *p = "abcd";
    while (*p)
    {
        putchar(*p++);
    }

    // b
    char *text = "abcd";
    char *p = text;
    p += strlen(p) - 1;
    while(text <= p)
    {
        puts(p--);
    }

    return 0;
} */
