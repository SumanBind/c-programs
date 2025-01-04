#include <stdio.h>
#include <string.h>
/*Define a structure called cricket with player name, team
name, batting average, for 50 players & 5 teams. Print team
wise list contains names of player with their batting
average.*/
struct cricket
 {
    char player_name[50];
    char team_name[50];
    float batting_average;
} players[5];


int main() 
{
    int total_players = 5;
    int i, j;


    for(i = 0; i < total_players; i++)
	 {
        printf("Enter details for Player %d:\n", i + 1);
        printf("Player Name: ");
        scanf("%s", players[i].player_name);
        printf("Team Name: ");
        scanf("%s", players[i].team_name);
        printf("Batting Average: ");
        scanf("%f", &players[i].batting_average);
        printf("\n");
    }


    printf("\nTeam-wise Player List and Batting Average:\n");
    
    printf("\n Team1, Team2, Team3, Team4, Team5\n");
    

    char teams[2][5] = {"Team1", "Team2", "Team3", "Team4", "Team5"};
    for(j = 0; j < 5; j++) 
	{
        printf("\n%s:\n", teams[j]);
        for(i = 0; i < total_players; i++)
		 { 
            if(strcmp(players[i].team_name, teams[j]) == 0) 
			{ 
                printf("Player: %s, Batting Average: %.2f\n", players[i].player_name, players[i].batting_average);
            }
        }
    }

    return 0;
}

