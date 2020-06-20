/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Customer.cpp
 * Author: MIGUEL
 * 
 * Created on 20 de junio de 2020, 05:17 PM
 */

#include "Customer.h"

Customer::Customer() {
}

Customer::Customer(string idcustomer, string firstname, string lastname, string phone) {

    Customer::Idcustomer = idcustomer;
    Customer::firstname = firstname;
    Customer::lastname = lastname;
    Customer::phone = phone;
    
}

string Customer::getId(){
    
    return Idcustomer;
}

string Customer::getFirstname(){
    
    return firstname;
}

string Customer::getLastname(){
    
    return lastname;
}

string Customer::getPhone(){
    
    return phone;
}

void Customer::setId(string id){
    
    this->Idcustomer = id;
}

void Customer::setFirstname(string firstname){
    
    this->firstname = firstname;
}

void Customer::setLastname(string lastname){
    
    this->lastname = lastname;
}

void Customer::setPhone(string phone){
    
    this->phone = phone;
}

void Customer::Addaccount(Account * account){
    
    accounts.push_back(account);
}

vector<Account*> Customer::getAccounts(){
    
    return vector<Account*>(Customer::accounts);
}

string Customer::toString(){
    
    return "Id Customer => " + Idcustomer + " First Name => " + firstname +  " Last Name => " + lastname +  " Phone => " + phone + "\n";
}

Customer::~Customer() {
    
    for(Account * acc: accounts){
        
        delete(acc);
    }
}
