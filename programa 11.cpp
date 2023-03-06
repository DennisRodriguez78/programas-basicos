#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
  int i,j,num,num2,res,x[10];
  cout << "Dame numero: ";
  cin >> num;
  num2 = num;
  for(i = 1 ; i <= num ; i++){ 
   num2 = num2 / 2;
      if(num2 == 1)
         break;
  }
  for(j = 1 ; j <= i; j++){ 
      res = num % 2;
      if(res == 1)
         x[j] = 1;
      else if(res == 0)
              x[j] = 0;
      num = num / 2;
  }
  cout << "1"; 
                  
  for(j = i ; j > 0 ; j--) 
      cout << x[j];
  cout << endl;
  system("PAUSE");
  return 0;
  }
