#include<stdio.h>
int main()
{

long long int num, starting_num, ending_num, sum=0;

printf("enter the starting number: ");
scanf("%d",&num);
printf("enter the ending number: ");
scanf("%d",&ending_num);

starting_num = num;

    while(num<=ending_num)
        {if(num%2==0)
            sum+= num;
        num++;}

printf("sum of even no. from %d to %d is %d",starting_num,ending_num,sum);

 return 0;
}
