class Solution {
public:
    int superEggDrop(int K, int N) {
        int memo[K+1][N+1];
        
        for (int egg = 0; egg < K + 1; egg++)
            memo[egg][0] = 0;
        for (int floors = 0; floors < N + 1; floors++)
            memo[0][floors] = INT_MAX;
        
        for (int eggs = 1; eggs <= K; eggs++) { // O(n^2) DP solution
            for (int floors = 1; floors <= N; floors++) {
                
                if (eggs == 1) {
                    memo[eggs][floors] = floors;
                    continue;
                }
                
                if (floors == 1){
                    memo[eggs][floors] = 1;
                    continue;
                }
                    
                int l = 1, r = floors, mid;
                while (r - l > 1) {
                    mid = l + (r - l)/2;
                    if (memo[eggs - 1][mid - 1] < memo[eggs][floors - mid])
                        l = mid;
                    else if (memo[eggs - 1][mid - 1] > memo[eggs][floors - mid])
                        r = mid;
                    else l = r = mid;
                }

                if (l != r)
                    memo[eggs][floors] = 1 + min(max(memo[eggs - 1][l - 1], memo[eggs][floors - l]), max(memo[eggs - 1][r - 1], memo[eggs][floors - r]));
                else
                    memo[eggs][floors] = 1 + max(memo[eggs - 1][mid - 1], memo[eggs][floors - mid]);
            }
        }
        return memo[K][N];
    }
};

void main() {
    /*
        You are given K eggs, and you have access to a building with N floors from 1 to N. 
        Each egg is identical in function, and if an egg breaks, you cannot drop it again.
        You know that there exists a floor F with 0 <= F <= N such that any egg dropped at a floor higher than F will break, and any egg dropped at or below floor F will not break.
        Each move, you may take an egg (if you have an unbroken one) and drop it from any floor X (with 1 <= X <= N). 
        Your goal is to know with certainty what the value of F is.

        What is the minimum number of moves that you need to know with certainty what F is, regardless of the initial value of F
    */
    cout<<"Enter Number of Eggs(K): ";
    cin>>k;
    cout<<endl;
    cout<<"Enter Number of Floors(N): ";
    cin>>k;
    cout<<endl;
    s = Solution();

    cout<<"Minimum Moves Required to find maximum floor F where egg breaks: "<<s.superEggDrop();
}
