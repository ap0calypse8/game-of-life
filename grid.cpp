#include"grid.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

Life::Life() : Grid(Grid_Width,std::vector<bool>(Grid_Height, false)) {
    initializegrid();
}
        //initialize grid with random cell states
void Life::initializegrid() {
    std::srand(std::time(nullptr)); //seed the random number generator
    Grid.resize(Grid_Width, std::vector<bool>(Grid_Height, false)); // Resize static member
    for(auto i = 0; i <Grid_Width;++i){
        for(auto j=0; j<Grid_Height; ++j){
            Grid[i][j]=std::rand() % 2; //gives each cell a value of 1 or 0
        }
    }
}
