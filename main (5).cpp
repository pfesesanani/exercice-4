#include <iostream>
#include <string>
using namespace std;

int main()
{
    char rep='y';
 do{
  int z=5;
  std:: cout<<"menu 1 to 5"<<std::endl;
  std:: cout<<"1 addition"<<std::endl;
  std:: cout <<"2 subtraction"<<std:: endl;
  std:: cout<<"3 multiplecation "<<std:: endl;
  std::cout << "4 division" << std::endl;
  std::cout << "5 modulus" << std::endl;
  std::cin>>z;
  switch (z){
      case 1:
          int add1;
          int add2;
          int sum;
          std::cout << "enter 1st variable" <<std:: endl;
         std:: cin >> add1;
          
          std::cout << "enter second variable" <<std:: endl;
          std::cin >> add2;

          sum = add2 + add1;
          std::cout << sum << "this is sum" << std::endl;

 
        
       

          
            
      
      
      break;
    
      case 2:

          int sub1;
          int sub2;
          int sub;
          std::cout << "enter 1st variable" << std::endl;
          std::cin >> sub1;

          std::cout << "enter second variable" << std::endl;
          std::cin >> sub2;

          sub = sub2 - sub1;
          std::cout << sub << "this is sub answer" << std::endl;

      
          

     
      break;
    
      case 3:
          int mut1;
          int mut2;
          int mut;
          std::cout << "enter 1st variable" << std::endl;
          std::cin >> mut1;

          std::cout << "enter second variable" << std::endl;
          std::cin >> mut2;

          mut = mut2*mut1;
          std::cout << mut<< "this is multi answe" << std::endl;

         
         
     
      break;
      case 4:
          int div1;
          int div2;
          int divs;
          std::cout << "enter 1st variable" << std::endl;
          std::cin >> div1;

          std::cout << "enter second variable" << std::endl;
          std::cin >> div2;

          divs = div2/div1;
          std::cout << divs << "this is division answer" << std::endl;

         
    
          break;
      case 5:
          int mod1;
          int mod2;
          int mod;
          std::cout << "enter 1st variable" << std::endl;
          std::cin >> mod1;

          std::cout << "enter second variable" << std::endl;
          std::cin >> mod2;

          mod = mod2%mod1;
          std::cout << mod << "this is modulus answer" << std::endl;

         if(mod1==0){ 
            std::cout<<"the second integer is zero divided by zero"<<std::endl;
         }
         
          break;

  }
std::cout<<"wanna continue press y to end press n"<<std::endl;
std::cin>>rep;}
while(rep=='y' || rep=='Y');
    return 0;
    do {
        std::cout<<"finish"<<std::endl;
        break;
    }while(rep=='n'||rep=='N');

}