/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GestionBank.h
 * Author: MIGUEL
 *
 * Created on 20 de junio de 2020, 05:17 PM
 */

#ifndef GESTIONBANK_H
#define GESTIONBANK_H
#include<string>
#include<vector>

#include "Account.h"
#include "Customer.h"
using namespace std;

class GestionBank {

public:
    GestionBank();
    Customer * findCustomer(string);
    bool Addcustomer(string,string,string,string);
    Account * Findaccount(string);
    bool Addaccount(string,string,double);
    bool Consign(string,double);
    bool Withdraw(string,double);
    bool Transfer(string,string,double);
    vector<Account*> getAccount();
    vector<Customer*>getCustomer();
    virtual ~GestionBank();

private:

    vector<Account*>account;
    vector<Customer*>customers;
};

#endif /* GESTIONBANK_H */

