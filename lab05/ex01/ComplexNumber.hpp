#pragma once
#include <iostream>

class ComplexNumber
{
private:
    double m_real;
    double m_imag;
public:
    ComplexNumber(double r = 0.0, double i = 0.0) : m_real(r), m_imag(i) {};

    void setReal(const double &r)
    {
        m_real = r;
    }

    void setImag(const double &i)
    {
        m_imag = i;
    }

    double getReal() const
    {
        return m_real;
    }

    double getImag() const
    {
        return m_imag;
    }

    ComplexNumber operator+(const ComplexNumber& other) const
    {
        return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
    }

    ComplexNumber operator+(const double x) const
    {
        return ComplexNumber(m_real + x, m_imag);
    }

    ComplexNumber& operator+=(const ComplexNumber& other)
    {
        m_real += other.m_real;
        m_imag += other.m_imag;
        return *this;
    }

    ComplexNumber& operator +=(const double x)
    {
        m_real += x;
        return *this;
    }

    ComplexNumber operator-(const ComplexNumber& other) const
    {
        return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
    }

    ComplexNumber operator-(const double x) const
    {
        return ComplexNumber(m_real - x, m_imag);
    }

    ComplexNumber& operator-=(const ComplexNumber& other)
    {
        m_real -= other.m_real;
        m_imag -= other.m_imag;
        return *this;
    }

    ComplexNumber& operator-=(const double x)
    {
        m_real -= x;
        return *this;
    }

    ComplexNumber operator*(const ComplexNumber& other) const
    {
        return ComplexNumber(m_real * other.m_real - m_imag * other.m_imag,
                             m_real * other.m_imag + m_imag * other.m_real);
    }

    ComplexNumber& operator*=(const ComplexNumber& other)
    {
        double real = m_real * other.m_real - m_imag * other.m_imag;
        double imag = m_real * other.m_imag + m_imag * other.m_real;
        m_real = real;
        m_imag = imag;
        return *this;
    }

    ComplexNumber operator/(const ComplexNumber& other) const
    {
        double denom = other.m_real * other.m_real + other.m_imag * other.m_imag;
        return ComplexNumber((m_real * other.m_real + m_imag * other.m_imag) / denom,
                             (m_imag * other.m_real - m_real * other.m_imag) / denom);
    }

    ComplexNumber& operator/=(const ComplexNumber& other)
    {
        double denom = other.m_real * other.m_real + other.m_imag * other.m_imag;
        double real = (m_real * other.m_real + m_imag * other.m_imag) / denom;
        double imag = (m_imag * other.m_real - m_real * other.m_imag) / denom;
        m_real = real;
        m_imag = imag;
        return *this;
    }

    bool operator==(const ComplexNumber& other) const
    {
        return m_real == other.m_real && m_imag == other.m_imag;
    }

    bool operator!=(const ComplexNumber& other) const
    {
        return m_real != other.m_real || m_imag != other.m_imag;
    }

    ComplexNumber& operator=(const ComplexNumber& other)
    {
        if (this == &other)
        {
            return *this;
        }
        m_real = other.m_real;
        m_imag = other.m_imag;
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c)
    {
        os << c.m_real;
        if (c.m_imag >= 0)
            os << "+" << c.m_imag << "i";
        else
            os << c.m_imag << "i";
        return os;
    }
};