// Question:1 Get a number from user and add 2 to that number and print the result.
// Example: Input :45 Output 47. Input:56789 Output:56791
// code:
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a Number:");
    scanf("%d",&num);
    res=num+2;
    printf("%d",res);
    return 0;
// ======================================================================================
// Question:2 Get a number from user and subtract 5 to that number and print the result.
// Example: Input :45 Output 40. Input:56789 Output:56784
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a num:");
    scanf("%d",&num);
    res=num-5;
    printf("%d",res);
    return 0;
}
// ======================================================================================

// Question:3 Get a number from user and multiply 3 to that number and print theresult.
// Example: Input: 45 Output 135. Input: 1200 Output: 3600
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a num:");
    scanf("%d",&num);
    res=num*3;
    printf("%d",res);
    return 0;
}
// ======================================================================================
// Question:4 Get a number from user and divide by the number by 6 and print thequotient.
// Example: Input: 45 Output 7. Input: 143 Output: 23
#include <stdio.h>
int main(){
    int num, res;
    printf("enter the num:");
    scanf("%d",&num);
    res=num/6;
    printf("%d",res);
    return 0;
}
// ======================================================================================
// Question:5 Get a number from user and divide by the number by 8 and print the remainder.
// Example: Input: 45 Output 5. Input: 143 Output: 7
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a num:");
    scanf("%d",&num);
    res=num%8;
    printf("%d",res);
    return 0;
}
// ======================================================================================
// Question:6 Get a two-digit number from user and print the one’s digit.
// Example: Input: 45 Output 5. Input: 56 Output: 6
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a 2digit num:");
    scanf("%d",&num);
   if((num<-9&&num>-100)||(num>9&&num<100)){
     res=num%10;
    printf("%d",res);
   }
   else{
    printf("enter a valid 2digit number!");
   }
    return 0;
}
// ======================================================================================
// Question:7 Get a two-digit number from user and print the ten’s digit.
// Example: Input: 45 Output 4. Input: 56 Output: 5
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a 2digit num:");
    scanf("%d",&num);
    if((num<-9&&num>-100)||(num>9&&num<100)){
        res=num/10;
        printf("%d",res);
    }
    else{
        printf("enter a valid 2digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:8 Get a three-digit number from user and print the one’s digit.
// Example: Input: 456 Output 6. Input: 569 Output: 9
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a 3digit num:");
    scanf("%d",&num);
    if((num>-1000 && num<-99)||(num>99 && num<1000)){
        res=num%10;
        printf("%d",res);
    }
    else{
        printf("enter a valid 3digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:9 Get a three-digit number from user and print the hundred’s digit.
// Example: Input: 456 Output 4. Input: 569 Output: 5
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a 3digit num:");
    scanf("%d",&num);
    if(((num<-99)&&(num>-1000)) || ((num>99)&&(num<1000))){
        res=num/100;
        printf("%d",res);}
    else{
        printf("enter a valid 3digit num!"); }
    return 0;
}
// ======================================================================================
// Question:10 Get a three-digit number from user and print the ten’s digit.
// Example: Input: 456 Output 5. Input: 569 Output: 6
#include <stdio.h>
int main(){
    int num,res1,res2;
    printf("enter a 3digit num:");
    scanf("%d",&num);
    if((num<-99&&num>-1000)||(num>99&&num<1000)){
        res1=num/10;
        res2=res1%10;
        printf("%d",res2);
    }
    else{
        printf("enter a valid 3digit num!");
    }
}
// ======================================================================================
// Question:11 Get a two-digit number from user and print sum the digits.
// Example: Input: 56 Output 11. Input: 69 Output: 15
#include <stdio.h>
int main(){
    int num,res1,res2,sum;
    printf("enter a 2digit num:");
    scanf("%d",&num);
    if((num<-9&&num>-100)||(num>9&&num<100)){
        res1=num%10;
        res2=num/10;
        sum=res1+res2;
        printf("%d",sum);
    }
    else{
        printf("enter a 2digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:12 Get a three-digit number from user and print sum the digits.
// Example: Input: 562 Output 13. Input: 469 Output: 19
#include <stdio.h>
int main(){
    int num,res1,res2,sum=0;
    printf("enter a 3digit num!:");
    scanf("%d",&num);
    if((num<-99&&num>-1000)||(num>99&&num<1000)){
         loop:
         if(num!=0){
            res1 = num%10;
            sum = res1+sum;
            num=num/10;
            goto loop;
            }
    printf("%d",sum);
    }
    else{
        printf("enter a valid 3digit num!");
    }
    return 0;
}
//===============================================================================
// Question:13 Get a two-digit number from user and print the reverse of the number.
// Example: Input: 56 Output 65. Input: 59 Output: 95
#include <stdio.h>
int main(){
    int num,rim,rev=0;
    printf("enter a 2digit num:");
    scanf("%d",&num);
    if((num<-9&&num>-100)||(num>9&&num<100)){
        loop:
        if(num>0){
            rim =num%10;
            rev=rev*10+rim;
            num =num/10;
            
            goto loop;
        }
        printf("%d\n",rev);
        
    }
    else{
        printf("enter a valid 2digit num!");

    }
    return 0;
}
// ======================================================================================
// Question:14 Get a four-digit number from user and only reverse the first two digits of the number, then print the number.
// Example: Input: 9561 Output 9516. Input: 3859 Output: 3895
#include <stdio.h>
int main(){
    int num,rim1,rim2,quo1,rev=0,i=2;
    printf("enter a 4digit num:");
    scanf("%d",&num);
    if((num<-999&&num>-10000)||(num>999&&num<10000)){
        rim1=num%100;
        quo1=num/100; 
        loop:
        if(rim1>0){
            rim2=rim1%10;
            quo1=quo1*10+rim2;
            rim1=rim1/10;
            goto loop;
        }
        printf("%d",quo1);
    }
    else{
        printf("enter a valid 4digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:15 Get a four-digit number from user and only reverse the last two digits of the number, then print the number.
// Example: Input: 9561 Output 5961. Input: 3859 Output: 8359
#include <stdio.h>
int main(){
    int num,rev1,quo1,quo2,quo3=0,sum;
    printf("enter a 4digit num:");
    scanf("%d",&num);
    if((num<-999&&num>-10000)||(num>999&&num<10000)){
        rev1=num%100;
        quo1=num/100;
        loop:
        if(quo1>0){
            quo2=quo1%10;
            quo3=quo3*10+quo2;
            quo1=quo1/10;
            goto loop;
        }
        sum=(quo3*100)+rev1;
        printf("%d",sum);
    }
    else{
        printf("enter a valid 4digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:16 Get a two-digit number from user and make the one’s digit as 0,then print it.
// Example: Input: 95 Output 90. Input: 18 Output: 10
#include <stdio.h>
int main(){
    int num,rim,rev;
    printf("enter a valid 2digit num:");
    scanf("%d",&num);
    if((num<-9&&num>-100)||(num>9&&num<100)){
        rim=num/10;
        rev = rim*10;
        printf("%d",rev);
    }
    else{
        printf("enter a valid 2digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:17 Get a two-digit number from user and make the ten’s digit 1,then print it.
// Example: Input: 95 Output 15. Input: 82 Output: 12
#include <stdio.h>
int main(){
    int num,rim,rev;
    printf("enter a valid 2digit num:");
    scanf("%d",&num);
    if((num<-9&&num>-100)||(num>9&&num<100)){
        rim=num%10;
        rev=10+rim;
        printf("%d",rev);
    }
    else{
        printf("enter a valid 2digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:18 Get a three-digit number from user and make the one’s digit as 2, then print it.
// Example: Input: 695 Output 692. Input: 182 Output: 182
#include <stdio.h>
int main(){
    int num,rim,rev;
    printf("enter a 3digit num:");
    scanf("%d",&num);
    if((num<-99&&num>-1000)||(num>99&&num<1000)){
        rim=num/10;
        rev=(rim*10)+2;
        printf("%d",rev);
    }
    else{
        printf("enter a valid 3digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:19 Get a three-digit number from user and make the ten’s digit as 0, then print it.
// Example: Input: 695 Output 605. Input: 182 Output: 102
#include <stdio.h>
int main(){
    int num,rim1,rim2,rev;
    printf("enter a 3digit num:");
    scanf("%d",&num);
    if((num<-99&&num>-1000)||(num>99&&num<1000)){
        rim1=num/100;
        rim2=num%10;
        rev=(rim1*100)+rim2;
        printf("%d",rev);
    }
    else{
        printf("enter a valid 3digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:20 Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use “if”.
// Example: Input: 695 Output 690. Input: 182 Output: 182
#include <stdio.h>
int main(){
    int num,odd,res;
    printf("enter a num:");
    scanf("%d",&num);
    odd = ((num%2)!=0);
    res = num-(odd*5);
    printf("%d",res);
}
// ======================================================================================
// Question:21 Get a number from user and subtract 5 from that number if the number’s ten’s position digit is odd, then print the result. Do not use “if”.
// Example: Input: 685 Output 685. Input: 89172 Output: 89167
#include <stdio.h>
int main(){
    int num,tens_ones,tens,odd,res;
    printf("enter a num:");
    scanf("%d",&num);
    tens_ones=num%100;
    tens=tens_ones/10;
    odd=((tens%2)!= 0);
    res=num-(odd*5);
    printf("%d",res);
    return 0;
}
// ======================================================================================
// Question:22 Get a two digit number from user and subtract 5 from that number if the sum of the digits of the number is odd, then print the result. Do not use “if”.
// Example: Input: 95 Output 95. Input: 72 Output: 67
#include <stdio.h>
int main(){
    int num,two_digit,sum1,sum2,odd,res;
    printf("enter a 2digit num:");
    scanf("%d",&num);
    two_digit=((num<-9&&num>-100)||(num>9&&num<100));
    // here, i'm using switch case to verify, whether the entered num is two digit or not!
    switch(two_digit){
        case 0:
            printf("enter a valid 2digit num!");
            break;
        case 1:
            sum1 = num%10;
            sum2 = sum1+(num/10);
            odd = ((sum2%2)!=0);
            num = num-(odd*5);
            printf("%d",num);
            break;
        defalut:
            printf("enter a valid data type!");
    }
    return 0;
}
// ======================================================================================
// Question:23 Get a three-digit number from user and subtract 5 from that number if one’s digit number and 100’s digit number are same, then print the result. Do not use “if”.
// Example: Input: 595 Output 590. Input: 372 Output: 372
#include <stdio.h>
int main(){
    int num,three_digit,ones,same,sum;
    printf("enter a 3digit num:");
    scanf("%d",&num);
    three_digit=((num<-99&&num>-1000)||(num>99&&num<1000));
    switch(three_digit){
        case 0:
            printf("enter a valid 3digit num!");
            break;
        case 1:
            ones=num%10;
            same=(num/100)==(ones);
            sum=num-(same*5);
            printf("%d",sum);
    }
    return 0;  
}
// ======================================================================================
// Question:24 Get a four-digit number from user and subtract 5 from that number if ten’s digit position and 100’s digit position is same, then print the result. Do not use “if”.
// Example: Input: 7595 Output 7595. Input: 3772 Output: 3767
#include <stdio.h>
int main(){
    int num,four_digit,tens,hundreds,same;
    printf("enter a 4digit num:");
    scanf("%d",&num);
    four_digit=((num<-999&&num>-10000)||(num>999&num<10000));
    switch(four_digit){
        case 0:
            printf("enter a valid 4digit num!");
            break;
        case 1:
            tens=(num/10)%10;
            hundreds=(num/100)%10;
            same=(tens==hundreds);
            num=num-(same*5);
            printf("%d",num);   
    }
    return 0;
}
// ======================================================================================
// Question:25 Get a two-digit number from user. If the sum of the digits is 10 then print “Success”, otherwise print “Failure”.
// Example: Input: 56 - Output Failure. Input: 37 - Output: Success.
#include <stdio.h>
int main(){
    int num,two_digit,sum;
    printf("enter a 2digit num:");
    scanf("%d",&num);
    if((num<-9&&num>-100)||(num>9&&num<100)){
        sum=((num%10)+(num/10));
        switch(sum){
            case 10:
                printf("Success");
                break;
            default:
                printf("Failure");
                break;
        }
    }
    else{
        printf("enter a valid 2digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:27 Get a three-digit number from user. If the sum of the digits is 10 then print “Success”, otherwise print “Failure”.
// Example: Input: 956 - Output Failure. Input: 127 - Output: Success.
#include <stdio.h>
int main(){
    int num,sum;
    printf("enter a 3digital num:");
    scanf("%d",&num);
    if((num<-99&&num>-1000)||(num>99&&num<1000)){
        sum=((num%10)+((num/10)%10)+((num/100)%10));
        switch(sum){
            case 10:
                printf("Success");
                break;
            default:
                printf("Failure");
        }
    }
    else{
        printf("enter a valid 3digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:28 Get a three-digit number from user. If the sum of the one’s digit and hundred’s digit is less than 10, then print “Success”, otherwise print “Failure”.
// Example: Input: 569 - Output Failure. Input: 316 - Output: Success.
#include <stdio.h>
int main(){
    int num,sum;
    printf("enter a 3digit num:");
    scanf("%d",&num);
    if((num<-99&&num>-1000)||(num>99&&num<1000)){
        sum=(num%10)+((num/100));
        if(sum<10){
            printf("Success");
        }
        else{
            printf("Failure");
        }
    }
    else{
        printf("enter a valid 3digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:29 Get a four-digit number from user. If the sum of the ten’s digit and hundred’s digit is greater than 10, then print “Success”, otherwise print “Failure”.
// Example: Input: 7529 – Output: Failure. Input: 9386 - Output: Success.
#include <stdio.h>
int main(){
    int num,sum;
    printf("enter a 4digit num:");
    scanf("%d",&num);
    if((num<-999&&num>-10000)||(num>999&&num<10000)){
        sum=(((num/10)%10)+((num/100)%10));
        if(sum>10){
            printf("Success");
        }
        else{
            printf("Failure");
        }
    }
    else{
        printf("enter a valid 4digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:30 Get a four-digit number from user. If the sum of the ten’s digit and hundred’s digit is equal to 10, and one of the digits is more than 7 then print “Success”, otherwise print “Failure”.
// Example: Input: 4649 – Output: Failure. Input: 9286 - Output: Success.
#include <stdio.h>
int main(){
    int num,sum;
    printf("enter a 4digit num:");
    scanf("%d",&num);
    if((num<-999&&num>-10000)||(num>999&&num<10000)){
        sum=((num/10)%10+(num/100)%10);
        if(((sum==10)&&((num/10)%10)>7)||((sum==10)&&((num/100)%10)>7)){
            printf("Success");
        }
        else{
            printf("Failure");
        }

    }
    else{
        printf("enter a valid 4digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:31 Get a three-digit number from user. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum, and print the sum. Note: The result should be always single digit only.
// Example: Input: 123 – Output: 6
// Input: 149 - Output: 5 (149:1+4+9 = 14: 1+4 = 5)
// Input: 991 - Output: 1 (991: 9+9+1 = 19: 1+9 = 10: 1+0 = 1)
#include <stdio.h>
int main(){
    int num,a,b,c,sum=0;
    printf("enter a 3digit num:");
    scanf("%d",&num);
    if((num<-99&&num>-1000)||(num>99&&num<1000)){
        loop:
        sum=((num%10)+(num/10)%10+(num/100)%10);
        if(sum<10){
            printf("%d",sum);
        }
        else{
            num = sum;
            goto loop;
        }     
        }
    else{
        printf("enter a valid 3digit num!");
    }
    return 0;
}
// Question:32 Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then print the sum, otherwise print the difference.
// Example: Input: 56 78 – Output: 22
// Input: 14 65 - Output: 79
#include <stdio.h>
int main(){
    int num1,num2;
    printf("enter two 2digits num:");
    scanf("%d%d",&num1,&num2);
    if(((num1<-9&&num1>-100)||(num1>9&&num1<100))&&((num2<-9&&num2>-100)||(num2>9&&num2<100))){
        if((num1+num2)<100){
            printf("%d",num1+num2);
        }
        else{
            printf("%d",num1-num2);
        }
    }
    else{
        printf("enter a valid 2digit num!");
    }
    return 0;
}
// ======================================================================================
// Question:33 Get two 2-digit numbers from user. Print the sum of digits of the biggest number.
// Example: Input: 56 78 – Output: 15
// Input: 14 65 - Output: 11
#include <stdio.h>
int main(){
    int num1,num2,sum=0,rim;
    printf("enter two 2digit numbers:");
    scanf("%d%d",&num1,&num2);
    if(((num1<-9&&num1>-100)||(num1>9&&num1<100))&&((num2<-9&&num2>-100)||(num2>9&&num2<100))){
        if(num1>num2){
            printf("large num is %d\t",num1);
            while(num1>0){
                rim=num1%10;
                sum=sum+rim;
                num1=num1/10;
            }
            printf("sum is %d\n",sum);
        }
        else if(num2>num1){
            printf("large num is %d\t",num2);
            while(num2>0){
                rim=num2%10;
                sum=sum+rim;
                num2=num2/10;
            }
            printf("sum is %d\n",sum);
        }
        else{
            printf("both are same!");
        }

    }
    else{
        printf("enter a valid 2digit num!");
    }
}
// ======================================================================================
// Question:34 Get two 3-digit numbers from user. Print the difference between the one’s digit and hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s digit
// Example: Input: 856 978 – Output: 1
// Input: 128 365 - Output: 2
#include <stdio.h>
int main(){
    int num1,num2,tens_num1,tens_num2,dif;
    printf("enter two 3digit numbers:");
    scanf("%d%d",&num1,&num2);
    if(((num1<-99&&num1>-1000)||(num1>99&&num1<1000))&&((num1<-99&&num1>-1000)||(num2>99&&num2<1000))){
        tens_num1=((num1/10)%10);
        tens_num2=((num2/10)%10);
        if(tens_num1>tens_num2){
            dif=(((num1)/100)-(num1%10));
            printf("%d",dif);
        }
        else if(tens_num2>tens_num1){
            dif=(((num2/100)-(num2%10)));
            printf("%d",dif);
        }
        else{
            printf("both are same!");
        }
    }
    else{
        printf("enter a valid two 3digit numbers");
    }
    return 0;
}
// ======================================================================================
// Question:35 Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the numbers. Print the sum of all the digits of the number whose sum of one’s and hundred’s digits is bigger.
// Example: Input: 856 978 – Output: 24
// Input: 128 365 - Output: 11
#include <stdio.h>
int main(){
    int num1,num2,sum1,sum2,rim,res=0;
    printf("enter two 3digit numbers:");
    scanf("%d%d",&num1,&num2);
    if(((num1<-99&&num1>-1000)||(num1>99&&num1<1000))&&((num2<-99&&num2>-1000)||(num2>99&&num2<1000))){
        sum1=((num1%10)+(num1/100));
        sum2=((num2%10)+(num1/100));
        if(sum1>sum2){
            while(num1>0){
                rim=num1%10;
                res=res+rim;
                num1=num1/10;
            }
            printf("%d",res);
        }
        else if(sum2>sum1){
            while(num2>0){
                rim=num2%10;
                res=res+rim;
                num2=num2/10;
            }
            printf("%d",res);
        }
        else{
            printf("both sums of 1th and 100th places of two nums are same!");
        }
    }
    else{
        printf("enter two valid 3digit numbers!");
    }
    return 0;
}
// ======================================================================================
