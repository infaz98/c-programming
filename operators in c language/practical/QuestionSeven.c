#include <stdio.h>

//check whether given inputs are correct or not
int main(){

    int p;
    int q;
    int r;
    int s;

    printf("Enter value for p: ");
    scanf("%d", &p);

    printf("Enter value for q: ");
    scanf("%d", &q);
    
    printf("Enter value for r: ");
    scanf("%d", &r);
    
    printf("Enter value for s: ");
    scanf("%d", &s);
    

    if(r>0 && s>0 && (p%2 == 0) && q>r && s>p && (r+s)>(p +q)){
        printf("Correct values\n");
    }else{
        printf("Wrong values\n");
    }

    return 0;
}   