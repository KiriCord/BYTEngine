class Physics 
{
    // TODO REMOVE FCKG FLOATS WITH VECTORS 3D!!!!!!!!!!!!!!!!!!!!!!!!!
    float G;
    float g;
    float M;
    float friction;
    float elasticity;

    public:

    Physics(double primary_mass, double secondary_mass, double distance, double force, double _friction, double elast) {
        M = primary_mass;
        G = (force * distance*distance)/(M*secondary_mass);
        g = G * M/(distance*distance);
        friction = _friction;
        elasticity = elast;
    }
    ~Physics();

    float gOverNMeter(double radius, double meter) {
        return G*M/((radius+meter)*(radius+meter));
    }

    float P(double mass) {
        return mass * g;
    }
    
    void registerCollider();    //rigitbody in parameters
    void deregisterCollider();  //rigitbody in parameters
};