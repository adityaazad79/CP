// #include <stdio.h>

// int g(int p){printf("%d",p);return p;}
// int h(int q){printf("%d",q);return q;}

// void f(int x, int y){
//     g(x);
//     h(y);
// }

// int main()
// {
//     f(g(10),h(20));

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double a[2]={20.0,25.0},*p,*q;
//     p=a;
//     q=p+1;
//     printf("%d,%d",(q-p),(*q-*p));

//     return 0;
// }

#include <stdio.h>

int g(int p){printf("%d",p);return p;}
int h(int q){printf("%d",q);return q;}

void f(int x,int y){
	g(x);
	h(y);
}

int main(){
	f(g(10),h(20));

	return 0;
}