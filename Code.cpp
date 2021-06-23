#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<" -----------------------------------------------------";
    cout<<"\n    Message : 🍁For exit press [E or e]      \n              🍁For clear press [C or c]     \n";
    cout<<"              🍁Enter operation like [+,-,*,/,%,a^b] "<<endl<<"              🍁Enter number like [4.5 , -5 , 87] "<<endl;
    cout<<" -----------------------------------------------------"<<endl;
    float a,b,d;
    char ch,n;
    int temp=0,i;
   
    while(true)
    {
      
      if(temp==0)
      {
        cout<<"\n🍁First number : ";
        cin>>a;
        temp=1;
      } 
      else
      {
        a=d;
      }
      cout<<"🍁Enter operation : ";
      cin>>ch;
      if(ch!='c'&&ch!='C'&&ch!='E'&& ch!='e')
      {
      cout<<"🍁Second number : ";
      cin>>b;
      cout<<"----------------------";
      }
      
 
    switch(ch)
    {
      case '+':d=a+b;
               cout<<"\n💮Result = "<<d;
               break;
      case '-':d=a-b;
               cout<<"\n💮Result = "<<d;
               break;
      case '*':d=a*b;
               cout<<"\n💮Result = "<<d;
               break;
      case '/':if(b==0){
                cout<<"\n😐zero is not exist \n😐program is terminated"<<endl;
                return 0;
               }
               d=a/b;
               cout<<"\n💮Result = "<<d;
               break;
      case '%':d=fmod(a,b);
               cout<<"\n💮Result = "<<d;
               break;
      case '^':d=1;
               for(i=0;i<b;i++){
                d=d*a;
               } cout<<"\n💮Result = "<<d;
               break;
      case 'c':cout<<"\n ----------** Now previous values cleared **----------\n";
               temp=0;
               break;
               
      case 'e':cout<<"\n ---------- 🌟Thanks for using calculator🌟 ----------\n \t \t \t \t \t \t \t \t \t \t ✨✨Bye Bye!!!\n\n";
               return 0;
      case 'C':cout<<"\n ----------** Now previous values cleared **----------\n";
               temp=0;
               break;
               
      case 'E':cout<<"\n ---------- 🌟Thanks for using calculator🌟 ----------\n \t \t \t \t \t \t \t \t \t \t ✨✨Bye Bye!!!\n\n";
               return 0;
      default:cout<<"\n😐Entered value is out of range \n😐program is terminated\n";
    
    
    }
     cout<<endl<<endl<<endl;
    }
}
