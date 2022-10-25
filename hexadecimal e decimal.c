/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

main()
{
    char c;

    do{

    int a,b;
    
    printf("Informe o primeiro numero: ");
    scanf("%d",&a);

    printf("Informe o segundo numero: ");
    scanf("%d",&b);
    

    printf("Hexadecimal A & B = %x\nDecimal     A & B = %d\n",a&b,a&b);
    printf("\n");
    printf("Hexadecimal A | B = %x\nDecimal     A | B = %d\n",a|b,a|b);
    printf("\n");
    printf("Hexadecimal A ^ B = %x\nDecimal     A ^ B = %d\n",a^b,a^b);
    
    do{
        printf("Quer continuar?\n(DIGITE S PARA SIM N PARA NAO)\n");
        c = getchar();
        c = tolower(c);
        printf("\n");
    }while((c!='s')&&(c!='n'));

    }while(c=='s');
}

