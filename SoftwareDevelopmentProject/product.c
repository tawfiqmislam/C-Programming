//Check Product
int isProductExist(char productID[]) {
    int ret=0;
    char id[10];
    int stock;
    FILE *chk;
    chk = fopen("productDB.txt", "r");
    while(fscanf(chk, "%s %*s %*lf %d %*d", id, &stock)!=EOF) {
        if((strcmp(productID, id)==0)) {
            ret=1;
            break;
        }
    }
    fclose(chk);
    return ret;
}

//Check Stock
int isInStock(char productID[], int quantity) {
    int ret=0;
    char id[10];
    int stock;
    FILE *chk;
    chk = fopen("productDB.txt", "r");
    while(fscanf(chk, "%s %*s %*lf %d %*d", id, &stock)!=EOF) {
        if((strcmp(productID, id)==0)) {
            if(stock) {
                if(quantity>0 && quantity<=stock) {
                    ret=1;
                }
            } else {
                ret=0;
            }
            break;
        }
    }
    fclose(chk);
    return ret;
}

//Add Product
int addProduct() {
    int ret=0;
    char productID[10], productName[30];
    double productPrice;
    int productStock, sales=0;

    printf("Product ID : ");
    gets(productID);
    while(isProductExist(productID)) {
        printf("Product already exist.\n");
        printf("Try another ID : ");
        gets(productID);
    }
    printf("Product Name : ");
    gets(productName);
    strlwr(productName);
    printf("Product Price : ");
    scanf("%lf", &productPrice);
    getchar();
    printf("Product Add : ");
    scanf("%d", &productStock);
    //productstock+=getStock();
    getchar();


    FILE *add;
    add = fopen("productDB.txt", "a");
    if(fprintf(add, "%-15s %-20s %-20.2lf %-10d %-10d\n", productID, productName, productPrice, productStock, sales)) {
        ret=1;
    }
    fclose(add);
    return ret;
}

//Update Product
int updateProduct(char productID[]) {
    int ret=0;
    if(isProductExist(productID)) {
        char id[10], productName[30];
        double productPrice;
        int productStock, sales;

        FILE *chk, *copy;
        chk  = fopen("productDB.txt", "r");
        copy = fopen("copy.txt", "w");
        while(fscanf(chk, "%s %s %lf %d %d", id, productName, &productPrice, &productStock, &sales)!=EOF) {
            if(strcmp(productID, id)==0) {
                printf("1. Name\n");
                printf("2. Price\n");
                printf("3. Stock\n");
                printf("4. All\n");
                int choice;
                scanf("%d", &choice);
                getchar();
                system("cls");
                if(choice==1) {
                    printf("New name for product ID %s : ", productID);
                    gets(productName);
                    strlwr(productName);
                } else if(choice==2) {
                    printf("New price for product ID %s: ", productID);
                    scanf("%lf", &productPrice);
                    getchar();
                } else if(choice==3) {
                    printf("New Stock for product ID %s: ", productID);
                    scanf("%d", &productStock);
                    getchar();
                } else if(choice==4) {
                    printf("Update info of product ID : %s\n", productID);
                    printf("New name : ");
                    gets(productName);
                    printf("New price : ");
                    scanf("%lf", &productPrice);
                    getchar();
                    printf("New stock : ");
                    scanf("%d", &productStock);
                    getchar();
                } else {
                    system("cls");
                    printf("Wrong input\n");
                    exit(1);
                }
            }
            if(fprintf(copy, "%-15s %-20s %-20.2lf %-10d %-10d\n", id, productName, productPrice, productStock, sales)) {
                ret=1;
            }
        }
        fclose(chk);
        fclose(copy);
        if(ret) {
            remove("productDB.txt");
            rename("copy.txt", "productDB.txt");
        }
    }
    return ret;
}

//Delete Product
int deleteProduct(char productID[]) {
    int ret=0;
    if(isProductExist(productID)) {
        char id[10], productName[30];
        double productPrice;
        int productStock, sales;

        FILE *chk, *copy;
        chk  = fopen("productDB.txt", "r");
        copy = fopen("copy.txt", "w");
        while(fscanf(chk, "%s %s %lf %d %*d", id, productName, &productPrice, &productStock, &sales)!=EOF) {
            if(strcmp(productID, id)==0) {
                continue;
            }
            if(fprintf(copy, "%-15s %-20s %-20.2lf %-10d %-10d\n", id, productName, productPrice, productStock, sales)) {
                ret=1;
            }
        }
        fclose(chk);
        fclose(copy);
        if(ret) {
            remove("productDB.txt");
            rename("copy.txt", "productDB.txt");
        }
    }
    return ret;
}

//View Store
void viewStore() {
    char productID[10], productName[30];
    double productPrice;
    int productStock, sales;

    FILE *view;
    view = fopen("productDB.txt", "r");
    printf("%-15s %-20s %-20s %-10s %-10s\n", "ID", "Name", "Price", "Stock", "Sales");
    while(fscanf(view, "%s %s %lf %d %d", productID, productName, &productPrice, &productStock, &sales)!=EOF) {
        printf("%-15s %-20s %-20.2lf %-10d %-10d\n", productID, productName, productPrice, productStock, sales);
    }
    fclose(view);
}

//Get Price
double getPrice(char productID[]) {
    double price;
    char id[10];
    FILE *chk;
    chk = fopen("productDB.txt", "r");
    while(fscanf(chk, "%s %*s %lf %*d %*d", id, &price)!=EOF) {
        if((strcmp(productID, id)==0)) {
            break;
        }
    }
    fclose(chk);
    return price;
}

//Update Stock & Sales
void updateStockSale(char productID[], int quantity) {
    if(isProductExist(productID)) {
        char id[10], productName[30];
        double productPrice;
        int productStock, sales;

        FILE *chk, *copy;
        chk  = fopen("productDB.txt", "r");
        copy = fopen("copy.txt", "w");
        while(fscanf(chk, "%s %s %lf %d %d", id, productName, &productPrice, &productStock, &sales)!=EOF) {
            if(strcmp(productID, id)==0) {
                sales+=quantity;
                productStock-=quantity;
            }
            fprintf(copy, "%-15s %-20s %-20.2lf %-10d %-10d\n", id, productName, productPrice, productStock, sales);
        }
        fclose(chk);
        fclose(copy);
        remove("productDB.txt");
        rename("copy.txt", "productDB.txt");
    }
}
