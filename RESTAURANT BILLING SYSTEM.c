#include<stdio.h>
#include<stdlib.h>

void displayMenu()
{
//Del Plato -  (in a restaurant) referring to food that can be ordered as set meal(Platter).
//A La Carte - (in a restaurant) referring to food that can be ordered as separate items, rather than part of a set meal.

    printf("\n1) Del Plato\n2) A La Carte\n");

    int choice2;
    scanf("%d", &choice2);
    if (choice2 == 1)
    {
        printf("\n1) Breakfast\n2) Lunch & Dinner\n");

        int choice3;
        scanf("%d", &choice3);

        if(choice3 == 1)
        {
            printf("\n===BREAKFAST===\n");
            printf("_________________\n");
            printf("1. English Breakfast......................Tk. 320/- (BDT) [Two Eggs any style with 2 Beef or Chicken Sausages, Hash Brown Potatoes or Baked Beans, 2 Toast, Butter, jam or marmalade Coffee or Tea.]\n\n"

                   "2. Continental Menu.......................Tk. 300/- (BDT) [Juice, Bread Basket with a selection of six breads served with butter and jam, Coffee or Tea.]\n\n"

                   "3. Bangladeshi Menu.......................Tk. 200/- (BDT) [Parata or Chapatti served with Mixed Vegetable or Aloo Dum, 1 Egg, Sujir Halwa, Coffee or Tea.]\n\n"

                   "4. Cereal Menu............................Tk. 120/- (BDT) [Cold cereal with Milk.]\n\n"

                   "5. French Toast Menu......................Tk. 150/- (BDT) [4 French Toast served with onion and tomato or syrup.]\n");


            printf("\n\n===ADD ONS===\n");
            printf("_________________\n");
            printf("101. Two Fresh Eggs any style.............Tk. 70/- (BDT)\n"
                   "102. Sausage..............................Tk. 65/- (BDT)\n"
                   "103. French Fries.........................Tk. 50/- (BDT)\n"
                   "104. Toast- 2 Slices......................Tk. 40/- (BDT)\n"
                   "105. Parata- 2 Pcs........................Tk. 60/- (BDT)\n"
                   "106. Chapatti- 2 pcs......................Tk. 40/- (BDT)\n"
                   "107. Bhaji................................Tk. 50/- (BDT)\n"
                   "108. Aloo dum.............................Tk. 50/- (BDT)\n"
                   "109. Sujir Halwa..........................Tk. 50/- (BDT)\n"
                   "110. Bread Basket- 6 Rolls of Bread.......Tk. 125/- (BDT)\n\n"

                   "201. Variety of Juice.....................Tk. 75/- (BDT)\n"
                   "202. Coffee...............................Tk. 30/- (BDT)\n"
                   "203. Tea..................................Tk. 20/- (BDT)\n"
                   "204. Hot Chocolate........................Tk. 50/- (BDT)\n"
                   "205. Milk.................................Tk. 50/- (BDT)\n");
        }
        else if(choice3 == 2)
        {
            printf("\n===LUNCH & DINNER===\n");
            printf("______________________\n");
            printf("1001. Ghorer Khabar................Tk. 425/- (BDT) [Fine Quality Steamed Rice (Katari bhog/Nazirshal), served with Thick Daal, Mixed Vegetable Bhaji and choice of Chicken (Local) or Beef Bhuna.]\n\n"

                   "1002. Bhorta Bahar.................Tk. 400/- (BDT) [Fine Quality Steamed Rice(Katari bhog/Nazirshal), served with Thick Daal and your choice of five Bhrota. Choose any five-Begun Bhorta, Aloo Bhorta, Daal Bhorta, \nEgg Bhorta, Chingri Bhorta, Shutki Bhorta, Mach Bhorta, Sheem Bhorta, Barbati Bhorta, Patal Bhorta, Tomato Bhorta.]\n\n"

                   "1003. Mach a Bhat a................Tk. 400/- (BDT) [Fine Quality Steamed Rice (Katari bhog/Nazirshal), served with Thick Daal, Mixed Vegetable Bhaji and choice of Rui/Katal/ Illish Bhaji or Bhuna.]\n\n"

                   "1004. Luchi Kabab..................Tk. 450/- (BDT) [Luchi/Parata, Aloo Dum/ Daal Bhuna, served with Special Haadi Kabab and Onion Salad. This Delicios meal also includes Gajorer/Sujir Halwa.]\n\n"

                   "1005. Khichuri Khazana.............Tk. 625/- (BDT) [Moog Daal er Bhuna Khichuri, Served with Begun Bhaja(Fried Brinjal), Mach Bhaja(Fish Fry), Egg Masala Omlette /Egg Bhuna and choice of Chicken(Local) or Beef Bhuna. \nThis Menu comes with Salad, Caramal Pudding/ Roshogolla and Tea/Coffee.]\n\n"

                   "1006. Pulao Korma/Roast............Tk. 600/- (BDT) [Best Quality Kalijeera Rice Pulao served with Chicken Korma / Roast, Rui Bhaja, Mixed Vegetable.This Menu comes with Salad, Caramal Pudding/ Roshogolla and Tea/Coffee.]\n\n"

                   "1007. Pulao Gosht..................Tk. 600/- (BDT) [Best Quality Kalijeera Rice Pulao served with Beef Bhuna / Jhal Gosht , Rui Bhaja, Mixed Vegetable.This Menu comes with Salad, Caramal Pudding/ Roshogolla and Tea/Coffee.]\n\n"

                   "1008. Morogh Pulao.................Tk. 600/- (BDT) [Best Quality Kalijeera Rice Pulao cooked with local chicken served with Shammi Kabab Mixed Vegetable.This Menu comes with Salad, Caramal Pudding/ Roshogolla and Tea/Coffee.]\n\n"

                   "1009. Beef Tehari..................Tk. 600/- (BDT) [Best Quality Kalijeera Rice Beef Tehari served with Aloo Keema Chop, Mixed Vegetable. This Menu comes with Salad, Caramal Pudding/ Roshogolla and Tea/Coffee.]\n\n"

                   "1010. Pulao Mutton Rezala..........Tk. 750/- (BDT) [Best Quality Kalijeera Rice Pulao served with Mutton Rezala, Shammi Kabab, Mixed Vegetable.This Menu comes with Salad, Caramal Pudding/ Roshogolla and Tea/Coffee.]\n\n"

                   "1011. Kids Menu....................Tk. 350/- (BDT) [Kid’s portion of Plain Pulao, chicken korma, Beef Chop served with French Fries. This Menu comes with vanilla ice cream.]\n\n"

                   "1012. BBQ Night....................Tk. 750/- (BDT) [Luchi/Parata, Butter Chicken served with BBQ Chichen Tandoori/Beef Shikh Kababa fresh from barbeque. This menu comes with salad, Firni /Gurer Payesh and your choice of Canned Beverage.]\n");


            printf("\n\n===ADD ONS===\n");
            printf("_________________\n");
            printf("2001. Chapati......................Tk. 25/- (BDT)\n"
                   "2002. Shami Kabab..................Tk. 60/- (BDT)\n"
                   "2003. Aloor Chop...................Tk. 50/- (BDT)\n"
                   "2004. Chicken bhuna................Tk. 125/- (BDT)\n"
                   "2005. Beef bhuna...................Tk. 125/- (BDT)\n"
                   "2006. Egg Curry....................Tk. 55/- (BDT)\n"
                   "2007. Egg Daal Curry...............Tk. 70/- (BDT)\n"
                   "2008. Shutki.......................Tk. 55/- (BDT)\n"
                   "2009. Balachao.....................Tk. 50/- (BDT)\n"
                   "2010. Mixed Pickle.................Tk. 50/- (BDT)\n"
                   "2011. Chutney of the season........Tk. 50/- (BDT)\n"

                   "3001. Tea..........................Tk. 20/- (BDT)\n"
                   "3002. Coffee.......................Tk. 30/- (BDT)\n"
                   "3003. Soft Drinks – Litre Bottle...Tk. 120/- (BDT)\n"
                   "3004. Soft Drinks – 250 ml can.....Tk. 45/- (BDT)\n");
        }

    }
    else if(choice2 == 2)
    {
        printf("\n===BREAKFAST===\n");
        printf("_________________\n");
        printf("101. Two Fresh Eggs any style.......................Tk. 70/- (BDT)\n"
               "102. Sausage........................................Tk. 65/- (BDT)\n"
               "103. French Fries...................................Tk. 50/- (BDT)\n"
               "104. Toast- 2 Slices................................Tk. 40/- (BDT)\n"
               "105. Parata- 2 Pcs..................................Tk. 60/- (BDT)\n"
               "106. Chapatti- 2 pcs................................Tk. 40/- (BDT)\n"
               "107. Bhaji..........................................Tk. 50/- (BDT)\n"
               "108. Aloo dum.......................................Tk. 50/- (BDT)\n"
               "109. Sujir Halwa....................................Tk. 50/- (BDT)\n"
               "110. Bread Basket- 6 Rolls of Bread.................Tk. 125/- (BDT)\n\n"

               "201. Variety of Juice...............................Tk. 75/- (BDT)\n"
               "202. Coffee.........................................Tk. 30/- (BDT)\n"
               "203. Tea............................................Tk. 20/- (BDT)\n"
               "204. Hot Chocolate..................................Tk. 50/- (BDT)\n"
               "205. Milk...........................................Tk. 50/- (BDT)\n");

        printf("\n\n===SNACKS AND QUICK BITES (SERVED WITH TOMATO KETCHUP/CHUTNEY)===\n");
        printf("_____________________________________________________________________\n");
        printf("501. Kids Special Noodles...........................Tk. 50/- (BDT)\n"
               "502. Beef Samosa 2 Pcs..............................Tk. 40/- (BDT)\n"
               "503. Spring roll 2 Pcs..............................Tk. 50/- (BDT)\n"
               "504. Butterfly Prawn 4 Pcs with dip.................Tk. 75/- (BDT)\n"
               "505. Vegetable Singara 2 Pcs........................Tk. 60/- (BDT)\n"
               "506. Kabab Roll with choice of beef or chicken......Tk. 75/- (BDT)\n"
               "507. Chicken Nugget 6 Pcs...........................Tk. 150/- (BDT)\n"
               "508. Chen Kiev 6 Pcs................................Tk. 150/- (BDT)\n"
               "509. Fish Finger 6 Pcs..............................Tk. 150/- (BDT)\n"
               "510. French Fries...................................Tk. 50/- (BDT)\n"
               "511. Chicken Cutlet 2 Pcs...........................Tk. 100/- (BDT)\n"
               "512. Beef Cutlet 2 Pcs..............................Tk. 100/- (BDT)\n"
               "513. Prawn on Toast 2 Pcs...........................Tk. 100/- (BDT)\n"
               "514. Mini Chicken Shashlic 2 Pcs....................Tk. 100/- (BDT)\n"
               "515. Jhal muri / Chanachur 3 Persons................Tk. 100/- (BDT)\n"
               "516. French Toast 2 Pcs.............................Tk. 80/- (BDT)\n"
               "517. Keema Chop 2 Pcs...............................Tk. 60/- (BDT)\n"
               "518. Shammi Kabab 2 Pcs.............................Tk. 100/- (BDT)\n"
               "519. Pantarash 2 Pcs................................Tk. 100/- (BDT)\n"
               "520. Fish Finger....................................Tk. 120/- (BDT) (Served with French Fries and Mayonnaise)\n"
               "521. Bhaja Pora.....................................Tk. 160/- (BDT) (Vegetable pakora /beguni /peyaju 16 Pcs)\n"
               "522. Cheese Singara Platter 10 Pcs..................Tk. 120/- (BDT)\n");

        printf("\n\n===DINNER & LUNCH===\n");
        printf("________________________\n");
        printf("601. BBQ Chicken 1 Pc...............................Tk. 125/- (BDT)\n"
               "602. Beef Sheek Kabab 1 Pc..........................Tk. 150/- (BDT)\n"
               "603. Bangladeshi Delicacies(Serves 3 /4 Persons)....Tk. 250/- (BDT)\n"
               "604. Chicken Bhuna..................................Tk. 500/- (BDT)\n"
               "605. Chicken Korma..................................Tk. 500/- (BDT)\n"
               "606. Chicken Do Piaza...............................Tk. 500/- (BDT)\n"
               "607. Chicken Rezala.................................Tk. 500/- (BDT)\n"
               "608. Butter Chicken.................................Tk. 500/- (BDT)\n"
               "609. Shorshe Chicken................................Tk. 500/- (BDT)\n"
               "610. Chicken Jhal Frazee............................Tk. 500/- (BDT)\n"
               "611. Beef Curry.....................................Tk. 525/- (BDT)\n"
               "612. Beef Bhuna.....................................Tk. 525/- (BDT)\n"
               "613. Beef Rezala....................................Tk. 525/- (BDT)\n"
               "614. Beef Korma.....................................Tk. 525/- (BDT)\n"
               "615. Beef Do Piaza..................................Tk. 525/- (BDT)\n"
               "616. Handi Kabab....................................Tk. 525/- (BDT)\n"
               "617. Acchar Beef....................................Tk. 525/- (BDT)\n"
               "618. Shammi Kabab 4 Pcs.............................Tk. 200/- (BDT)\n"
               "619. Beef Jalli Kabab 4 pcs.........................Tk. 200/- (BDT)\n"
               "620. Mutton Rezala..................................Tk. 600/- (BDT)\n"
               "621. Fish Curry 4pcs................................Tk. 450/- (BDT)\n"
               "622. Fish Do Piaza..................................Tk. 450/- (BDT)\n"
               "623. Fish Jhol Torkari..............................Tk. 450/- (BDT)\n"
               "624. Fish Bhuna.....................................Tk. 450/- (BDT)\n"
               "625. Prawn Do piazza................................Tk. 675/- (BDT)\n"
               "626. Chingri Macher Malaikari.......................Tk. 675/- (BDT)\n"
               "627. Prawn Bhuna....................................Tk. 675/- (BDT)\n"
               "628. Bhorta.........................................Tk. 150/- (BDT)(Choose any – Begun Bhorta, Alu Bhorta, Daal Bhorta, Egg Bhorta, Chingri Bhorta, Shutki Bhorta, Mach Bhorta, Sheem Bhorta, Barbati Bhorta, Patal Bhorta, Tomato Bhorta)\n"
               "629. Mixed Vegetable................................Tk. 150/- (BDT)\n"
               "630. Seasonal Vegetable Curry.......................Tk. 150/- (BDT)\n"
               "631. Chinese Style Vegetable........................Tk. 150/- (BDT)\n"
               "632. Daal...........................................Tk. 150/- (BDT)\n"
               "633. Daal Chorchori.................................Tk. 150/- (BDT)\n"
               "634. Seasonal Salad.................................Tk. 150/- (BDT)\n"
               "635. Rice One Person................................Tk. 60/- (BDT)\n");

        printf("\n\n===DESSERT===\n");
        printf("__________________\n");
        printf("701. Firni..........................................Tk. 50/- (BDT)\n"
               "702. Gurer Payesh...................................Tk. 60/- (BDT)\n"
               "703. Brownie........................................Tk. 85/- (BDT)\n"
               "704. Caramel Pudding (serves 6).....................Tk. 450/- (BDT)\n"
               "705. Caramel Pudding (serves 12)....................Tk. 875/- (BDT)\n");

        printf("\n\n===BEVERAGE===\n");
        printf("__________________\n");
        printf("751. Tea............................................Tk. 20/- (BDT)\n"
               "752. Coffee.........................................Tk. 30/- (BDT)\n"
               "753. Soft Drinks – Litre Bottle.....................Tk. 120/- (BDT)\n"
               "754. Soft Drinks – 250 ml can.......................Tk. 45/- (BDT)\n"
               "755. Bottled Mineral Water..........................Tk. 40/- (BDT)\n");

        printf("\n\n===SANDWICH (SERVED WITH POTATO CHIPS)===\n");
        printf("_____________________________________________\n");
        printf("651. Homemade Chicken Sandwich 2 pcs................Tk. 80/- (BDT)\n"
               "652. Club Sandwich with Chicken & Vegetable.........Tk. 200/- (BDT)\n");

        printf("\n\n===PIZZAS===\n");
        printf("________________\n");
        printf("551. Chef’s special Beef Pizza......................Tk. 525/- (BDT)\n"
               "552. Chef’s Special Chicken Pizza...................Tk. 525/- (BDT)\n"
               "553. Chef’s Special Shrimp Pizza....................Tk. 525/- (BDT)\n");

        printf("\n\n===PASTA===\n");
        printf("_______________\n");
        printf("801. Special Chicken Pasta..........................Tk. 395/- (BDT)\n"
               "802. Special Beef pasta.............................Tk. 450/- (BDT)\n");

        printf("\n\n===SOUPS===\n");
        printf("_______________\n");
        printf("851. Chicken Corn Soup..............................Tk. 85/- (BDT)\n"
               "852. Thai Soup......................................Tk. 100/- (BDT)\n"
               "853. Chicken/ Beef Noodle Soup......................Tk. 50/- (BDT)\n");

        printf("\n\n===SALADS===\n");
        printf("________________\n");
        printf("901. Chef’s Special Vegetable Salad.................Tk. 50/- (BDT)\n"
               "902. Raita- Cucumber Salad..........................Tk. 50/- (BDT)\n"
               "903. Caesar Salad...................................Tk. 55/- (BDT)\n");
    }
}


