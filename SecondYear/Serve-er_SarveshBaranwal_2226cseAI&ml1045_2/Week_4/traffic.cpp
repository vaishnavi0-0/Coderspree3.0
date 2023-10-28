int traffic(int n, int m, vector<int> vehicle) {

    int i = 0, j = 0, ans = 1, sums = 0, k = m;

    while(j < n){

        if (k <= 0 && i < j && vehicle[j] == 0) {

            sums--;

            if(vehicle[i] == 0){

                k++;

            }

            i++;

            continue;

        }

        

        if(vehicle[j] == 0) k--;

        sums++;

        j++;

        ans = max(ans, sums);

    }

    return ans;

}