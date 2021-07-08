#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include<string>

class Account {
  
  int m_accNumber;
  std::string m_accName;
  double m_balance;
  
  public:
  Account();
  Account(int,std::string,double);
  Account(int,std::string);
  Account(const Account&);
  
  void debit(double);
  void credit(double);
  
  int getCustomerId() const;
  std::string getCustomerName() const;
  double getBalance() const;
  void display() const;                   //No test case required for display
  
};

#endif
