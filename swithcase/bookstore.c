#include <stdio.h>
//int bookstore1()
int main()
{
 int choice;
 int cart[3] = {0};
 int totalPrice = 0;
 printf("Welcome to the Bookstore!\n");

 do{
     printf("1. Harry Potter            10$\n");
     printf("2. Lord of the Rings       12$\n");
     printf("3. To kill a Mockingbird   08$\n");
     printf("4. Checkout\n");

     printf("Enter your choice (1-4): ");
     scanf("%d", &choice);
     switch (choice){
         case 1:
             cart[0]++;
             totalPrice += 10;
             printf("Added Harry Potter to your cart.\n");
             break;
         case 2:
             cart[1]++;
             totalPrice += 12;
             printf("Added Lord of the Rings to your cart.\n");
             break;
         case 3:
             cart[2]++;
             totalPrice += 8;
             printf("Added To Kill a Mockingbird to your cart.\n");
             break;
         case 4:
             printf("Thank you for shopping at the Bookstore!\n");
             printf("You bought %d Harry Potter %d Lord of the Rings %d To kill a Mockingbird ", cart[0], cart[1], cart[2]);
             printf("Total Price: $%d\n", totalPrice);
             break;
         default:
             printf("Invalid choice.\n");
             break;
     }
 } while (choice != 4);
         return 0;

}
