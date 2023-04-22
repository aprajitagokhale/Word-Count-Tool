#include <iostream>
#include <string>
using namespace std;

int main()
{
  char str[100];
  int count=0,alphabets=0,num=0,space=0,special=0;
  cout<<"Enter Text: "<<endl;
  gets(str);
  for(int i=0;str[i] != '\0'; i++) //check Words
  {
    if(str[i]==' ')
     count++;
  }

  for(int i=0; str[i] != '\0'; i++)
  {
        
    if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) // check Alphabets
    {  
                alphabets++;
    }
    else if(str[i]>='0' && str[i]<='9') //check Numbers
    {  
                num++;
    }
    else if(str[i]==' ') //check Spaces
    {
                space++;
    }
    else
    {
        special++; //check Special Characters
    }
 }
  cout<<"Word Count: "<<count +1<<endl;
  cout<<"Alphabets: "<<alphabets<<" | "<<"Numbers: "<<num<<" | "<<endl;
  cout<<"Special Characters: "<<special<<" | "<<"Space: "<<space<<endl;
  return 0;
}