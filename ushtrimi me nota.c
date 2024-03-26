#include <stdio.h>

int main() {
int piketesti ;
printf("Ju lutemi vendosni piket e tesit!  ");
scanf("%d",&piketesti);
switch(piketesti/10){
        case 10:
        case 9:
        printf("Nota juaj e testit eshte A!");
        break;

        case 8:
        printf("Nota juaj e testit eshte B!");
        break;

        case 7 :
        printf("Nota juaj e testit eshte C!");
        break;

        case 6:
        printf("Nota juaj e testit eshte D!");
        break;

        default:
        printf("Nota juaj e testit eshte F!");
}
        
return 0;
}
