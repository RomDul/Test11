#ifndef VECTEUR3D_H_INCLUDED
#define VECTEUR3D_H_INCLUDED
class vecteur3d{
    float x, y, z ;
    public:
        vecteur3d (float xx=0.0, float yy=0.0, float zz=0.0);
        ~ vecteur3d();

        void afficher();
        void set_x(float);
        void set_y(float);
        void set_z(float);
        float get_x();
        float get_y();
        float get_z();
}
#endif // VECTEUR3D_H_INCLUDED
