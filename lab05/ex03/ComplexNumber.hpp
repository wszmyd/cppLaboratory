#pragma once
#include <iostream>
#include <type_traits>

namespace ws
{
    namespace jpo
    {
        template <typename T>
            requires std::is_arithmetic_v<T>
        class ComplexNumber
        {
        private:
            T m_real;
            T m_imag;

        public:
            ComplexNumber(T r = 0.0, T i = 0.0) : m_real(r), m_imag(i) {};

            void setReal(const T &r)
            {
                m_real = r;
            }

            void setImag(const T &i)
            {
                m_imag = i;
            }

            T getReal() const
            {
                return m_real;
            }

            T getImag() const
            {
                return m_imag;
            }

            ComplexNumber operator+(const ComplexNumber &other) const
            {
                return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
            }

            ComplexNumber operator+(const T x) const
            {
                return ComplexNumber(m_real + x, m_imag);
            }

            ComplexNumber &operator+=(const ComplexNumber &other)
            {
                m_real += other.m_real;
                m_imag += other.m_imag;
                return *this;
            }

            ComplexNumber &operator+=(const T x)
            {
                m_real += x;
                return *this;
            }

            ComplexNumber operator-(const ComplexNumber &other) const
            {
                return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
            }

            ComplexNumber operator-(const T x) const
            {
                return ComplexNumber(m_real - x, m_imag);
            }

            ComplexNumber &operator-=(const ComplexNumber &other)
            {
                m_real -= other.m_real;
                m_imag -= other.m_imag;
                return *this;
            }

            ComplexNumber &operator-=(const T x)
            {
                m_real -= x;
                return *this;
            }

            ComplexNumber operator*(const ComplexNumber &other) const
            {
                return ComplexNumber(m_real * other.m_real - m_imag * other.m_imag,
                                     m_real * other.m_imag + m_imag * other.m_real);
            }

            ComplexNumber &operator*=(const ComplexNumber &other)
            {
                T real = m_real * other.m_real - m_imag * other.m_imag;
                T imag = m_real * other.m_imag + m_imag * other.m_real;
                m_real = real;
                m_imag = imag;
                return *this;
            }

            ComplexNumber operator/(const ComplexNumber &other) const
            {
                T denom = other.m_real * other.m_real + other.m_imag * other.m_imag;
                return ComplexNumber((m_real * other.m_real + m_imag * other.m_imag) / denom,
                                     (m_imag * other.m_real - m_real * other.m_imag) / denom);
            }

            ComplexNumber &operator/=(const ComplexNumber &other)
            {
                T denom = other.m_real * other.m_real + other.m_imag * other.m_imag;
                T real = (m_real * other.m_real + m_imag * other.m_imag) / denom;
                T imag = (m_imag * other.m_real - m_real * other.m_imag) / denom;
                m_real = real;
                m_imag = imag;
                return *this;
            }

            bool operator==(const ComplexNumber &other) const
            {
                return m_real == other.m_real && m_imag == other.m_imag;
            }

            bool operator!=(const ComplexNumber &other) const
            {
                // return m_real != other.m_real || m_imag != other.m_imag;
                // return !(*this == other);
                return !operator==(other);
            }

            ComplexNumber &operator=(const ComplexNumber &other)
            {
                if (this == &other)
                {
                    return *this;
                }
                m_real = other.m_real;
                m_imag = other.m_imag;
                return *this;
            }

            friend std::ostream &operator<<(std::ostream &os, const ComplexNumber &c)
            {
                os << c.m_real;
                if (c.m_imag >= 0)
                    os << "+" << c.m_imag << "i";
                else
                    os << c.m_imag << "i";
                return os;
            }
        };
    }
}