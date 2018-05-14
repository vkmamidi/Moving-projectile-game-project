#ifndef PLAYER_H
#define PLAYER_H

#include <TextureLoader.h>
#include <Timer.h>

class Player
{
    public:
        Player();
        virtual ~Player();

        float Player_size[3]={0.5,0.5,0.5};
        float Player_x,Player_x1;
        float Player_y,Player_y1;
        float Vertices[4][3] ={ {0.0, 0.0, -2.0},{0.5, 0.0, -2.0},{0.5,0.5, -2.0},{0.0, 0.5, -2.0}};

        int runSpeed;
        int jumpSpeed;
        int actionTrigger;
        int checkCollision(int, int);
        float RotateZ1;
        void drawPlayer();
        void playerInit();
        void Action();
        void Collision();

    protected:

    private:
};

#endif // PLAYER_H
