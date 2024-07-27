#ifndef VENDING_MACHINE_H_INCLUDED
#define VENDING_MACHINE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float selectHotCoffee();
float selectColdCoffee() ;
float selectTea();
float selectCookie();
void saveActivity(int num_customers, int num_hot_coffees, int num_cold_coffees, int num_teas, int num_cookies) ;
void displayActivity(int num_customers, int num_hot_coffees, int num_cold_coffees, int num_teas, int num_cookies) ;
int checkPassword() ;
void loadActivity(int *num_customers, int *num_hot_coffees, int *num_cold_coffees, int *num_teas, int *num_cookies) ;

#endif

