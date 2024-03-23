\# Conway\'s Game of Life

This is a C++ implementation of Conway\'s Game of Life, a cellular
automaton devised by the British mathematician John Horton Conway.

\## Description

Conway\'s Game of Life is a zero-player game that simulates the
evolution of a grid of cells according to simple rules. Cells can be
either alive or dead, and their state evolves over generations based on
the following rules: 1. Any live cell with fewer than two live neighbors
dies, as if by underpopulation. 2. Any live cell with two or three live
neighbors lives on to the next generation. 3. Any live cell with more
than three live neighbors dies, as if by overpopulation. 4. Any dead
cell with exactly three live neighbors becomes a live cell, as if by
reproduction.

This implementation includes a text-based version of the game, where the
grid of cells is displayed in the terminal and updates are printed at
each generation.

\## Usage

To run the game, compile the source files (\`main.cpp\`,
\`function.cpp\`, \`grid.cpp\`) using a C++ compiler such as g++. Then,
execute the compiled program.

\`\`\`bash g++ main.cpp function.cpp grid.cpp -o game_of_life
./game_of_life

Future Improvements Implement a graphical user interface using OpenGL to
create a visual representation of the game. Add additional features such
as pausing/resuming the simulation, changing the size of the grid, and
saving/loading patterns.
