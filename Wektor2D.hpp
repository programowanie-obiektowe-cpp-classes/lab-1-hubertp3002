

class Wektor2D
{
public:
    Wektor2D() { 
        
        X = 0;
        Y = 0;
        
  
    
    
    }

    Wektor2D(double x, double y)
    {
        X = x;
        Y = y;
    }

    void setX(double x) { X = x; }

    void setY(double y) { Y = y; }

    double getX()
    {


        return X;
    }

    double getY()
    {

        return Y;
    }

    double X;
    double Y;
};

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    return Wektor2D(w1.X + w2.X, w1.Y + w2.Y);
};

double operator*(Wektor2D w1, Wektor2D w2)
{
    double z;

    z = w1.X * w2.X + w1.Y * w2.Y;



    return z;
};
