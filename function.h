#pragma once
#include"grid.h"

void print_grid(const Life &life);
int countliveneighbour(const Life &life, int x, int y);
void updateGrid( Life &life);