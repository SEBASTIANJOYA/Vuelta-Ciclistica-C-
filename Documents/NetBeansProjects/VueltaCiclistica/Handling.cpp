/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Handling.cpp
 * Author: Johann Sebastian Joya Beltran
 *          201711476
 * 
 * Created on 21 de junio de 2020, 12:03 AM
 */


#include "Handling.h"

Handling::Handling() {
}

Competition * Handling::findCompetition(string id){
    for(int i = 0; i<competitios.size();i++){
        if(competitios.at(i)->getId().compare(id) == 0){
            return competitios.at(i);
        }
    }
    return NULL;
    
}

bool Handling::addCompetition(string id,string description){
    if(!findCompetition(id)){
        competitios.push_back(new Competition(id,description));
        return true;
    }
    return false;
}

vector<Competition*> Handling::getCompetition(){
    return vector<Competition*>(competitios);
}

bool Handling::AddRun(Competition*competition,string id,string name,short int age, float time){
    if(competition->findRunner(id)){
        competition->addRunner(id,name,age,time);
        return true;
    }
    
    return false;
 }
Handling::~Handling() {
}

