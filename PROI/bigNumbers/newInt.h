#ifndef NEWINT_H_INCLUDED
#define NEWINT_H_INCLUDED

const int N = 10;

class bigInt{
    unsigned char tab[N];
    bool invalid;
    int sgn;
public:
    bigInt();
    bigInt(int input[N]);
    bigInt(std::string input);
    bigInt(int input);

    void setPosition(int i, unsigned char c);
    unsigned char getPosition(int i);
    void print();
    bigInt abs();

    bigInt operator+(bigInt y);
    bigInt operator-(bigInt y);
    bigInt operator*(bigInt y);

    void operator=(bigInt y);
    bool operator>(bigInt y);
    bool operator==(bigInt y);
    bool operator<(bigInt y);
};


#endif // NEWINT_H_INCLUDED
