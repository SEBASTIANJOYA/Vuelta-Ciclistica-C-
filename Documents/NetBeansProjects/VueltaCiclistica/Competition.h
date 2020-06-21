/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Competition.h
 * Author: Johann Sebastian Joya Beltran
 *
 * Created on 21 de junio de 2020, 12:02 AM
 */

#ifndef COMPETITION_H
#define COMPETITION_H
#include<string>
#include<vector>

#include "Runner.h"
using namespace std;

class Competition {

public:
    Competition();
    Competition(string,string);
    void setId(string);
    void setDescription(string);
    string getId();
    string getDescription();
    Runner* findRunner(string);
    bool addRunner(string,string,short int,float);
    vector<Runner*>getRunner();
    virtual ~Competition();
    
private:

    string id;
    string description;
    vector<Runner *>runner;
};

#endif /* COMPETITION_H */

