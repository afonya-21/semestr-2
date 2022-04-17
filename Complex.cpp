#include "Complex.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

TComplex::TComplex()
{
    Re = 0.0;
    Im = 0.0;
    Update();
}

TComplex::TComplex(float re_, float im_)
{
    Re = re_;
    Im = im_;
    Update();
}

TComplex::TComplex(TComplex& z)
{
    Im = z.Im;
    Re = z.Re;
    Update();
}

float TComplex::GetIm() const
{
    return Im;
}

float TComplex::GetRe() const
{
    return Re;
}

float TComplex::GetAbs() const
{
    return abs;
}

float TComplex::GetArg() const
{
    return arg;
}

void TComplex::SetIm(float im)
{
    Im = im;
    Update();
}

void TComplex::SetRe(float re)
{
    Re = re;
    Update();
}

void TComplex::Update()
{
    abs = sqrt((Im * Im) + (Re*Re));
    arg = acos(Re / abs);

}

void TComplex::PrintF()
{
    cout << endl;
    cout << "z=" << abs << "(cos(" << (arg/M_PI)*180 << ") + i*sin(" << (arg/M_PI)*180 << ")" << endl;
}

TComplex TComplex::Pow(float p)
{
    abs = pow(abs, p);
    float temp = arg/(2*M_PI);
    arg = arg-floor(temp)*2*M_PI;
    Re = cos(arg)*abs;
    Im = sin(arg)*abs;
    return *this;
}

TComplex TComplex::operator+(const TComplex& Z) const
{
    TComplex res;
    res.Im = Im + Z.Im;
    res.Re = Re + Z.Re;
    return res;
}

TComplex TComplex::operator-(const TComplex& Z) const
{
    TComplex res;
    res.Im = Im - Z.Im;
    res.Re = Re - Z.Re;
    return res;
}

TComplex TComplex::operator+=(const TComplex& Z)
{
    Im = Im + Z.Im;
    Re = Re + Z.Re;
    Update();
    return *this;
}

TComplex TComplex::operator-=(const TComplex& Z)
{
    Im = Im - Z.Im;
    Re = Re - Z.Re;
    Update();
    return *this;
}

TComplex TComplex::operator*(const TComplex& Z) const
{
    TComplex res;
    res.Re = Re * Z.Re - Im * Z.Im;
    res.Im = Re * Z.Im + Im * Z.Re;
    return res;
}

TComplex TComplex::operator/(const TComplex& Z) const
{
    TComplex res;
    res.Re = ((Re * Z.Re) + (Im * Z.Im)) / ((Z.Re * Z.Re) + (Z.Im * Z.Im));
    res.Re = ((Im * Z.Re) - (Re * Z.Im)) / ((Z.Re * Z.Re) + (Z.Im * Z.Im));
    return res;
}

TComplex TComplex::operator=(const TComplex& Z)
{
    Im = Z.Im;
    Re = Z.Re;
    Update();
    return *this;
}

bool TComplex::operator==(const TComplex& Z) const
{
    return Im == Z.Im && Re == Z.Re;
}

ostream& operator << (ostream& str, const TComplex& Z)
{
    str << "Действительная часть равна " << Z.Re << endl;
    str << "Мнимая часть равна " << Z.Im << endl;
    str << "Модуль комплексного числа равен " << Z.abs << endl;
    str << "Угол в радианах равен " << Z.arg << endl;
    str << "Угол в  равен " << (Z.arg / M_PI) * 180  << endl;
    return str;
}


istream& operator>>(istream& istr, TComplex& Z)
{
    istr >> Z.Re;
    istr >> Z.Im;
    Z.Update();
    return istr;
}
