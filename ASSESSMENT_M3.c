#include<stdio.h>
main()
 {
    int i, choice;
    int qn, more, price;
    int amount, total = 0;
    do
  {
        printf("\n\n\t1. Pizza               price = 180rs/pcs");
        printf("\n\n\t2. Burger              price = 100rs/pcs");
        printf("\n\n\t3. Dosa                price = 120rs/pcs");
        printf("\n\n\t4. Idli                price = 50rs/pcs");

        printf("\n\n\t Please Enter Your Choice : ");
        scanf("%d", &choice);

        switch (choice)
	 {
            case 1:
                printf("\n\n\t You Have Selected Pizza.");
                printf("\n\n\t Enter Quantity of Pizza : ");
                scanf("%d", &qn);
                price = 180;
                break;
            case 2:
                printf("\n\n\t You Have Selected Burger.");
                printf("\n\n\t Enter Quantity of Burger : ");
                scanf("%d", &qn);
                price = 100;
                break;
            case 3:
                printf("\n\n\t You Have Selected Dosa.");
                printf("\n\n\t Enter Quantity of Dosa : ");
                scanf("%d", &qn);
                price = 120;
                break;
            case 4:
                printf("\n\n\t You Have Selected Idli.");
                printf("\n\n\t Enter Quantity of Idli : ");
                scanf("%d", &qn);
                price = 50;
                break;
                
                                
      default:
               printf("\n\n\t Invalid Selection Please Select Right Option");
                
   }

        amount = price * qn;
        printf("\n\n\t Amount = %d", amount);
        total += amount;
        printf("\n\n\t Total Amount = %d", total);

        printf("\n\n\t Do you want to place more orders? %d (y/n) : ");
        scanf("%c", &more); 
    } 
	    while (more != 'n');
}



