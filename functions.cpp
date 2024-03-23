#include<iostream>
#include"function.h"
#include"grid.h"
#include<cstdlib>
#include<ctime>
#include<random>



//function to print the grid to the console
void print_grid(const Life &life) {
    for(auto i = 0; i < life.Grid_Width; ++i){
        for(auto j = 0 ; j < life.Grid_Height; ++j){
            std::cout<< (life.Grid[i][j]  ? "*" : ".")<<" "; //print * for live cell and . for dead one 
        }
        std::cout<<'\n';
    }
}





//function to count live neihghbour
int countliveneighbour(const Life &life, int x, int y) {
    int count = 0;
    for(auto i = -1; i <= 1; ++i){
        for(auto j = -1; j <= 1; ++j){ //covering 3X3 grid
            int neighbourX = x + i;
            int neighbourY = y + j;
            //if(i == 0 && j == 0) continue; //skipping the cell itself
            //if(neighbourX >= 0 && neighbourX < Grid_Width && neighbourY >= 0 && neighbourY< Grid_Height ){
                count += life.Grid[(neighbourX + life.Grid_Width) % life.Grid_Width][(neighbourY + life.Grid_Height) % life.Grid_Height];
            }
        }
    
    return count - life.Grid[x][y];
}

//function to update the grid  based on the rules of the game
void updateGrid( Life &life) {
    //int newGrid[Grid_Width][Grid_Height] = {0};
    std::vector<std::vector<bool>> newGrid(life.Grid_Width, std::vector<bool>(life.Grid_Height, false));
    for(auto i = 0; i < life.Grid_Width; ++i) {
        for(auto j = 0; j < life.Grid_Height; ++j) {
            int liveneighbours = countliveneighbour(life,i,j);
            if(life.Grid[i][j]) {
                newGrid[i][j]=(liveneighbours == 2 || liveneighbours == 3);
            } else {
                newGrid[i][j]=(liveneighbours == 3);
            }
        }
    }
    life.Grid = std::move(newGrid);
}

    