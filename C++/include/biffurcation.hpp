#ifndef BIFFUCATION_H
#define DIFFURCATION_H
#include<cmath>
#include<iostream>
#include "../include/rungekutta4thSquare.hpp"


std::vector<std::vector<double>> biffurcation(std::vector<double>(*function)(std::vector<double>, double),
                                            double paramRange[2], std::vector<double> initialCond, 
                                            double paramStep, double integrationStep, int systemDimension);
void printBiffucationToFile(std::vector<std::vector<double>>& matrix, std::string fileName);

#endif