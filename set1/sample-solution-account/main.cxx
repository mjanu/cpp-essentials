#include"account.h"
#include<iostream>

int main() {
  Account a1(1001,"Lippman",8000.0);
  std::cout << a1.getCustomerId() << "\n";
  std::cout << a1.getCustomerName() << "\n";
  std::cout << a1.getBalance() << "\n";
  a1.credit(2000.0);
  a1.debit(2800.00);
  std::cout << a1.getBalance() << "\n";
  a1.display();
  
  Account a2(1002,"Scott");
  std::cout << a2.getBalance() << "\n";
  a2.credit(3000.0);
  a2.debit(4200.00);
  std::cout << a2.getBalance() << "\n";
  a2.display();
  
  return 0;
}
