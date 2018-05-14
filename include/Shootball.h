#ifndef SHOOTBALL_H
#define SHOOTBALL_H


class Shootball
{
    public:
        Shootball();
        virtual ~Shootball();
        int action;
        float ball_x,ball_y,posX,posY,degtorad,theta,iVel,ivelX,ivelY,velX,velY,Time;
        double mx,my;
        float Rotatez1;
        float Ball_size[3]={0.5,0.5,1.0};
        float Vertices[4][3] ={ {0.0, 0.0, -2.0},{0.5, 0.0, -2.0},{0.5,0.5, -2.0},{0.0, 0.5, -2.0}};
        bool ballappear;
        bool ballappear1;
        void ShootballInit();
        void ShootBallDisplay(int );
        void Drawball();
        void DrawMotion();
        void ProjectileMotion(float );






    protected:

    private:
};

#endif // FIREBALL_H