struct Item
{
    int number;
    double price;
    int quantity;
    struct Item* next;
};
struct Item *front;
struct Item *rear;


void orderFoodItem()
{
    struct Item *newItem;
    int number;
    double price;
    int quantity;

    newItem = (struct Item *) malloc (sizeof(struct Item));
    if(newItem == NULL)
    {
        return;
    }
    else
    {
        printf("\nEnter item number: ");
        scanf("%d", &number);

        printf("Enter item price: ");
        scanf("%lf", &price);

        printf("Enter item quantity: ");
        scanf("%d", &quantity);

        newItem->number = number;
        newItem->price = price;
        newItem->quantity = quantity;

        if(front == NULL)
        {
            front = newItem;
            rear = newItem;
            front -> next = NULL;
            rear -> next = NULL;
        }
        else
        {
            rear -> next = newItem;
            rear = newItem;
            rear->next = NULL;
        }
    }
    printf("Item added to order.\n");

    printf("\nDo you want to Order anything else?\n1.YES\n2.NO\n");
    int choice;
    scanf("%d", &choice);
    if(choice == 1)
    {
        orderFoodItem();
    }
    else
    {
        return;
    }
}


void displayOrderItems()
{
    int i=0;
    struct Item *temp;
    temp = front;
    if(front == NULL)
    {
        printf("\nThere is no Order.\n");
    }
    else
    {
        printf("\n\nItems in the order:\n");
        while(temp != NULL)
        {
            printf("%d. %d................Tk. %.2lf/- (BDT) x %d\n", ++i, temp->number, temp->price, temp->quantity);
            temp = temp -> next;
        }
    }
}


