#include <stdio.h>
#include <ctype.h>
// Q1
//for loop

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int i=0;
    int sum =0;
    while(i<=num){
        if (i%2!=0){
            pintf("%d",i);
            sum+=i;
        }
        i++;
    }printf("\n The total sum is%d",sum);
    return 0;
}

//while loop
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int sum;
    for (int i=0; i<=num; i++){
        if (i%2!=0){
            printf("%d ",i);
            sum+=i;
        }printf("\n Total sum is: %d",sum);
    }
    return 0;
}

//do while loop

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int i=0;
    int sum=0;
    do{
        if (i%2!=0){
            printf("%d",i);
            sum+=i;
        }
        i++;
    }while(i<num);
    printf("\nThe total sum is",sum);
    return 0;
}

//Q2(PRINTING PATTERN OF ASTERIKS)

int main (){
    int num=4;
    for (int i=1; i<=num;i++){
        for (int j=1; j<=num-i;j++){
            printf(" ");
        }
        printf("\n")
    }
    return 0;
}
// Q3 (IDENTIFYING STRINGS WHETHER SAME OR DIFFERENT )

void main(){
    char first[20];
    char second[20];
    char answer[]="";

    printf("Enter first string: ");
    fgets(first, 20,stdin);
    printf("Enter second string: ");
    fgets(second, 20, stdin);
    if (first==second){
        printf("Strings are same!");
    }else{
        printf("Strings are different!");
    }
}

//Q4 (CHANGING FROM LOWER TO UPPERCASE AND VICE VERSA)
void check(char *update){
    while(*update){
        if (islower(*update)){
            *update=toupper(*update);
        }
        else{
            *update=tolower(*update);
        }
        update++;
    }
}
int main(){
    char word[50]="";
    printf("Enter :");
    fgets(word, 50, stdin);
    check(word);
    printf("UPDATED IS:%s",word);
    return 0;
}

// Q5 (PRINTING UNIQUE ELEMENTS OF AN ARRAY)

int fun(int check[]){
    int i,j;
    int count=0;
    for (i=0; i<=5;i++){
        for (j=0; i<=5;j++){
            if (check[i]==check[j] && i!=j){
                break;
            }
        }if (j==5){
            printf("Unique elements are [%d]: %d",count,check[i]);
        ++count;
        }
    }
    return -1;
}

int main(){
    int check[5];
    int i,j;
    printf("Enter five integers:\n ");
    for (i=0;i<=5;i++){
        scanf("%d  ",&check[i]);
    }
    fun(check);
    return 0;
}

