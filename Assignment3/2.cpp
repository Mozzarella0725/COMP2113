#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

// Struct Point represents a point in the maze (row and column coordinates)
struct Point {
    int row, col;
};

// Checks if the given position is within the maze bounds and passable
// Parameters: current row, current column, total maze rows, total maze columns, maze layout
// Returns: boolean indicating whether the position is valid and passable
bool isValid(int currentRow, int currentCol, int mazeRows, int mazeCols, const vector<vector<int>>& maze);

// Outputs the path from the starting point to the destination
// Parameters: parent map to trace the path, destination point
void printPath(const vector<vector<Point>>& parent, Point destination);

// Initializes the maze's visited markers and parent tracking arrays
// Parameters: total maze rows, total maze columns, visited array, parent array
void initializeMazeData(int mazeRows, int mazeCols, vector<vector<bool>>& visited, vector<vector<Point>>& parent);

// Searches for a path from start to destination
// Parameters: maze layout, starting point, destination point
// Returns: boolean indicating whether a path was found
bool PathSearch(const vector<vector<int>>& maze, Point start, Point destination);

// Reads maze dimensions, layout, and start/end points from input
// Parameters: total maze rows, total maze columns, maze layout, starting point, destination point
void readInput(int& mazeRows, int& mazeCols, vector<vector<int>>& maze, Point& start, Point& destination);