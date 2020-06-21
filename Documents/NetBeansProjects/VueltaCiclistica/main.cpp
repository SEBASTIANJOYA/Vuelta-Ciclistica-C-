/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Johann Sebastian Joya Beltran
 *          201711476
 *
 * Created on 21 de junio de 2020, 12:02 AM
 */


#include <cstdlib>
#include<string>
#include<iostream>
#include "Competition.h"
#include "Handling.h"
using namespace std;

Handling* handling;
Runner run;
/*
 * 
 */
void Setup(){
    
    handling = new Handling();
    handling->addCompetition("1","VUELTA ESPANA");
    handling->addCompetition("2","VUELTA LAVENIR");
    handling->addCompetition("3","TOUR FRANCIA");
    handling->addCompetition("4","GIRO ITALIA");
    
//    for(Competition *comp:handling->getCompetition()){
//        cout<<comp->getId()<<" - "<<comp->getDescription()<<endl;
        
 //   }
}

void AddRunner(){
    string idcompetencia;
    string id;
    string number;
    short int age;
    float time;
    cout<<"Digite id competencia"<<endl;
    cin>>idcompetencia;
    if(handling->findCompetition(idcompetencia)){
        cout<<"Digite id..."<<endl;
        cin>>id;
        cout<<"Digite number run..."<<endl;
        cin>>number;
        cout<<"Digite age..."<<endl;
        cin>>age;
        cout<<"Digite tiempo..."<<endl;
        cin>>time;
        if(handling->AddRun(handling->findCompetition(idcompetencia),id,number,age,time)){
            run.parseString(age);
            cout<<"Run agregado..."<<endl;
        }else{
            cout<<"Run ya existe..."<<endl;
        }
    }else{
        
        cout<<"No existe id de la competencia"<<endl;
    }
}

void Menu(){
    
    int option;
    do{
        cout<<"\n----Por favor digite una opcion----"<<endl;
        cout<<"\n\t1.Agegar Corredor\n"
              "\t2.Mostrar lista competidores \n"
              "\t3.Mostrar Clasificacion Generl \n" 
             "\t4.Anadir competencia \n"
              <<endl;
        
        cout<<"Opcion: ";
        cin>>option;
        switch(option){
            case 1:
                AddRunner();
                 break;
                
            case 2:
                break;
                
            case 3:
                break;
                
            case 4:
                break;
           
            default:
                break;
        }
        
        
        
    }while(option!=5);


}
int main(int argc, char** argv) {

    Setup();
    Menu();
    
    return 0;
}
