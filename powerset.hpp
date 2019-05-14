#pragma once
#include <cmath>
#include <vector>



namespace itertools{


   template<typename T> 
   class powerset { 


	
	
        private:
			T x;
            

        public:

           powerset(T x1):x(x1){}
			   
			  
		
		
		

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



            

            auto begin() {

		        return x.begin();

	        }



	        auto end() {

		        return x.end();

            } 



       

    }; 

}
