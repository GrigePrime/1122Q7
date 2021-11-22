#include <stdio.h>

int main(void)
{
    char arr;
    int j = 0;
    while (scanf("%c", &arr) != EOF)
    {
        if (arr!='"'){
            printf("%c",arr);
        }else{
            j++;
            if(j%2==1){
            printf("``");
        }else if(j%2==0){
            printf("''");
        }
        }
        
    }
}
