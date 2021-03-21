#include<stdio.h>
int main(){
int marks;
printf ("enter marks %d\n");
scanf("%d",&marks);
// ************************* usimg switch statement **********************//
switch (marks/10)
{
case 9 : 
printf("you got A grade"); 
    break;
    case 8 : 
printf("you got B grade"); 
    break;
    case 7: 
printf("you got C grade"); 
    break;
    case 6 : 
printf("you got D grade"); 
    break;
    case 5 : 
printf("you got E grade"); 
    break;

default:
printf("you got F garde or failed");
    break;
}
//    ************** USING else IF STATEMENTS *****************//

// if (marks>90 && marks<100){
//     printf("hou got A grade ");
// }
// else if(marks>80 && marks<=90){
//     printf("you got B grade");
// }
// else if (marks>70 && marks<=80){
//     printf("you got C grade");
// }
// else if (marks>60 && marks <=70){
//     printf("you got D grade");
//     }
//     else if (marks>50 && marks<=60){
//         printf ("you got E grade");
//     }
//     else{
//         printf("you are failed in this exam");
//     }

return 0;
}