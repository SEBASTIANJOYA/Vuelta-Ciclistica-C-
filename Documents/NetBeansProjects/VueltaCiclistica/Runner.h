/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Runner.h
 * Author: Johann Sebastian Joya Beltran
 *          201711476
 *
 * Created on 21 de junio de 2020, 12:02 AM
 */


#ifndef RUNNER_H
#define RUNNER_H
#include<string>
using namespace std;

class Runner {
public:
    Runner();
    Runner(string,string,short int,float);
    void setId(string);
    void setName(string);
    void setAge(short int);
    void setTime(float);
    string getId();
    string getName();
    short int getAge();
    float getTime();
    string parseString(short int);
    string toString();
    virtual ~Runner();
    
private:

    string id;
    string name;
    short int age;
    float time;
    

};

#endif /* RUNNER_H */
