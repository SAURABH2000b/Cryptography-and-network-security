#include<bits/stdc++.h>
using namespace std;
int add_modulo(int a, int b, int N){
    return (a+b)%N;
}
int mult_modulo(int a, int b, int N){
    return (a*b)%N;
}
int main(){
    int a=rand(), b=rand();
    a=a%1000;
    b=b%1000;
    int add_modulo_result = add_modulo(a,b,342);
    int mult_modulo_result = mult_modulo(a,b,342);
    cout<<"addition modulto is: "<<add_modulo_result<<"\n";
    cout<<"multiplication modulo is: "<<mult_modulo_result;
}
