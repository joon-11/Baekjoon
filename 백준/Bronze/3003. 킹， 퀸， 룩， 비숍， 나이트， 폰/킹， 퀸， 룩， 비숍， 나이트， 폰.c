    int main() {
        int defaultkey[6] = { 1, 1, 2, 2, 2, 8 };
        int inputkey[6] = { 0, };
        int result[6] = { 0, };
        
        scanf("%d%d%d%d%d%d", &inputkey[0], &inputkey[1], &inputkey[2], &inputkey[3], &inputkey[4], &inputkey[5]);

        for (int i = 0; i < 6; i++) {
            if (defaultkey[i] != inputkey[i]) {
                result[i] = defaultkey[i] - inputkey[i];
            }           
        }
        
        for (int i = 0; i < 6; i++) {
            printf("%d ", result[i]);
        }

        return 0;
    }