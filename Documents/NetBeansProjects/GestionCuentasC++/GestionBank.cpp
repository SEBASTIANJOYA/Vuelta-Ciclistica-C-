/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GestionBank.cpp
 * Author: MIGUEL
 * 
 * Created on 20 de junio de 2020, 05:17 PM
 */


#include "GestionBank.h"

GestionBank::GestionBank() {
}

Customer * GestionBank::findCustomer(string id){
    for(Customer* cust:customers){
        if(cust->getId().compare(id) == 0){
        
            return cust;
        }
    }
    return NULL;
}

bool GestionBank::Addcustomer(string id,string firstname, string lastname, string phone){
    if(!findCustomer(id)){
        customers.push_back(new Customer(id,firstname,lastname,phone));
        return true;
    }
    
    return false;
}

Account * GestionBank::Findaccount(string number){
    
    for(Account* accou: account){
        if(accou->getNumber().compare(number) == 0){
            
            return accou;
        }
    }
    
    return NULL;
}

bool GestionBank::Addaccount(string idcustomer, string number, double value){

    Customer * customer = findCustomer(idcustomer);
    if(customer){
        if( !Findaccount(number)){
            Account * acc = new Account(customer,number,value);
            account.push_back(acc);
            customer->Addaccount(acc);
            return true;
        }
        return false;
    }
    return false;  
}

bool GestionBank::Consign(string number,double value){
    Account * acc = Findaccount(number);
    if(acc){
        acc->Consigment(value);
        return true;
    }
    
    return false;
}

bool GestionBank::Withdraw(string number,double value){
    Account * acc = Findaccount(number);
    if(acc){
        acc->Withdraw(value);
        return true;
    }
    
    return false;
}

bool GestionBank::Transfer(string origen, string destino, double value){

    Account * accountorigen = Findaccount(origen);
    Account * accountdestino = Findaccount(destino);
    
    if(accountorigen && accountdestino){
        
        return accountorigen->Transferir(accountdestino,value);
    }
    
    return false;
}

vector<Account *> GestionBank::getAccount(){
    
    return vector<Account *>(account);
}


vector<Customer *> GestionBank::getCustomer(){
    
    return vector<Customer *>(customers);
}
GestionBank::~GestionBank() {
}

