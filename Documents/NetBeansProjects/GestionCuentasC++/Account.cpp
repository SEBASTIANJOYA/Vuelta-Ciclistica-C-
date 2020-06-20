/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Account.cpp
 * Author: MIGUEL
 * 
 * Created on 20 de junio de 2020, 05:16 PM
 */
#include<sstream>
#include<string>
#include "Account.h"

using namespace std;

const double Account::minresidue = 100000;

//inicializo los valores del contructor.
Account::Account() {
    this->number = "";
    this->customer = NULL;
    this->residue = 0;
    this->consigments = 0;
    this->withdrawals = 0;
}

//implemento el constructor con sus respectivos valores
Account::Account(Customer * customer, string number, double residue) {
    
    setCustomer(customer);
    setNumber(number);
    setResidue(residue);
    this->consigments = 0;
    this->withdrawals = 0;
    
}

//implrmrntacion metodos GET Y SET

string Account::getNumber(){
    
    return number;
}

double Account::getResidue(){
    
    return residue;
}

int Account::getWithdraw(){
    
    return withdrawals;
}

int Account::getConsigments(){
    
    return consigments;
}

Customer * Account::getCustomer(){
    
    return customer;
}
void Account::setNumber(string number){
    
    Account::number = number;
}

void Account::setCustomer(Customer * customer){
    
    Account::customer = customer;
}

void Account::setResidue(double residue){
    
    Account::residue = residue;
}

//Implementacion del metodo para consignar
//recibe por parametro el valor a consignar
void Account::Consigment(double value){
 
    setResidue(getResidue() + value);
    consigments++;
} 


//Implementacion del metodo para retirar
//recibe por parametro el valor a retirar
bool Account::Withdraw(double value){
    if(value <= getResidue() - minresidue){
        setResidue(getResidue() - value);
        return true;
        
        withdrawals++;
    }
    return false;
}


//Implementacion del metodo para transferir
//recibe por parametro la cuenta a transferir y el valor a transferir
bool Account::Transferir(Account * account, double value){
    if(Withdraw(value)){
        account->Consigment(value);
        
        return true;
    }
    return false;
}

//implementacion del metodo que me convierte un numero en una cadena String
string Account::parseString(double value){
    ostringstream aux;
    aux<<value;
    
    return aux.str();
}

//implementacion del metodo para concatenar los atributos
string Account::toString(){
    
    return "Number Account => " + number + " Residue Account " + parseString(residue) + " WithDraw " + parseString(withdrawals) + " Consigments " + parseString(consigments) + "\n";
    
}

Account::~Account() {
}

