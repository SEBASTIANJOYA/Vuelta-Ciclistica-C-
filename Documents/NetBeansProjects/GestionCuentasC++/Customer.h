/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Customer.h
 * Author: MIGUEL
 *
 * Created on 20 de junio de 2020, 05:17 PM
 */


#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<string>
#include<vector>

#include "Account.h"
using namespace std;

class Account;
//Archivo de cabecera
//Implementacion de la clase Cliente
class Customer {
    
public:
    
    //implementacion de los metodos publicos.
    Customer();
    Customer(string,string,string,string);
    void setId(string);
    void setFirstname(string);
    void setLastname(string);
    void setPhone(string);
    string getId();
    string getFirstname();
    string getLastname();
    string getPhone();
    void Addaccount(Account*);
    vector<Account*> getAccounts();
    string toString();
    virtual ~Customer();
    
private:

    //Declaracion de los atributos privados de la clase Cliente
    
    string Idcustomer;
    string firstname;
    string lastname;
    string phone;
    vector<Account*>accounts;
    
};

#endif /* CUSTOMER_H */

