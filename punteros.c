#include <stdio.h>
void intercambia(int x,int y){
int z;
z=x;
x=y;
y=z;
}

void intercambiaPuntero(int *x,int *y){
int z;
z=*x;
*x=*y;
*y=z;
}

void main()
{
int x=7, y=13;
printf("sin punteros a=%d b=%d\n",x , y );
intercambia(x,y);

printf("a=%d b=%d\n",x, y );

printf("con punteros a=%d b=%d\n", x, y );
intercambiaPuntero(&x,&y);

printf("a=%d b=%d\n",x, y );

}