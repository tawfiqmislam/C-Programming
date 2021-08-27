void checkout(int isLogged) {
    int discount=0;//True/False
    double discountBill=0;
    double totalBill=0;
    char productID[10];
    int quantity;
    char items[100][10];
    int quantities[100];

    int product=0;
    while(1) {
        printf("Product ID : ");
        gets(productID);
        printf("Product Quantity : ");
        scanf("%d", &quantity);

        if(isProductExist(productID)) {
            if(isInStock(productID, quantity)) {
                totalBill+=(quantity*getPrice(productID));
                strcpy(items[product], productID);
                quantities[product]=quantity;
                product++;
                printf("Product added to cart.\n\n");
            } else {
                printf("Product is out of stock.\n\n");
            }
        } else {
            printf("Product does not exists.\n\n");
        }

        printf("Do you want to add more in your cart?\n");
        printf("1. Yes \t 2. No\n");
        int choice;
        scanf("%d", &choice);
        getchar();
        if(choice==1) {
            continue;
        } else {
            break;
        }
    }

    if(isLogged) {
        discount=1;
        discountBill=totalBill*.10;
    } else {
        printf("Do you have membership?\n");
        printf("1. Yes \t 2. No\n");
        int membership;
        scanf("%d", &membership);
        getchar();
        system("cls");
        if(membership==1) {
            printf("Login\n");
            printf("-----\n");
            char username[30], password[30];
            printf("Username : ");
            gets(username);
            printf("Password : ");
            gets(password);
            if(login(username, password)) {
                discount=1;
                discountBill=totalBill*.10;
            } else {
                discountBill=totalBill;
            }
        }
    }

    //Update Stock and Sale after selling
    int i;
    for(i=0;i<product;i++) {
        updateStockSale(items[i], quantities[i]);
    }

    system("cls");
    printf("Total Product : %d\n", product);
    printf("Total Bill    : %.2lf\n", totalBill);
    printf("-----------------------\n");
    if(discount) {
        printf("Discount 10%%\n");
    } else {
        printf("Discount 0%%\n");
    }
    printf("-----------------------\n");
    printf("Save          : %.2lf\n", discountBill);
    printf("-----------------------\n");
    printf("Final Bill is : %.2lf\n\n", totalBill-discountBill);
    printf("Thank You.\n\n\n");
    exit(1);
}
