class Fraction {
private:
    int numerator;
    int denominator; 
    int gcd(int a, int b);
    void reduce();
public:
    Fraction(int num, int denom);
    static Fraction input();
    void displayFraction();
    void displayDecimal();

    Fraction operator+(const Fraction& other);

    Fraction operator-(const Fraction& other);

    Fraction operator*(const Fraction& other);

    Fraction operator/(const Fraction& other);
};

