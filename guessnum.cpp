#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
  int a,num,range;
  cout<<"enter range to guess the number\n";
  cin>>range;
  srand(time(0));
  a = rand()%range+1;
  cout << "enter number you wish within 0 and" <<range+1 <<endl;
  cin >> num;
  while (a != num)
  {

    if (a < num){
            cout<< "Too high,enter smaller number\n";
            cout<<"enter 0 to stop\n";
             cin>>num;
             if(num==0){
              cout<<"the number is " <<a<<" try again";
              break;
             }
    }
    else {
          cout << "Too low,enter bigger number\n";
          cout<<"enter 0 to stop\n";
             cin>>num;
             if(num==0){
              cout<<"the number is " <<a<<" try again";
              break;
             }
          
            }
  }
  if(num!=0)
  cout << "you've guessed the right number";
}