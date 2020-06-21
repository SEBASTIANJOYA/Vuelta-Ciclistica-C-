/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Handling.h
 * Author: Johann Sebastian Joya
 *
 * Created on 21 de junio de 2020, 12:03 AM
 */


#ifndef HANDLING_H
#define HANDLING_H
#include<string>
#include<vector>

#include "Competition.h"

using namespace std;

class Handling {

public:
    
    Handling();
    Competition * findCompetition(string);
    bool addCompetition(string,string);
    vector<Competition *>getCompetition();
    bool AddRun(Competition*,string,string,short int,float);
    virtual ~Handling();
    
private:

    vector<Competition*>competitios;
    
};

#endif /* HANDLING_H */

