#include<stdio.h>
struct student
{
  int id;
  int age;
  int marks;
};
int main()
{
  int z;
  struct student S[5];
  for(z=0;z<5;z++)
  {
   printf("Enter Student%d ID:\n",z+1);
  scanf("%d",&S[z].id);
  printf("Enter Your age:\n");
  scanf("%d",&S[z].age);
  printf("Enter your marks:\n");
  scanf("%d",&S[z].marks);
  int i=0;
  if((S[z].age>20)&&(S[z].marks>=0 && S[z].marks<=100))
  {
    i=1;
    printf("Verification successful\n");
  }
  else
  {
    printf("Student data is invalid\n");
    if(S[z].age<=20)
        printf("Invalid age\n");
    if(S[z].marks<0||S[z].marks>100)
        printf("Invalid Marks\n");
    continue;
  }
if((i==1)&&(S[z].marks>=65))
{
  printf("You are qualified for admission\n");
}
else
printf("Sorry,you are not eligible for admission because of invalid marks.\n");
}
}
