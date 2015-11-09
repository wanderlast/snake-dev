#define MAX_GRID 80

typedef struct t_player {
        //I'm currently keeping in the code for direction
        //in the case we substitute a directionally facing sprite in
        
        int status; //whether it exists
        int type; //what game mode it is
        int pos[MAX_GRID*MAX_GRID][2];
        int direction;
        //double timer;
        //double delay;
} Player;

extern Player player;

extern void initTreasure();
extern void movement(int n);
extern int checkBorderCollision();
extern void treasureGeneration(int i);
extern void treasureGeneration(int i, int type);
extern void treasureCollision();
extern int findTreasureValue(Treasure *t);
