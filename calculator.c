/* Registration no.-RA2111003010095
   Name -Aman Prasad Gupta
   Section-B-1
   PPS Lab Project
*/

#include <stdio.h>
#include <math.h>
int main(){
    printf("***********************Welcome to SRM calculator****************************\n");
    int num1,num2;
    float float1,float2;
    double double1,double2;
    printf("Enter values for num1,num2\n");
    scanf("%d %d",&num1,&num2);
    printf("Enter values for float1,float2\n");
    scanf("%f %f",&float1,&float2);
    printf("Enter values for double1,double2\n");
    scanf("%lf %lf",&double1,&double2);
    printf("Addition '+'\nSubtraction '-'\nMultiplication '*'\nDivision '/'\n");
    char symbol;
    printf("Choose the operation you want to perform\n");
    scanf(" %c",&symbol);
    switch(symbol){
        case '+':
        printf("Sum is %d\n",num1+num2);
        printf("Sum is %0.3f\n",float1+float2);
        printf("Sum is %lf\n",double1+double2);
        break;
        case '-':
        printf("Subtraction is %d\n",num1-num2);
        printf("Subtraction is %0.3f\n",float1-float2);
        printf("Subtraction is %lf\n",double1-double2);
        break;
        case '*':
        printf("Product is %d\n",num1*num2);
        printf("Product is %0.3f\n",float1*float2);
        printf("Product is %lf\n",double1*double2);
        break;
        case '/':
        printf("Division is %d\n",num1/num2);
        printf("Division is %0.3f\n",float1/float2);
        printf("Division is %lf\n",double1/double2);
        break;
        default:
        printf("wrong input");
        break;
    }
return 0;
}