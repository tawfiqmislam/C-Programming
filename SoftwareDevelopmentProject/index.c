#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "functions.c"
#include "user.c"
#include "product.c"
#include "checkout.c"

int isLogged;//true/false

int main() {
    do {
        printf("Store Management System\n");
        printf("-----------------------\n");
        printf("1. Login\n");
        printf("2. Registration\n");
        printf("3. Store\n");
        int choice;
        scanf("%d", &choice);
        getchar();
        system("cls");
        if(choice==1) {
            if(FileEmpty("userDB.txt")) {
                printf("Do registration first.\n\n");
                continue;
            }
            printf("Login\n");
            printf("-----\n");
            char username[30], password[30];
            printf("Username : ");
            gets(username);
            printf("Password : ");
            gets(password);
            if(login(username, password)) {
                isLogged=1;
                system("cls");
            } else {
                system("cls");
                printf("Login Failed.\n");
                printf("\nUsername/Password wrong or system fault.\n\n");
                continue;
            }
        } else if(choice==2) {
            printf("Registration\n");
            printf("------------\n");
            if(registration()) {
                system("cls");
                printf("Registration completed.\n\n");
                continue;
            } else {
                system("cls");
                printf("Registration Failed. System fault.\n");
            }
        } else if(choice==3) {
            system("cls");
            if(FileEmpty("productDB.txt")) {
                printf("No product in the store.\n");
                exit(1);
            }
            viewStore();
            printf("\nDo you want to buy?\n");
            printf("1. Yes \t 2. No\n");
            int choice;
            scanf("%d", &choice);
            getchar();
            if(choice==1) {
                //checkout
                checkout(isLogged);
            } else {
                system("cls");
                continue;
            }
        } else {
            continue;
        }

        do {
            if(isLogged) {
                printf("Management\n");
                printf("----------\n");
                printf("1. Product Management\n");
                printf("2. Store\n");
                printf("3. Logout\n");
                int choice;
                scanf("%d", &choice);
                getchar();
                if(choice==1) {
                    //Product Management
                    system("cls");
                    do {
                        printf("Product Management\n");
                        printf("------------------\n");
                        printf("1. Add product\n");
                        printf("2. Update product\n");
                        printf("3. Delete product\n");
                        printf("4. Back\n");
                        int choice;
                        scanf("%d", &choice);
                        getchar();
                        if(choice==1) {
                            //Add Product
                            system("cls");
                            printf("Add Product\n");
                            printf("-----------\n");
                            if(addProduct()) {
                                system("cls");
                                printf("Product added.\n\n");
                            } else {
                                printf("Failed to add product.\n\n");
                            }
                        } else if(choice==2) {
                            //Update Product
                            system("cls");
                            if(FileEmpty("productDB.txt")) {
                                printf("No product in the store.\n");
                                exit(1);
                            }
                            printf("Update Product\n");
                            printf("--------------\n");
                            char productID[10];
                            printf("Product ID : ");
                            gets(productID);
                            if(updateProduct(productID)) {
                                system("cls");
                                printf("Product updated.\n\n");
                            } else {
                                printf("Failed to update product.\n\n");
                            }
                        } else if(choice==3) {
                            //Delete Product
                            system("cls");
                            if(FileEmpty("productDB.txt")) {
                                printf("No product in the store.\n");
                                exit(1);
                            }
                            printf("Delete Product\n");
                            printf("--------------\n");
                            char productID[10];
                            printf("Product ID : ");
                            gets(productID);
                            if(deleteProduct(productID)) {
                                system("cls");
                                printf("Product deleted.\n\n");
                            } else {
                                system("cls");
                                printf("Failed to delete product.\n\n");
                            }
                        } else if(choice==4) {
                            system("cls");
                            break;
                        } else {
                            system("cls");
                            continue;
                        }

                    } while(1);

                } else if(choice==2) {
                    //View Store
                    system("cls");
                    if(FileEmpty("productDB.txt")) {
                        printf("No product in the store.\n");
                        exit(1);
                    }
                    viewStore();
                    printf("\nDo you want to buy?\n");
                    printf("1. Yes \t 2. No\n");
                    int choice;
                    scanf("%d", &choice);
                    getchar();
                    if(choice==1) {
                        checkout(isLogged);
                    } else {
                        system("cls");
                        continue;
                    }
                } else if(choice==3) {
                    //Logout
                    system("cls");
                    isLogged=0;
                    break;
                } else {
                    system("cls");
                }
            }
        }while(1);

    }while(1);

    return 0;
}
