#include <stdio.h> //Libralies
#include <string.h>

int exitprogram(int b) {//function
b;
if(b == 1) {
    b = 0;
    printf("exiting...\n");
    for(int a = 0; a < 1000; a++) { //Loops
        printf(" ");//blank
    }
    printf("\033[0;32mexited successfully\033[0m\n"); //Green Text
    return 0;
}
}
int enter(int e) {
    if(e == 1) {
        back(1);
    }
}
int back(int d) {
    if(d == 1) {
        d = 0;
char run[10];
       printf("choose:"); //Input
    fgets(run,10,stdin);
    if(strcmp(run,"exit\n") == 0) {
        exitprogram(1);
    }
    if(strcmp(run,"plus\n")== 0) { 
    int a;
    int b;
    printf("CHOOSE FIRST NUMBER:");
    scanf("%d",&a);
    getchar();
    printf("CHOOSE SECOND NUMBER:");
    scanf("%d",&b);
    getchar();
    int c = a + b;
    printf("%d",c);
     char d[10];
      printf("List Of Command: exit,y\n");
    printf("Back To Menu? (Or Exit):");
    fgets(d,10,stdin);
    if(strcmp(d,"y\n") == 0) {
        enter(1);
    }
    else if(strcmp(d,"exit\n") == 0) {
        exitprogram(1);
    }
    else {
        printf("!!!ERROR!!!");
    }
    }
    if (strcmp(run,"subtract\n") == 0) { 
        int a;
        int b;
        printf("CHOOSE FIRST NUMBER:");
        scanf("%d",&a); 
        getchar();
        printf("CHOOSE SECOND NUMBER:");
        scanf("%d",&b);
        getchar();
        int c = a - b;
        printf("%d\n",c);
         char d[10];
          printf("List Of Command: exit,y\n");
    printf("Back To Menu? (Or Exit):");
    fgets(d,10,stdin);
    if(strcmp(d,"y\n") == 0) {
        enter(1);
    }
    else if(strcmp(d,"exit\n") == 0) {
        exitprogram(1);
    }
    else {
        printf("!!!ERROR!!!");
    }
    }
        if (strcmp(run,"division\n") == 0) {
        int a;
        int b;
        printf("CHOOSE FIRST NUMBER:");
        scanf("%d",&a);
        getchar();
        printf("CHOOSE SECOND NUMBER:");
        scanf("%d",&b);
        getchar();
        int c = a / b;
        printf("%d\n",c);
         char d[10];
          printf("List Of Command: exit,y\n");
    printf("Back To Menu? (Or Exit):");
    fgets(d,10,stdin);
    if(strcmp(d,"y\n") == 0) {
        enter(1);
    }
    else if(strcmp(d,"exit\n") == 0) {
        exitprogram(1);
    }
    else {
        printf("!!!ERROR!!!");
    }
    }
        if (strcmp(run,"multiply\n") == 0) { 
        int a;
        int b;
        printf("CHOOSE FIRST NUMBER:");
        scanf("%d",&a);
        getchar();
        printf("CHOOSE SECOND NUMBER:");
        scanf("%d",&b);
        getchar();
        int c = a * b;
        printf("%d\n",c);
         char d[10];
          printf("List Of Command: exit,y\n");
    printf("Back To Menu? (Or Exit):");
    fgets(d,10,stdin);
    if(strcmp(d,"y\n") == 0) {
        enter(1);
    }
    else if(strcmp(d,"exit\n") == 0) {
        exitprogram(1);
    }
    else {
        printf("!!!ERROR!!!");
    }
    }
    if(strcmp(run,"loop\n") == 0) {
        for(int c = 1; c > 10000000; c++) {
            printf("SUPER LOOP!!!!!!!!!!!!!!!!!");
        }
    }
    }
}
int main() {
    char r[10];
       printf("\033[0;34m FOLLOWED BY THE RULES OF C,MATHEMATICS AND PROGRAMMING\033[0m\n"); //RULES!!!!!!!!!
       printf("\033[1;31mDividing By 0 and 0 will cause program to crash Because of Undefined\033[0m\n"); // Red text
       printf("List Of Arithmetic = plus,multiply,divide,subtract. (Hit enter after choosing arithmetic operator)\n");
    printf("choose:"); //Input
    fgets(r,10,stdin);
    if(strcmp(r,"plus\n")== 0) { 
    int a;
    int b;
    printf("CHOOSE FIRST NUMBER:");
    scanf("%d",&a);
    getchar(); //get \n so fgets can input new \n and \n from scanf is replace from and entered to getchar program
    printf("CHOOSE SECOND NUMBER:");
    scanf("%d",&b);
    getchar(); //get \n so fgets can input new \n and \n from scanf is replace from and entered to getchar program
    int c = a + b;
    printf("%d\n",c);
    char d[10];
      printf("List Of Command: exit,y\n");
    printf("Back To Menu? (Or Exit):");
    fgets(d,10,stdin);
    if(strcmp(d,"y\n") == 0) {
        back(1);
    }
    else if(strcmp(d,"exit\n") == 0) {
        exitprogram(1);
    }
    else {
        printf("!!!ERROR!!!");
    }
    }
    if (strcmp(r,"subtract\n") == 0) { 
        int a;
        int b;
        printf("CHOOSE FIRST NUMBER:");
        scanf("%d",&a);
        printf("CHOOSE SECOND NUMBER:");
        scanf("%d",&b);
        int c = a - b;
        printf("%d\n",c);
         char d[10];
           printf("List Of Command: exit,y\n");
    printf("Back To Menu? (Or Exit):");
    fgets(d,10,stdin);
    if(strcmp(d,"y\n") == 0) {
        back(1);
    }
    else if(strcmp(d,"exit\n") == 0) {
        exitprogram(1);
    }
    else {
        printf("!!!ERROR!!!");
    }
    }
        if (strcmp(r,"division\n") == 0) {
        int a;
        int b;
        printf("CHOOSE FIRST NUMBER:");
        scanf("%d",&a);
        printf("CHOOSE SECOND NUMBER:");
        scanf("%d",&b);
        int c = a / b;
        printf("%d\n",c);
         char d[10];
         printf("List Of Command: exit,y\n");
    printf("Back To Menu? (Or Exit):");
    fgets(d,10,stdin);
    if(strcmp(d,"y\n") == 0) {
        back(1);
    }
    else if(strcmp(d,"exit\n") == 0) {
        exitprogram(1);
    }
    else {
        printf("!!!ERROR!!!");
    }
    }
        if (strcmp(r,"multiply\n") == 0) { 
        int a;
        int b;
        printf("CHOOSE FIRST NUMBER:");
        scanf("%d",&a);
        printf("CHOOSE SECOND NUMBER:");
        scanf("%d",&b);
        int c = a * b;
        printf("%d\n",c);
         char d[10];
           printf("List Of Command: exit,y\n");
    printf("Back To Menu? (Or Exit):");
    fgets(d,10,stdin);
    if(strcmp(d,"y\n") == 0) {
        back(1);
    }
    else if(strcmp(d,"exit\n") == 0) {
        exitprogram(1);
    }
    else {
        printf("!!!ERROR!!!");
    }
    }
    if(strcmp(r,"loop\n") == 0) {
        for(int c = 1; c > 100000000; c++) {
            printf("SUPER LOOP!!!!!!!!!!!!!!!!!");
        }
    }
    return 0;
}