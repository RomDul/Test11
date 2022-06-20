#include "vecteur3d.h"
#include <iostream>

using namespace std;
vecteur3d:: vecteur3d(float xx, float yy, float zz)
{
    x = xx;
    y = yy;
    z = zz;
}

    vecteur3d::~vecteur3d(){

}

void vecteur3d::afficher()
{
    cout<<"x :"<< x<< endl;
    cout<<"y :"<< y<< endl;
    cout<<"z :"<< z<< endl;
}

void vecteur3d::set_x(float xx)
{
    x = xx;
}
void vecteur3d::set_y(float yy)
{
    y = yy;
}

void vecteur3d::set_z(float zz)
{
    z = zz;
}

void vecteur3d::get_x() {
}

void vecteur3d::get_y() {
}

void vecteur3d::get_z() {
}

