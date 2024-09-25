#include <stdio.h>

int main()
{	
    int Price;
    int Choose;

do{
puts("=================================");
puts("||    Welcome to WcDoland'c    ||");
puts("||      Choose Your Menu       ||");
puts("=================================");
puts("|| 1. Uduk Rice         ( 5000)||");
puts("|| 2. Chicken Wig Wig   (25000)||");
puts("|| 3. Cheese Burger     (30000)||");
puts("|| 4. Coza-Cola         (12000)||");
puts("|| 5. Chocolate Sundae  ( 8000)||");
puts("|| 0. Done                     ||");
puts("=================================");

printf("Input Your Menu:");
scanf("%d", &Choose);


if(Choose == 1)
{
 Price += 5000;
 printf("Price: 5000\n");
}
else if(Choose == 2)
{
 Price += 25000;
 printf("Price: 25000\n");
}
else if(Choose == 3)
{
 Price += 30000;
 printf("Price: 30000\n");
}
else if(Choose == 4)
{
 Price += 12000;
 printf("Price: 12000\n");
}
else if(Choose == 5)
{
 Price += 8000;
 printf("Price: 8000\n");
}
}

while(Choose != 0);
{
 printf("Your total Price is: %d\n", Price);
 printf("Thank You");
}
return 0;
}
