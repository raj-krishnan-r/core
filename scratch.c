#include <stdio.h>
struct Person{
char name[50];
char ssid;
};

void feed(){
struct Person Appu;
printf("Your Name : ");
//fgets(Appu.name,sizeof(Appu.name),stdin);
scanf("%s",&App.name);
Appu.ssid=1;
puts(Appu.name);
int k = 0;
while(k<strlen(Appu.name)){
printf("%c is at %p \n",*(Appu.name+k),Appu.name+k);
k++;
}
}
void seed(){
char pointer[50];
printf("Enter the pointer : ");
scanf("%s",&pointer);
printf("%c",*pointer);
}

int main(){
int i = 0;
do
{
printf("1. Feed \n");
printf("2. Seed \n");
int option;
scanf("%d",&option);
switch(option){
case 1:{
feed();
break;
}
case 2:{
seed();
break;
}
default:
printf("invalid");
i=1;
}
}while(i==0);
return 0;
}
