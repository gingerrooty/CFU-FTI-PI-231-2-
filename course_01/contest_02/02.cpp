bool is_valid_move(const std::vector<std::string>& maze, int row, int col, std::vector<std::vector<bool>>& visited) {
    int rows = maze.size();
    int cols = maze[0].size();

    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        if (!visited[row][col] && maze[row][col] != '#') {
            return true;
        }
    }

    return false;
}

bool dfs(const std::vector<std::string>& maze, int row, int col, std::vector<std::vector<bool>>& visited) {
    int rows = maze.size();
    int cols = maze[0].size();

    if (row < 0,  row >= rows,  col < 0, col >= cols,  maze[row][col] == 'E') {
        return true;
    }

    visited[row][col] = true;

    if (is_valid_move(maze, row - 1, col, visited) && dfs(maze, row - 1, col, visited)) {
        return true;
    }
    if (is_valid_move(maze, row + 1, col, visited) && dfs(maze, row + 1, col, visited)) {
        return true;
    }
    if (is_valid_move(maze, row, col - 1, visited) && dfs(maze, row, col - 1, visited)) {
        return true;
    }
    if (is_valid_move(maze, row, col + 1, visited) && dfs(maze, row, col + 1, visited)) {
        return true;
    }

    visited[row][col] = false;

    return false;
}

bool is_can_exit_from_maze(const std::vector<std::string>& maze, int start_row, int start_col) {
    int rows = maze.size();
    int cols = maze[0].size();

    std::vector<std::vector<bool>> visited(rows, std::vector<bool>(cols, false));

    return dfs(maze, start_row, start_col, visited);
}

