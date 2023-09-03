/*
#include <stdio.h>

int main(void){
int x,y;
int *ptr;
x=10;
y=15;
printf("%d\n%d\n",x,y);
ptr=&x;
*ptr=20;
printf("%d\n",x);
}
*///................................................................................................

/*
#include <stdio.h>
int main(void){
int x,y;
int *ptr;
x=10;
y=15;
printf("%d\n%d\n",x,y);
ptr=&x;
*ptr=20;
printf("%d\n",x);
printf("%p",ptr);

}
*///.................................................................................
/*
#include <stdio.h>
int main(void){
int x,y;
int *ptr;
x=10;
y=15;
printf("%d\n%d\n",x,y);
ptr=&x;
*ptr=20;
printf("%d\n",x);
printf("%p\n",ptr);//postfeix the value show after the line
printf("%p\n",ptr++);// prefeix the value show in the same line
printf("%p\n",++ptr);

}
*/
/*
#include <stdio.h>
int main(void){
char x,y;
char *ptr;
x=10;
y=15;
printf("%d\n%d\n",x,y);
ptr=&x;
*ptr=20;
printf("%d\n",x);
printf("%p\n",ptr);//postfeix the value show after the line
printf("%p\n",ptr++);// prefeix the value show in the same line
printf("%p\n",++ptr);

}
*///...................................................................
/*#include <stdio.h>
int main(void){

int X=0x11223344;
char*ptr=(char*)&X; //type cast
if (*ptr=0x44){
    printf("little endian");

}
else{
    printf("big endian");
}

}
*///...............................................................
/*
#include <stdio.h>
int temp ;
int main(void){

int x=10;
int y= 15;
printf("%d\n%d\n",x,y);
swap(&x,&y);
printf("%d\n%d\n",x,y);

}
void swap(int* x,int* y){
int temp=*x;
*x=*y;
*y= temp;
}
*///...............................................................
/*#include <stdio.h>
#define x 100
int main(void){
printf("%d",x);
int x=50; // L value , R value
printf("%d",x);
}//u will get error here
*///................................................
/*#include <stdio.h>
const int x=10;
int main (void){
int*ptr=&x;
*ptr=20;
printf("%d",x);
}
*///...........................................................
/*#include <stdio.h>
int main(void){
int *ptr;
ptr++;
printf("%p",&ptr);
}
*///............................................................
/*#include <stdio.h>
#define const x=10
int main(){
int x =10;
void *p;
p++;
printf("%d\n",*(int*)p);
return 0;
}
*///............................................................
/*
#include<stdio.h>
int main(void){
int x=10;
int**ptr;
int* p1;
ptr=&p1;
p1=&x;
**ptr=16;
printf("%d",x);


}
*///...............................................................

/*
#include<stdio.h>
int main(void){
int x=25;
void print(int x){
printf("%d",x);
}
void(*ptr)(int x);
ptr=& print;
ptr(x);

}
*///....................................................

#include<stdio.h>
void Add (int x ,int y);
void sub (int x,int y);
void calc (void(*ptr)(int x, int y), int x,int y);
int main(void){
int x,y;
x=10;
y=5;
calc (Add,x,y);
calc (sub,x,y);
}
void Add (int x ,int y){
printf("%d\n",x+y);
}
void sub (int x,int y){
printf("%d\n", x-y);
}
void calc (void(*ptr)(int x, int y), int x,int y){
ptr( x, y);

}
