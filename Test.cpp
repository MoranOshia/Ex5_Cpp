#include <iostream>
using namespace std;

#include "range.hpp"
#include "chain.hpp"
#include "zip.hpp"
#include "product.hpp"
#include "powerset.hpp"
#include "badkan.hpp"
#define COMMA ,
using namespace itertools;


int main() {
	
	badkan::TestCase testcase;
	int grade=0;
	int signal = setjmp(badkan::longjmp_buffer);
	if (signal == 0) {
	
	
		/********************RANGE************************/
		
		string ansRInt="";
        for (int i : range(1, 10))
        {
            ansRInt += to_string(i);
        }

		string ansRDouble = "";
        for (double i : range(1.5, 5.5))
        {
            ansRDouble += to_string(i);
        }
		
		string ansRChar = "";
        for (char i : range('L', 'U'))
        {
            ansRChar +=to_string(i);
        }

        testcase.setname("Test For Range: ")

            .CHECK_EQUAL(ansRInt.compare("123456789"),0)
            .CHECK_EQUAL(ansRDouble.compare("1.52.53.54.5"),0)
            .CHECK_EQUAL(ansRChar.compare("LMNOPQRST"),0);

       
	   
		/********************CHAIN************************/

	    string ansCInt="";
		for (int i: chain(range(1,4), range(5,8)))
		{
			ansCInt += to_string(i);
		}
		
		string ansCChar="";
		for (char i : chain(range('I','J'), string(" LOVE CPP")))
        {
            ansCChar +=to_string(i);
        }
		
		string ansCChainX2="";
		for (char i : chain(chain(range('I','J'),string(" K")),chain(range('N','P'),string("W CPP"))))
        {
            ansCChainX2 +=to_string(i);
        }
		testcase.setname("Test For Chain: ")

            .CHECK_EQUAL(ansCInt.compare("123567"),0)
            .CHECK_EQUAL(ansCChar.compare("I LOVE CPP"),0)
			.CHECK_EQUAL(ansCChainX2.compare("I KNOW CPP"),0);

	
		/********************ZIP************************/
		
		string ansZIntDouble="";
		for (auto i: zip(range(1,4), range(5.5,8.5)))
		{
			ansZIntDouble += to_string(i);
		}
		
		string ansZCharInt="";
		for (auto i : zip(range('a','d'),range(1,4)))
        {
            ansZCharInt +=to_string(i);
        }
		
		string ansZIntChar="";
		for (auto i : zip(range(1,4),chain(range('A','C'),string("C"))))
        {
            ansZIntChar +=to_string(i);
        }
		
		string ansZZipX2="";
		for (auto i : zip(zip(range('a','b'), string("b")),zip(string("c"),range('d','e'))))
        {
             ansZZipX2 += to_string(i);
        }
		
		
		testcase.setname("Test For Zip: ")

            .CHECK_EQUAL(ansZIntDouble.compare("1,5.5 2,6.5 3,7.5"),0)
            .CHECK_EQUAL(ansZCharInt.compare("a,1 b,2 c,3"),0)
            .CHECK_EQUAL(ansZIntChar.compare("1,A 2,B 3,C"),0)
			.CHECK_EQUAL(ansZZipX2.compare("a,b,c,d"),0);
			
			
			
			
		/********************PRODUCT************************/
		
		string ansPIntDouble="";
		for (auto pair: product(range(1,3), range(1.1,4.1)))
		{
			ansPIntDouble += to_string(pair);
		}
		
		string ansPChar="";
		for (auto pair: product(string("ABCD"), zip(zip(range('a','b'), string("b")),zip(string("c"),range('d','e')))))
		{
			ansPChar += to_string(pair);
		}
		
		string ansPIntChar="";
		for (auto pair: product(range(1,4), string("hi")))
		{
			ansPIntChar+=to_string(pair);
		}
	
		testcase.setname("Test For Product: ")

            .CHECK_EQUAL(ansPIntDouble.compare("1,1.1 1,2.1 1,3.1 2,1.1 2,2.1 2,3.1"),0)
			.CHECK_EQUAL(ansPChar.compare("A,a A,b A,c A,d B,a B,b B,c B,d C,a C,b C,c C,d D,a D,b D,c D,d"),0)
			.CHECK_EQUAL(ansPIntChar.compare("1,h 1,i 2,h 2,i 3,h 3,i"),0); 
	
	
	
	
		/********************POWERSET************************/
		
		string ansPSInt="";
		for (auto subset: powerset(range(1,4)))
		{
			ansPSInt += to_string(subset);
		}
		
		string ansPSDoubleInt="";
		for (auto subset: powerset(chain(range(1.9,3.9),range(1,3))))
		{
			ansPSDoubleInt += to_string(subset);
		}
		
		string ansPSChar="";
		for (auto subset: powerset(chain(range('a','c'),range('x','z'))))
		{
			ansPSChar += to_string(subset);
		}
		
		string ansPSCharInt="";
		for (auto subset: powerset(chain(range('a','c'),range(1,3))))
		{
			ansPSCharInt += to_string(subset);
		}
		testcase.setname("Test For Powerset: ")
			.CHECK_EQUAL(ansPSInt.compare("{}{1}{2}{1,2}{3}{1,3}{2,3}{1,2,3}"),0)
			.CHECK_EQUAL(ansPSDoubleInt.compare("{}{1.9}{2.9}{1.9,2.9}{1}{1.9,1}{2.9,1}{1.9,2.9,1}{2}{1.9,2}{2.9,2}{1.9,2.9,2}{1,2}{1.9,1,2}{2.9,1,2}{1.9,2.9,1,2}"),0)
			.CHECK_EQUAL(ansPSChar.compare("{}{a}{b}{a,b}{x}{a,x}{b,x}{a,b,x}{y}{a,y}{b,y}{a,b,y}{x,y}{a,x,y}{b,x,y}{a,b,x,y}"),0)
			.CHECK_EQUAL(ansPSCharInt.compare("{}{a}{b}{a,b}{1}{a,1}{b,1}{a,b,1}{2}{a,2}{b,2}{a,b,2}{1,2}{a,1,2}{b,1,2}{a,b,1,2}"),0);
	
	
	
	} else {
		testcase.print_signal(signal);
		grade = 0;
	}
	cout << "Your grade is: "  << grade << endl;
	return 0;
	
}