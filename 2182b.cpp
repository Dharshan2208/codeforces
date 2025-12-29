#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long a,b;
        cin >> a >> b;

        // if(a == 1 && b == 1){
        //     cout << 1 << "\n";
        //     continue;
        // }else if(a == 1 || b == 1){
        //     cout << 2 << "\n";
        //     continue;
        // }else{
        //     long layer_size = 1;
        //     long layers_start_white = 0;
        //     long layers_start_black = 0;

        //     // starting with white
        //     int turn = 0;

        //     while(true){
        //         if(turn == 0 && a >= layer_size){
        //             a -= layer_size;
        //         }else if(turn == 1 && b >= layer_size){
        //             b -= layer_size;
        //         }else{
        //             break;
        //         }
        //         layers_start_white++;
        //         layer_size *= 2;

        //         turn = 1 - turn;
        //     }

        //     // starting with white
        //     turn = 1;


        //     while(true){
        //         if(turn == 0 && a >= layer_size){
        //             a -= layer_size;
        //         }else if(turn == 1 && b >= layer_size){
        //             b -= layer_size;
        //         }else{
        //             break;
        //         }
        //         layers_start_black++;
        //         layer_size *= 2;

        //         turn = 1 - turn;
        //     }

        //     cout << max(layers_start_black,layers_start_white) << "\n";
        // }

        long ans = 0;
        for (int i = 0; i < 2; i++) {
            long aw = a, bw = b;
            long layer_size = 1;
            long layers = 0;
            int turn = i;
            // 0 = white, 1 = dark

            while (true) {
                if (turn == 0) {
                    if (aw < layer_size) break;
                    aw -= layer_size;
                } else {
                    if (bw < layer_size) break;
                    bw -= layer_size;
                }
                layers++;
                layer_size *= 2;
                turn = 1 - turn;  // flip color
            }

            ans = max(ans, layers);
        }

        cout << ans << "\n";
    }

    return 0;
}
