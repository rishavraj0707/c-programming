// // Factorial of a number using recursion

// #include<stdio.h>
// int rec(int);
// int main()
// {
//     int a,fact;
//     printf("Enter the number:");
//     scanf("%d",&a);
//     fact=rec(a);
//     printf("Factorial =%d ",fact);
//     return 0;
// }

// int rec(int x)
// {
//     int f;
//     if(f==0||f==1)
//         return (1);
//     else
//         f=rec *rec(x-1);
//     return (f);
// }

#include<stdio.h>
int rec(int );
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, rec(n));
    return 0;
}
int rec(int f) {
    if (f>=1)
        return f*rec(f-1);
    else
        return 1;
}
