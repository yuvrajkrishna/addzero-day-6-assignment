    while ( n > 0 ) {
            
            int lastdigit = n % 10 ;

            if (lastdigit > 1){
                isbinary = false;
                break; 
            }
            
            
            n /= 10 ; 
        }