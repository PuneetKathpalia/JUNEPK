class Solution {
public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<vector<int>> adjRow(k + 1), adjCol(k + 1);
        vector<int> indegRow(k + 1, 0), indegCol(k + 1, 0);

        // Build the adjacency list and in-degree count for row constraints
        for (const auto& cond : rowConditions) {
            int above = cond[0], below = cond[1];
            adjRow[above].push_back(below);
            indegRow[below]++;
        }

        // Build the adjacency list and in-degree count for column constraints
        for (const auto& cond : colConditions) {
            int left = cond[0], right = cond[1];
            adjCol[left].push_back(right);
            indegCol[right]++;
        }

        // Topological sort for rows
        vector<int> rowOrder = topologicalSort(k, adjRow, indegRow);
        if (rowOrder.empty()) return {}; // No valid ordering

        // Topological sort for columns
        vector<int> colOrder = topologicalSort(k, adjCol, indegCol);
        if (colOrder.empty()) return {}; // No valid ordering

        // Construct the matrix
        vector<vector<int>> matrix(k, vector<int>(k, 0));
        vector<int> rowPos(k + 1), colPos(k + 1);

        for (int i = 0; i < k; ++i) {
            rowPos[rowOrder[i]] = i;
            colPos[colOrder[i]] = i;
        }

        for (int i = 1; i <= k; ++i) {
            matrix[rowPos[i]][colPos[i]] = i;
        }

        return matrix;
    }

private:
    vector<int> topologicalSort(int k, vector<vector<int>>& adj, vector<int>& indeg) {
        vector<int> order;
        queue<int> q;
        for (int i = 1; i <= k; ++i) {
            if (indeg[i] == 0) {
                q.push(i);
            }
        }
        while (!q.empty()) {
            int u = q.front(); q.pop();
            order.push_back(u);
            for (int v : adj[u]) {
                if (--indeg[v] == 0) {
                    q.push(v);
                }
            }
        }
        if (order.size() != k) return {}; // Cycle detected or not all nodes included
        return order;
    }
};