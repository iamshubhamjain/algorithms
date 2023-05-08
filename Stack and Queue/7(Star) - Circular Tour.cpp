int tour(petrolPump p[],int n)
    {
       int i=0,j=1,tp=p[0].petrol-p[0].distance;
       while(i!=j||tp<0){
           while(tp<0&&i!=j){
               tp-=p[i].petrol-p[i].distance;
               i=(i+1)%n;
               if(i==0)
                return -1;
           }
           tp+=p[j].petrol-p[j].distance;
           j=(j+1)%n;
       }
       return i;
    }