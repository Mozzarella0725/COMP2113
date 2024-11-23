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
// Parameters: current row, current column, total maze rows, total maze columns, maze layout, visited array
// Returns: boolean indicating whether the position is valid and passable
bool isValid(int currentRow, int currentCol, int mazeRows, int mazeCols, const vector<vector<int>>& maze, const vector<vector<bool>>& visited){
    return currentRow >= 0 && currentRow < mazeRows && currentCol >= 0 && currentCol < mazeCols 
        && maze[currentRow][currentCol] == 1 && !visited[currentRow][currentCol];
}

// Outputs the path from the starting point to the destination
// Parameters: parent map to trace the path, destination point
void printPath(const vector<vector<Point>>& parent, Point destination){
    stack<Point> path;
    Point current = destination;

    // Trace back the route
    while (parent[current.row][current.col].row != -1){ // check if it's the starting point
        path.push(current);
        current = parent[current.row][current.col];
    }
    path.push(current); // add the starting point

    // Print the path
    while (!path.empty()){
        Point p = path.top();
        path.pop();
        cout << "(" << p.row << ", " << p.col << ")" << endl;
    }
}

// Initializes the maze's visited markers and parent tracking arrays
// Parameters: total maze rows, total maze columns, visited array, parent array
void initializeMazeData(int mazeRows, int mazeCols, vector<vector<bool>>& visited, vector<vector<Point>>& parent){
    visited.assign(mazeRows, vector<bool>(mazeCols, false)); // ensure every point is initialized as unvisited
    parent.assign(mazeRows, vector<Point>(mazeCols, {-1, -1})); // ensure every point has no parent point
}

// Searches for a path from start to destination
// Parameters: maze layout, starting point, destination point
// Returns: boolean indicating whether a path was found
bool PathSearch(const vector<vector<int>>& maze, Point start, Point destination){
    int mazeRows = maze.size();
    int mazeCols = maze[0].size();

    vector<vector<bool>> visited;
    vector<vector<Point>> parent;
    initializeMazeData(mazeRows, mazeCols, visited, parent);

    queue<Point> q;
    q.push(start); // Start from the starting point
    visited[start.row][start.col] = true; // set it as visited

    // set the moving directions
    vector<int> rowDir = {-1, 1, 0, 0};
    vector<int> colDir = {0, 0, -1, 1};

    while (!q.empty()) {
        Point current = q.front();
        q.pop();

        // Check if the destination is reached
        if (current.row == destination.row && current.col == destination.col) {
            printPath(parent, destination);
            return true;
        }

        // Try on neighbors
        for (int i = 0; i < 4; ++i) {
            int newRow = current.row + rowDir[i];
            int newCol = current.col + colDir[i];

            if (isValid(newRow, newCol, mazeRows, mazeCols, maze, visited)) {
                visited[newRow][newCol] = true;
                parent[newRow][newCol] = current;
                q.push({newRow, newCol});
            }
        }
    }

    // if no path found
    return false;
}

// Reads maze dimensions, layout, and start/end points from input
// Parameters: total maze rows, total maze columns, maze layout, starting point, destination point
void readInput(int& mazeRows, int& mazeCols, vector<vector<int>>& maze, Point& start, Point& destination){
    // read and construct an empty maze
    cin >> mazeRows >> mazeCols;
    maze.resize(mazeRows, vector<int>(mazeCols)); // fixed typo from "resuze" to "resize"

    // read the maze content
    for (int i = 0; i < mazeRows; ++i) {
        for (int j = 0; j < mazeCols; ++j) {
            cin >> maze[i][j];
        }
    }

    // read the start point and destination point
    cin >> start.row >> start.col >> destination.row >> destination.col;
}

int main(){
    int mazeRows, mazeCols;

    vector<vector<int>> maze;
    Point start, destination;

    readInput(mazeRows, mazeCols, maze, start, destination);

    if (PathSearch(maze, start, destination) == false){
        cout << "No path found" << endl;
    }

    return 0;  // added missing return statement
}
