#include <vector>
#include <numeric>

class Solution {
public:
    int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
        int total_surplus = 0; // To check if a solution exists at all
        int current_tank = 0;   // To track gas while testing a starting point
        int start_index = 0;    // Potential starting station

        for (int i = 0; i < gas.size(); i++) {
            int net_gain = gas[i] - cost[i];
            total_surplus += net_gain;
            current_tank += net_gain;

            // If current_tank drops below 0, station 'i' cannot be reached 
            // from our current start_index. Reset and try the next station.
            if (current_tank < 0) {
                start_index = i + 1;
                current_tank = 0;
            }
        }

        // If total gas is less than total cost, return -1
        return (total_surplus < 0) ? -1 : start_index;
    }
};