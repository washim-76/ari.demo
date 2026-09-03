#include<iostream>
using namespace std;
   int main(){
    float a,b;
    int choice;
cout<<"enter two numbers:";
cin>>a>>b;
cout<<"\n1.addition";
cout<<"\n2.substraction";
cout<<"\n3.multiplication";
cout<<"\n4.division";

cout<<"\n enter ur choice:";
cin>>choice;
 
switch(choice){
    case 1:
          cout<<"sum="<<a+b;
          break;
    case 2:
          cout<<"diff="<<a-b;
          break;
    case 3:
          cout<<"product="<<a*b;
          break;
    case 4:
        if(b!=0)
         cout<<"division="<<a/b;
     else
         cout<<"not possible";
        break;
         
        default:
               cout<<"invalid choice";
        }
        return 0;
   } 
