class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();

        sort(begin(piles), end(piles));

        int result = 0 ;

        int Bob = 0; //smallest

        int M = n-2; //second largest

        int Alice = n-1; //largest

        while(M > Bob) {

            result += piles[M];

            M -= 2;

            Bob++;

            Alice -= 2;
        }

        return result;
    }
};
