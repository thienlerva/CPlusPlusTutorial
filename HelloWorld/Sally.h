

#ifndef SALLY_H
#define SALLY_H

class Sally {
public:
    Sally(int a, int b);
    ~Sally();
    void printCrap();
    void printShiz();
    void printShitz2() const;
    void print();
private:
    int regVar;
    const int constVar;
};
#endif /* SALLY_H */
