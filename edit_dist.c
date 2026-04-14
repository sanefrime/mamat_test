 #include <stdio.h>
#include <string.h>

#define MAX_WORD_LEN 100

int edit_dist(char word1[], char word2[]);

int main() {
	char word1[MAX_WORD_LEN], word2[MAX_WORD_LEN];
	
	fgets(word1, MAX_WORD_LEN, stdin);
	word1[strlen(word1) - 1] = '\0';
	fgets(word2, MAX_WORD_LEN, stdin);
	word2[strlen(word2) - 1] = '\0';

	printf("%d\n", edit_dist(word1, word2));

	return (0);
}

int edit_dist(char word1[], char word2[]) {

	    scanf("%s", word1);
	    scanf("%s", word2);

	    int n = strlen(word1);
	    int m = strlen(word2);

	    int dp[101][101];


	    for (int i = 0; i <= n; i++)
	        dp[i][0] = i;


	    for (int j = 0; j <= m; j++)
	        dp[0][j] = j;


	    for (int i = 1; i <= n; i++) {
	        for (int j = 1; j <= m; j++) {


	            if (s1[i-1] == s2[j-1]) {
	                dp[i][j] = dp[i-1][j-1];
	            }


	            else {
	                dp[i][j] = 1 + min(
	                    dp[i-1][j],
	                    dp[i][j-1],
	                    dp[i-1][j-1]
	                );
	            }
	        }
	    }

	    printf("%d\n", dp[n][m]);
	    return 0;
}
