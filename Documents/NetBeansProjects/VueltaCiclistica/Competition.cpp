/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Competition.cpp
 * Author: Johann Sebastian Joya Beltran
 *          201711476
 * 
 * Created on 21 de junio de 2020, 12:02 AM
 */

#include "Competition.h"

Competition::Competition() {
}

Competition::Competition(string id, string description) {
    setId(id);
    setDescription(description);
}

void Competition::setId(string id){
    
    Competition::id = id;
}

void Competition::setDescription(string desc){
    
    Competition::description = desc;;
}

string Competition::getId(){
    
    return id;
}


string Competition::getDescription(){
 
    return description;
}

Runner * Competition::findRunner(string id){
    for(int i = 0; i<runner.size(); i++){
        if (runner.at(i)->getId().compare(id) == 0) {

            return runner.at(i);
        }

    }
    return NULL;
}

bool Competition::addRunner(string id,string name, short int age, float time){
    if(!findRunner(id)){
        runner.push_back(new Runner(id,name,age,time));
        return true;
    }
    return false;
   
}

vector<Runner*> Competition::getRunner(){
    return vector<Runner*>(runner);
}
Competition::~Competition() {
}

