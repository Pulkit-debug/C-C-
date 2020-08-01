#include<stdio.h>
int main() {
    FILE *fp;
    char ch ;
    fp = fopen("checking.txt", "r");
    if(fp == NULL) printf("File is not present");
    while(ch != EOF) {
    ch = fgetc(fp);
    printf("%c", ch);
        
    }
    fclose(fp);
    return 0;
}