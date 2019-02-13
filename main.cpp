#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string item;
  int count = 0;
  do{ 
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
    if(input == 'A'){
      cout<<"Enter Grocery: "<<endl;
      cin>>item;
      list[count] = item;
      count++;
    }
  }while(input != 'Q' && count != 4);
  for(int i =0; i<count; i++){
    cout<<list[i]<<endl;
  }
  return 0;
}
