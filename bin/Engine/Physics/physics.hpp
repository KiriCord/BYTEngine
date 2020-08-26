#include "vector3.hpp"

class Physics 
{
    // TODO REMOVE FCKG FLOATS WITH VECTORS 3D!!!!!!!!!!!!!!!!!!!!!!!!!
    float G;
    Vector3 g;
    float M;
    Vector3 friction;
    Vector3 elasticity;

    public:

    Physics(float primary_mass, float secondary_mass, float distance, Vector3 force, Vector3 _friction, Vector3 elast) {
        M = primary_mass;
        G = (force * distance*distance)/(M*secondary_mass); //TODO CONVERT TO VECTOR3
        g = G * M/(distance*distance);
        friction = _friction;
        elasticity = elast;
    }
    ~Physics();

    Vector3 gOverNMeter(float radius, float meter) {
        return G*M/((radius+meter)*(radius+meter));
    }

    Vector3 P(float mass) {
        return g * mass;
    }
    
    void registerCollider();    //rigitbody in parameters
    void deregisterCollider();  //rigitbody in parameters
};