/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Customer.cpp
 * Author: Johann sebastian Joya Beltran
 * 201711476
 * 
 * Created on 20 de junio de 2020, 05:17 PM
 */

#include "Customer.h"

//
Customer::Customer() {
}

//Constructor le agrego los valores.
Customer::Customer(string idcustomer, string firstname, string lastname, string phone) {

    Customer::Idcustomer = idcustomer;
    Customer::firstname = firstname;
    Customer::lastname = lastname;
    Customer::phone = phone;
    
}

//Implementacion de los metodos GET Y SET.
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

//Implementacion del metodo agregar cuenta

void Customer::Addaccount(Account * account){
    
    accounts.push_back(account);
}

//implmento metodo que me retorna las cuentas 
//que tiene el cliente
vector<Account*> Customer::getAccounts(){
    
    return vector<Account*>(Customer::accounts);
}

//metodo que concateno los atributos de la clase
string Customer::toString(){
    
    return "Id Customer => " + Idcustomer + " First Name => " + firstname +  " Last Name => " + lastname +  " Phone => " + phone + "\n";
}

Customer::~Customer() {
    
    for(Account * acc: accounts){
        
        delete(acc);
    }
}
