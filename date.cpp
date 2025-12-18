#include "date.h"
#include <iostream>

Date::Date(int years, int month, int day) {
    years_=years;
    if(month>0 && month <13){
    month_ = month;}
    else{ std::cout<<"Erreur le mois saisie n'est pas valide"<<std::endl; }
    if(month==2){
        if(day>0 && day<=28){
            day_ = day;
        }
            else{ std::cout<<"Erreur le jour saisie n'est pas valide"<<std::endl; }
    }
    else if(month==4 || month==6 || month==9 || month==11){
        if(day>0 && day<=30){
            day_ = day;
        }
        else{ std::cout<<"Erreur le jour saisie n'est pas valide"<<std::endl; }
    }
    else{
        if(day>0 && day<=31){
            day_ = day;
        }
        else{ std::cout<<"Erreur le jour saisie n'est pas valide"<<std::endl; }

    }
}

 void Date::afficher(){
    std::cout<<day_<<"/"<<month_<<"/"<<years_<<std::endl;
   }

int Date::years()  {
	return years_;
}

int Date::month()  {
	return month_;
}

int Date::day()  {
	return day_;
}

