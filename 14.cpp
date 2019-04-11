#include <iostream>  


int main()
{

int a,b,c; 

printf("三角形的三邊長一定滿足任兩邊邊長和大於第三邊,輸入三個數值判斷是否能拼成一個三角形\n");
printf("請輸入三邊長的長度：");

scanf("%d%d%d",&a,&b,&c);

if( a+b>c && a+c>b && b+c>a ) 

{
printf("能\n");
}

else

{
printf("否");   
}

system("pause"); 

return 0; 

}
