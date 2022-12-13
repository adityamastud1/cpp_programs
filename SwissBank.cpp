#include<iostream>
using namespace std;


class bank
{
  private:
  string name;
  int acc_no;
  int balance;
   
  public:
  void createacc()
   {
     cout << "enter your name:" << endl;
     cin >> name;                                          //make new account
     cout << "enter account number:" << endl;
     cin >> acc_no;
     cout << "enter starting balance in your account:" << endl;
     cin >> balance;
   }
   
  string viewname(int b)
   {
     return name;
   }

   int viewbal(int b)
   {
    return balance;
   }

  void deposit(int deposit)
   {                                                            //deposit money in your own account
     balance = balance + deposit;
   }

  void withdraw(int withdraw)
   {
     balance = balance + withdraw;             //withdraw
   }    

   int search(int a)
   {                                       //search for the entered account number
     if( a == acc_no)
     {
      return 1;
     }
     return 0;
   }                                       
   


};


int main()
{
  cout << "*****WELCOME TO THE SWISS BANK****" << endl;
  bank B[5];                               //create 5 bank accounts
  int i;                                  
  for(i=0; i<5; i++)
  {
    B[i].createacc();
    cout << endl;
  }

  
  int choice;
  
  do
  {
    cout << "\n\nwhich action would you like to perform?" << endl;
  cout << "1.view account details\n2.deposit money\n3.withdraw money\n4.transfer money\n5.exit "<< endl;
  cin >> choice;
  int check=0;
          
      
 switch (choice)
  {
    case 1:
      cout << "enter your account number:" << endl;
      int start;
      cin >> start;
      for(int j=0; j<5; j++)
      {                                //views account details
        if(B[j].search(start))
        {
          cout << "user's name is " << B[j].viewname(start) << " and bank balance is " << B[j].viewbal(start) << endl;
          check=1;
          break;
        }
       }
  
      if(!check){cout<<"invalid account number";}
      break;
      
    case 2:
      cout << "enter your account number:" << endl;
      cin >> start;
      cout << "enter amount to be deposited:";
      int d;
      cin >> d;                               //deposits amount
      for(int j=0; j<5; j++)
      {
        if(B[j].search(start))
        {
          B[j].deposit(d);
          cout << "your name is " << B[j].viewname(start) << " and bank balance is " << B[j].viewbal(start) <<endl;
          check=1;
          break;
        }
      }
      if(!check){cout << "invalid account number";}
      break;
      
    case 3:
      cout << "enter your account number:" << endl;
      cin >> start;
      cout << "enter amount to be withdrawn:";
      int w;
      cin >> w;                               //deposits amount
      for(int j=0; j<5; j++)
      {
        if(B[j].search(start))
        {
          B[j].deposit(w);
          cout << "your name is " << B[j].viewname(start) << "and bank balance is " << B[j].viewbal(start) <<endl;
          check=1;
          break;
        }
      }
        if(!check){cout << "invalid account number";}
        break;
    
    case 4:
      cout << "enter your account number:" << endl;
      cin  >> start;
      cout << "enter account number in which you want to transfer the money. Also, enter the money you want to transfer:" << endl;
      int frndacc,transfermoney;
      cin >> frndacc >> transfermoney; 
      for(int j=0; j<5; j++)             //finding the account of the person wanting to transfer
      {
        if(B[j].search(start))
        {
          for(int i=0; i<5; i++)
          {
            if(B[i].search(frndacc))
            {
              B[i].deposit(transfermoney);
              B[j].withdraw(transfermoney);
              cout << "amount transferred successfully. ";
            }
          }
        }
      }
    case 5:
      cout << "Thank you for banking with us.";
      break;                                    //knows he is broke af.. directly exits the bank
    default:                                      
      cout << "invalid option selected";
    


   }
  }while(choice!=6);

}

