void cancelFoodItem()
{
    int tNumber;
    printf("\nEnter the food item number to remove: ");
    scanf("%d", &tNumber);

    struct Item* current = front;
    struct Item* prev = NULL;

    while (current != NULL && current->number != tNumber)
    {
        prev = current;
        current = current->next;
    }

    if (current == NULL)
    {
        printf("Item not found in the order.\n");
        return;
    }

    if (prev == NULL)
    {
        front = current->next;
    }
    else
    {
        prev->next = current->next;
    }

    if (current->next == NULL)
    {
        rear = prev;
    }

    free(current);
    printf("Item with number %d deleted from the order.\n", tNumber);
    printf("\nNew Order List:\n");
    displayOrderItems();
}


double calculateTotal()
{
    double total = 0.0;

    struct Item* current = front;
    while (current != NULL)
    {
        total += (current->price * current->quantity);
        current = current->next;
    }

    return total;
}


double calculateVat()
{
    return 0.09 * calculateTotal();
}


void generateReceipt()
{
    if (front == NULL)
    {
        printf("No items in the order.\n");
        return;
    }

    printf("\n===RECEIPT===\n");
    printf("==============\n");
    displayOrderItems();
    printf("\n--------------------------------------------\n");
    printf("NET TOTAL:..........Tk. %.2f/- (BDT)\n", calculateTotal());
    printf("VAT @9%%:............Tk. %.2f/- (BDT)\n", calculateVat());
    printf("\n--------------------------------------------\n");
    printf("GRAND TOTAL:........Tk. %.2f/- (BDT)\n", calculateTotal() + calculateVat());
    printf("--------------------------------------------\n");

    front = NULL;
}


int main()
{
    printf("==========WELCOME TO \"FOODIES' STATION\"==========\n");
    printf("=================================================\n");
    int exit = 0;
    while (!exit)
    {
        printf("\n\n----PLEASE SELECT YOUR CHOICE----\n");
        printf("1) Display Menu\n");
        printf("2) Order Food Item\n");
        printf("3) Cancel Food Item\n");
        printf("4) Display Order Items\n");
        printf("5) Generate Receipt\n");
        printf("6) Exit\n");

        int choice1;
        scanf("%d", &choice1);
        switch (choice1)
        {
        case 1:
            displayMenu();
            break;
        case 2:
            orderFoodItem();
            break;
        case 3:
            cancelFoodItem();
            break;
        case 4:
            displayOrderItems();
            break;
        case 5:
            generateReceipt();
            break;
        case 6:
            exit = 1;
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
