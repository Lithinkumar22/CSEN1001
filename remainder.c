# include <stdio.h>
int main() {
    int number, divisor;
    
    printf("Enter an integer : ");
    scanf("%d", &number);

    printf("Enter divisor : ");
    scanf("%d", &divisor);

    printf("Reminder = %d\n", number - divisor * (number/divisor));
    
    return 0;
}