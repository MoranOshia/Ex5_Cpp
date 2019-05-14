/**
 * this Header file Represents a Cartesian product of a container. 
 * @author Israel Buskila and Moran Oshia
 * @since 05-2019
 */
#pragma once
#include <iostream>
using namespace std;

namespace itertools{



    template<typename T, typename U> 

    class product{


        private:

            T x;
            U y;



        public:

//constuctor
            product(T x1 ,U y2):
            
				x(x1),
				y(y2) {}
			product(){}
//iterator for product
            class iterator{

        
                private:

          

                   
                    T xBegin;
				    T xEnd;
                    U yBegin;
                    U yEnd;
					//std::pair < T :: iterator,  U :: iterator> p;

                public:

                  

                    iterator(T iterXB,T iterXE, U  iterYB, U iterYE):
						xBegin(iterXB),
						xEnd(iterXE),
						yBegin(iterYB),
						yEnd(iterYE)
						
						{}


		           /* auto operator*() const{

                        

                            return make_pair(*xBegin,*yBegin);

		            } 
					std::pair<decltype(*xBegin),decltype(*yBegin)> operator*() const{
						
							return std::pair<decltype(*xBegin),decltype(*yBegin)> (*xBegin,*yBegin);
					}

					

		            iterator& operator++() {

                       if(xBegin != xEnd&&yBegin != yEnd){

                            xBegin++;
			               yBegin++;

                        }

                        
			            return *this;

		            }


		            iterator operator++(int n) {

                        iterator it = *this; 
                         ++*this; 
                        return it; 

		            }

             
                    bool operator==(const iterator& r) const {

			            bool flag= (xBegin == r.xBegin) && (yBegin == r.yBegin);
						return flag;
		            }


		            bool operator!=(const iterator& r) const {

			            bool flag= (xBegin != r.xBegin) && (yBegin != r.yBegin);
						return flag;

                    }*/

            }; 

//first element
            auto begin()const {

		        return x.begin();

	        }
//last element
	         auto end()const {

		        return x.end();

            }


		

		
    }; 

}
