/**
 * this Header file represents a range of objects. 
 * @author Israel Buskila and Moran Oshia
 * @since 05-2019
 */
#pragma once



namespace itertools{


   template<typename T> 
   class range { 



        private:

            T beginNum;
            T endNum;

        public:
//iterator for the range
            range(const T begin, const T end)
            {
				beginNum=begin;
				endNum=end;
			}



            

           class iterator{



                private:

                  

                     T it;



                public:

                  

                    iterator(T iter)
					{
						it=iter;
					}




		            auto operator*() {

			            return it;

		            }

		            iterator& operator++() {

                        it=it+1;
			            return *this;

		            }

		      
		            const iterator operator++(int n) {

                        iterator it = *this; 
                         ++*this; 

                        return it; 

		            }

                    
                    bool operator==(const iterator& r) const {

			            return it == r.it;

		            }

		            bool operator!=(const iterator& r) const {

			            return it != r.it;

                    }

            }; 



            
//first element
            iterator begin() const{

		        return iterator(beginNum);

	        }


//last element
	        iterator end() const{

		        return iterator(endNum);

            } 



       

    }; 

}
