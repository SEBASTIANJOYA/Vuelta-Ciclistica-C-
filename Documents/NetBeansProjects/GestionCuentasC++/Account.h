/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Account.h
 * Author: Johann Sebastian Joya Beltran
 * 201711476
 *
 * Created on 20 de junio de 2020, 05:16 PM
 */

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>

#include "Customer.h"

using namespace std;
class Customer;
//Archivo cabecera.
//implementacion de la clase cuenta.
class Account {
    
public:
    
    //implementacion de los metodos publicos.
    const static double minresidue;
    Account();
    Account(Customer*,string,double);
    Customer * getCustomer();
    void setCustomer(Customer *);
    string getNumber();
    double getResidue();
    int getWithdraw();
    int getConsigments();
    void setNumber(string);
    void setResidue(double);
    void Consigment(double);
    bool Withdraw(double);
    bool Transferir(Account*,double);
    string parseString(double);
    string toString();
    virtual ~Account();
    
private:

    
    //Declaracion de los atributos privados de la clase Cuenta

    string number;
    double residue;
    int withdrawals;
    int consigments;
    Customer* customer;
    
};

#endif /* ACCOUNT_H */

