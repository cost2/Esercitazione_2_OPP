#include <iostream>
#include <complex>
#define STACK_SIZE_8

using namespace std;

template <typename T>
class complex_number  //z=a+ib
{
	T a;   //a parte reale
	T b;   //b parte immaginaria
 	
	
	public:
	
	complex_number(): a(0), b(0)  //costruttore default
	{}
	
	complex_number (T r=0, T i=0) //costruttore user-defined
	{
		a=r;
		b=i;
	}
	
	
	
	
	
	
	T parte_reale (void) const 
	{
		return a;
	}
	
	T parte_immaginaria (void) const 
	{
		return b;
	}
	
	complex_number coniugato (void) const //restituisce il numero complesso coniugato
	{
		return complex_number(a, -b);
	}
	
	
	
	
	
	complex_number& operator+=(const complex_number& other)
	{
		T c =a;
		T d =b;
		T e=other.a;
		T f=other.b;
		T real=c+e;
		T img=d+f;
		
		return *this;
		
	}
	
	
	complex_number& operator+(const complex_number& other) const //overload +
	{
		complex_number sum=*this;
		sum+=other;
		return sum;
	}
	
	complex_number& operator*=(const complex_number& other) 
	{
		T c =a;
		T d =b;
		T e=other.a;
		T f=other.b;
		T real=(c*e)-(d*f);
		T img=(c*f)+(d*e);
		
		return *this;
		
	}

	complex_number& operator*(const complex_number& other) const //overload *
	{
		complex_number product=*this;
		product*=other;
		return product;
	}
};
	
	template <typename T>
	complex_number<T>
	operator+(const T& i, const complex_number<T>& r)
	{
		return r+i;
	}
	
	template <typename T>
	complex_number<T>
	operator*(const T& i, const complex_number<T>& r)
	{
		return r*i;
	}
	
	template <typename T>
		
		std::ostream& operator << (std::ostream& os, complex_number<T>& n)
		{
			if (n.parte_immaginaria() <0.0)
				os << n.parte_reale() << "-i" << abs(n.parte_immaginaria());
			else
				os << n.parte_reale() << "+i" << n.parte_immaginaria();
			
			return os;
		}
	
	
	
	int main(void)
	{
		
		return 0;
		
	}