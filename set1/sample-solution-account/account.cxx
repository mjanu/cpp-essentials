#include<iostream>
#include "account.h"
Account::Account() :
        m_accNumber(0), m_accName(""), m_balance(0) {

}
Account::Account(int id, std::string name, double bal) :
        m_accNumber(id), m_accName(name), m_balance(bal) {

}
Account::Account(int id, std::string name) :
        m_accNumber(id), m_accName(name), m_balance(5000.0) {

}
Account::Account(const Account& ref) :
        m_accNumber(ref.m_accNumber), m_accName(ref.m_accName),  
                                              m_balance(ref.m_balance) {

}
void Account::credit(double amount) {
    m_balance += amount;
}
void Account::debit(double amount) {
    //min balance check
    m_balance -= amount;
}
int Account::getCustomerId() const {
    return m_accNumber;
}
std::string Account::getCustomerName() const {
    return m_accName;
}
double Account::getBalance() const {
    return m_balance;
}
void Account::display() const {
    std::cout << m_accNumber << "," << m_accName << "," 
                                         << m_balance << "\n";
}
