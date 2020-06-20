/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: MIGUEL
 *
 * Created on 20 de junio de 2020, 05:14 PM
 */
#include<iostream>
#include <cstdlib>
#include"GestionBank.h"
using namespace std;

GestionBank * gestion;
/*
 * 
 */

void Setup(){
    
    gestion = new GestionBank();
    gestion->Addcustomer("12","Sebastian","Joya","320082");
    gestion->Addcustomer("11","Maria","Lopez","311232");
    gestion->Addcustomer("11","Luna","Diaz","320082");
    gestion->Addaccount("12","11111",400000);
    gestion->Addaccount("11","22222",100000);
}

void addCustomers(){
    
    Setup();
    for(Account*acc:gestion->getAccount()){
        
        cout<<acc->toString()<<"=>"<<acc->getCustomer()->getFirstname()<<endl;
    }
}

void addAccount(){
    
    Setup();
    if(gestion->Addaccount("12","33333",500000)){
        cout<<"Agregada con exito..."<<endl;
    }else{
        cout<<"No se pudo agregar cuenta..."<<endl;
    }
    
    for(Account * acc: gestion->getAccount()){
        cout<<acc->toString()<<"=>"<<acc->getCustomer()->getFirstname()<<endl;
    }
}

void consign(){
    if(gestion->Consign("33333",200000)){
        cout<<"Consignacion exitosa..."<<endl;
    }else{
        
        cout<<"ERROR..."<<endl;
    }
    
    for(Account * acc: gestion->getAccount()){
        cout<<acc->toString()<<"=>"<<acc->getCustomer()->getFirstname()<<endl;
    }
    
}

void WithDraw(){
    
    if(gestion->Withdraw("33333",600000)){
        cout<<"Retiro con exito..."<<endl;
    }else{
        cout<<"Retiro Fallido..."<<endl;
    }
    
    for(Account * acc:gestion->getAccount()){
        
        cout<<acc->toString()<<"=>"<<acc->getCustomer()->getFirstname()<<endl;
        
    }
}

void Transfer(){
    
    if(gestion->Transfer("11111","22222",200000)) {
        cout<<"Transaccion Exitosa"<<endl;
    }else{
        cout<<"Transaccion Invalida"<<endl;
    }

    for(Account * acc:gestion->getAccount()){
        
        cout<<acc->toString()<<"=>"<<acc->getCustomer()->getFirstname()<<endl;
        
    }
}
int main(int argc, char** argv) {

    addCustomers();
    addAccount();
    consign();
    WithDraw();
    Transfer();
    return 0;
}

