
#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
for(int k=1; k<=a; k++){
    for(int l=1; l<=a; l++){
        printf("%d", l);
    }
    printf("%d", k);
}
return 0;
}
