#include<stdio.h>
void decimalToBinary(int n){
    int binary[32],i=0;

    while(n>0){
            binary[i]=n%2;
    n=n/2;
    i++;
    }

    printf("Binary:");
    for(int j=i-1;j>=0;j--){
            printf("%d",binary[j]);
    }
    printf("\n");
}

void decimalToOctal(int n){
    int octal[32],i=0;

    while(n>0){
            octal[i]=n%8;
    n=n/8;
    i++;
    }

    printf("Octal:");
    for(int j=i-1;j>=0;j--){
            printf("%d",octal[j]);
    }
    printf("\n");
}

void decimalToHex(int n){
    int i=0;
    char hex[32];

    while(n>0){
            int rem=n%16;
    if(rem<10)
        hex[i]=rem+'0';
    else
        hex[i]=rem+55;
    n=n/16;
    i++;
    }

    printf("Hexadecimal:");
    for(int j=i-1;j>=0;j--){
            printf("%c",hex[j]);
    }
    printf("\n");
}

int main(){
    int num;

    printf("Enter a decimal number:");
    scanf("%d",&num);

    decimalToBinary(num);
    decimalToOctal(num);
    decimalToHex(num);

    return 0;
}
