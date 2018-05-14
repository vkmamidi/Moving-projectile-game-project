#include "Player.h"

Timer *T = new Timer();
float t =0;
TextureLoader cannon;
TextureLoader cannon1;


Player::Player()
{

}

Player::~Player()
{
    //dtor
}

void Player::playerInit()
{
    Player_x = -2.2;
    Player_y = -1.2;
    Player_x1 = -2.2;
    Player_y1 = -0.7;

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    cannon.BindTexture("images/canon base.png");
    cannon1.BindTexture("images/canon top.png");

}

void Player::Action()
{

        glPushMatrix();
            glTranslated(Player_x,Player_y,-2.0);
            cannon.Binder();
            drawPlayer();
        glPopMatrix();
        glPushMatrix();
            glTranslated(Player_x1,Player_y1,-2.0);
            glRotatef(RotateZ1,0.0,0.0,1.0);
            cannon1.Binder();
            drawPlayer();
        glPopMatrix();
}

void Player::drawPlayer()
{
        glScaled(Player_size[0],Player_size[1],Player_size[2]);

        glBegin(GL_QUADS);
              glTexCoord2f(0.0f, 1.0f);
              glVertex3f(Vertices[0][0],Vertices[0][1],Vertices[0][2]);
              glTexCoord2f(1.0f, 1.0f);
              glVertex3f(Vertices[1][0],Vertices[1][1],Vertices[1][2]);
              glTexCoord2f(1.0f, 0.0f);
              glVertex3f(Vertices[2][0],Vertices[2][1],Vertices[2][2]);
              glTexCoord2f(0.0f, 0.0f);
              glVertex3f(Vertices[3][0],Vertices[3][1],Vertices[3][2]);
          glEnd();
}
