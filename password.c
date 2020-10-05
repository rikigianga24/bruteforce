#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fpassword;
    char password[255];
    char check[255];
    printf("Inserisci una password\n");
    gets(password);

    fpassword=fopen("password.txt","r");

    if(!fpassword){
        printf("File non leggibile\n");

    }else{
        printf("file letto\n");
        while(!feof(fpassword)){
            fscanf(fpassword,"%s\t",check);
            if(strcmp(check,password)==0){
                printf("password scoperta\n");
                getchar();
                break;
            }else{
            
            }
        }
        
        
    }
 fclose(fpassword);
}