#pragma once
#include <iostream>
using namespace std;

namespace itertools{



    template<typename T, typename U> 

    class zip{


        private:

            T x;
            U y;



        public:


            zip(T x1 ,U y2):
            
				x(x1),
				y(y2) {}
			zip(){}

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


            auto begin() const {

		        return x.begin();

	        }

	         auto end() const{

		        return x.end();

            }


		

		
    }; 

}
