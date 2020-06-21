/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Runner.cpp
 * Author: Johann Sebastian Joya Beltran
 *          201711476
 * 
 * Created on 21 de junio de 2020, 12:02 AM
 */

#include "Runner.h"
#include<sstream>

Runner::Runner() {
}

Runner::Runner(string id, string name, short int age, float time) {
    
    Runner::id = id;
    Runner::name = name;
    Runner::age = age;
    Runner::time = time;
}

void Runner::setId(string id){
    Runner::id = id;
}

void Runner::setName(string name){
    Runner::name = name;
}

void Runner::setAge(short int age){
    Runner::age = age;
}

void Runner::setTime(float time){
    Runner::time = time;
}

string Runner::getId(){
    return id;
}

string Runner::getName(){
    return name;
}

short int Runner::getAge(){
    return age;
}

float Runner::getTime(){
    return time;
}

string Runner::parseString(short int value){
    
    ostringstream aux;
    aux<<value;
    
    return aux.str();
}

string Runner::toString(){
    return "Id Runner = > " + id + " Name Runner = > " + name + " Age Runner = > " + parseString(age) + " Time Runner " + parseString(time) + "\n";
}
Runner::~Runner() {
}

