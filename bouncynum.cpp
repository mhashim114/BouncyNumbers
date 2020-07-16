/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <ctime>
using namespace std;
bool Bouncy(int num);
 
int main()
{
 
 
   
     int bouncy = 0;
     for(int number = 100;;number++){
      
     if(Bouncy(number))
          bouncy++;
           
          if(bouncy * 100 / number == 99){
          cout<<"Least number is\t"<<number<<endl;
         
          exit(0);
          }
           
      
     }
}
 
bool Bouncy(int num){
bool decreasing = false, increasing= false;
int digit = num % 10;
num =num/10;
while(num != 0){
 
if(num % 10 < digit)
increasing = true;
 
else if(num % 10 > digit)
decreasing = true;
 
digit = num % 10;
num /= 10;
}
 
return decreasing == true && increasing == true;
}
