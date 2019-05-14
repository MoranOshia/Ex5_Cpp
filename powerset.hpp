/**
 * Header file Represents all of the subgroups of the container. 
 * @author Israel Buskila and Moran Oshia
 * @since 05-2019
 */
#pragma once
#include <cmath>
#include <vector>



namespace itertools{


   template<typename T> 
   class powerset { 


	
	
        private:
			T x;
            

        public:
//constructor
           powerset(T x1):x(x1){}
			   
			  
		
		
		
//iterator
           class iterator{



                private:

                  

                     T it;



                public:

                  

                    iterator(T iter):
						it(iter)
						{}




		    //         auto operator*() {

			//             return it;

		    //         }

		    //         iterator& operator++() {

            //             it=it+1;
			//             return *this;

		    //         }

		      
		    //         const iterator operator++(int n) {

            //             iterator it = *this; 
            //              ++*this; 

            //             return it; 

		    //         }

                    
            //         bool operator==(const iterator& r) const {

			//             return it == r.it;

		    //         }

		            // bool operator!=(const iterator& r) const {

			        //     return it != r.it;

                    // }

            }; 



            
//first element
            auto begin() const{

		        return x.begin();

	        }


//last element
	        auto end() const{

		        return x.end();

            } 



       

    }; 

}
