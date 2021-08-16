#include<iostream>
#include <stdio.h>
using namespace std;
#define scanf "%s is a string"
void f(char fname[5])
{
  fname+=7;
  cout<<fname<<endl;
 
}

int main(){
 char fname[]="Time 4 education";
 f(fname);
 int x=2<<2;
 cout<<x;


}