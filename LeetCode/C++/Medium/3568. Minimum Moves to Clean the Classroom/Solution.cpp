class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {
        int m = classroom.size();
        int n = classroom[0].size();

        int sr = -1, sc = -1;
        vector<pair<int,int>> litter;

        // Find S and all L
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (classroom[i][j] == 'S') {
                    sr = i;
                    sc = j;
                }
                else if (classroom[i][j] == 'L') {
                    litter.push_back({i, j});
                }
            }
        }

        int k = litter.size();

        // All litter already collected
        if (k == 0) {
            return 0;
        }

        // Give every litter cell a bit
        vector<vector<int>> litterId(m, vector<int>(n, -1));

        for (int i = 0; i < k; i++) {
            litterId[litter[i].first][litter[i].second] = i;
        }

        int fullMask = (1 << k) - 1;

        /*
            visited[r][c][mask][energy]

            We flatten the dimensions into one unordered_set
            to avoid a potentially huge 4D vector.
        */

        queue<tuple<int,int,int,int>> q;

        // r, c, mask, remaining energy
        q.push({sr, sc, 0, energy});

        set<tuple<int,int,int,int>> visited;
        visited.insert({sr, sc, 0, energy});

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        int moves = 0;

        while (!q.empty()) {

            int sz = q.size();

            while (sz--) {

                auto [r, c, mask, en] = q.front();
                q.pop();

                // All litter collected
                if (mask == fullMask) {
                    return moves;
                }

                for (int d = 0; d < 4; d++) {

                    int nr = r + dr[d];
                    int nc = c + dc[d];

                    // Outside grid
                    if (nr < 0 || nr >= m || nc < 0 || nc >= n) {
                        continue;
                    }

                    // Obstacle
                    if (classroom[nr][nc] == 'X') {
                        continue;
                    }

                    // Need energy for the move
                    if (en == 0) {
                        continue;
                    }

                    int newEnergy = en - 1;
                    int newMask = mask;

                    // Collect litter
                    if (classroom[nr][nc] == 'L') {
                        int id = litterId[nr][nc];
                        newMask |= (1 << id);
                    }

                    // Reset energy
                    if (classroom[nr][nc] == 'R') {
                        newEnergy = energy;
                    }

                    auto state = make_tuple(nr, nc, newMask, newEnergy);

                    if (!visited.count(state)) {
                        visited.insert(state);
                        q.push(state);
                    }
                }
            }

            moves++;
        }

        return -1;
    }
};