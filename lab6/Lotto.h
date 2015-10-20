#pragma once
#include <iostream>
#include <ctime>

#ifndef Lotto_h
#define Lotto_h

void printout(int wins[10], const int size, int guess);
int check(int wins[10], const int size, int guess);
int entry(int guess);
void fill_up(int wins[10], const int size);

#endif