int f1(int *x){
 *x=*x*2;
 printf("*x=%d\n", *x);
 return *x;
}
void f2(int x){
 x=f1(&x);
 x=x*2;
 printf("x=%d\n", x);
}
void main(){
 int x=5;
 f2(x);
 printf("x=%d\n", x);
}

