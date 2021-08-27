//Check User
int isUserExist(char username[]) {
    int ret=0;
    char uname[30];
    FILE *chk;
    chk = fopen("userDB.txt", "r");
    while(fscanf(chk, "%s %*s %*s", uname)!=EOF) {
        if(strcmp(username, uname)==0) {
            ret = 1;
        }
    }
    fclose(chk);
    return ret;
}

//Registration User
int registration() {
    int ret=0;
    char username[30], password[30], phone[30];
    printf("Username : ");
    gets(username);
    strlwr(username);
    while(isUserExist(username)) {
        printf("Username already exist.\n");
        printf("Try another username : ");
        gets(username);
    }
    strlwr(username);
    printf("Password : ");
    gets(password);
    printf("Phone : ");
    gets(phone);

    FILE *reg;
    reg = fopen("userDB.txt", "a");
    if(fprintf(reg, "%-20s %-20s %-20s\n", username, password, phone)) {
        ret=1;
    }
    fclose(reg);
    return ret;
}

//Login User
int login(char username[], char password[]) {
    int ret=0;
    char uname[30], upass[30];
    FILE *chk;
    chk = fopen("userDB.txt", "r");
    while(fscanf(chk, "%s %s %*s", uname, upass)!=EOF) {
        if(strcmp(username, uname)==0) {
            if(strcmp(password, upass)==0) {
                ret = 1;
            }
        }
    }
    fclose(chk);
    return ret;
}

//Update User
int userUpdate(char username[]) {
    int ret=0;
    if(isUserExist(username)) {
        char uname[30], upass[30], uphone[30];
        FILE *chk, *copy;
        chk  = fopen("userDB.txt", "r");
        copy = fopen("copy.txt", "w");
        while(fscanf(chk, "%s %s %s", uname, upass, uphone)!=EOF) {
            if(strcmp(username, uname)==0) {
                printf("1. Password\n");
                printf("2. Phone\n");
                printf("3. Both\n");
                int choice;
                scanf("%d", &choice);
                getchar();
                system("cls");
                if(choice==1) {
                    printf("New password for %s : ", username);
                    gets(upass);
                } else if(choice==2) {
                    printf("New phone for %s: ", username);
                    gets(uphone);
                } else if(choice==3) {
                    printf("Update info of : %s\n", username);
                    printf("New password : ");
                    gets(upass);
                    printf("New phone : ");
                    gets(uphone);
                } else {
                    system("cls");
                    printf("Wrong input\n");
                    exit(1);
                }
            }
            if(fprintf(copy, "%-20s %-20s %-20s\n", uname, upass, uphone)) {
                ret=1;
            }
        }
        fclose(chk);
        fclose(copy);
        if(ret) {
            remove("userDB.txt");
            rename("copy.txt", "userDB.txt");
        }
    }
    return ret;
}

//Delete User
int userDelete(char username[]) {
    int ret=0;
    if(isUserExist(username)) {
        char uname[30], upass[30], uphone[30];
        FILE *chk, *copy;
        chk  = fopen("userDB.txt", "r");
        copy = fopen("copy.txt", "w");
        while(fscanf(chk, "%s %s %s", uname, upass, uphone)!=EOF) {
            if(strcmp(username, uname)==0) {
                continue;
            }
            if(fprintf(copy, "%-20s %-20s %-20s\n", uname, upass, uphone)) {
                ret=1;
            }
        }
        fclose(chk);
        fclose(copy);
        if(ret) {
            remove("userDB.txt");
            rename("copy.txt", "userDB.txt");
        }
    }
    return ret;
}
