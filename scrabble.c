#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int playerscore(string word);

int main(void)
{
    int i;
    int player1score = 0;
    int player2score = 0;

    string word1 = get_string("Player 1: ");
    player1score = playerscore(word1);
    string word2 = get_string("Player 2: ");
    player2score = playerscore(word2);

    // printf("Player One Score : %d\nPlayer Two Score : %d\n", player1score, player2score);

    if(player1score == player2score)
    {
        printf("Tie!\n");
    }
    else if(player1score > player2score)
    {
        printf("Player 1 wins!\n");
    }
    else
    {
        printf("Player 2 wins!\n");
    }

}

int playerscore(string word)
{
    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int playerscore = 0;
    for(int i = 0; word[i] != '\0'; i++){
        char tempword = word[i];
        if(isalpha(tempword)){
            char lower = tolower(tempword);
            playerscore += points[lower - 'a'];
        }
    }

    return playerscore;
}
