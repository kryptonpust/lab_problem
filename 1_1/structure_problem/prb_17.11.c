/*read some player name ,team name ,batting average and display team wise player information */

#include <stdio.h>
#include <string.h>

struct player_info {
    char name[30];
    char team[10];
    float batt_avg;
    int flag;
};

int main() {
    int i = 0;
    struct player_info player[5];
    while (!feof(stdin) && i < 5) {
        printf("send EOF to terminate\n");
        printf("Enter (Player_name Player_team Batting_average):");
        scanf("%s %s %f", player[i].name, player[i].team, &player[i].batt_avg);
        i++;
    }

    for (int j = 0; j < i; j++) {
        if (!player[j].flag)
            printf("TEAM %s\n", player[j].team);
        for (int k = 0; k < i; k++) {
            if (!strcmp(player[j].team, player[k].team)) {
                if (!player[k].flag) {
                    printf("player name: %s\nPlayer Batting_average: %.2f\n", player[k].name, player[k].batt_avg);
                    player[k].flag = 1;
                }
            }
        }
        printf("\n");

    }
    return 0;
}
