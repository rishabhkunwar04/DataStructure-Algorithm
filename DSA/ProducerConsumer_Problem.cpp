#define N 100  //slots in buffer
#define count=0  //items in buffer

void producer(){
    int item;
    while(true){
        item=produce_item();
        if(count==N)
        {
            sleep(); //producer goes to sleep
        }
        insert_item(item);
        count=count+1;
        if(count==1){
            wakeup(consumer);
        }
        
    }
}
void consumer(){
    int item;
    while(true){
         if(count==0)
        {
            sleep(); //consumer goes to sleep
        }
        item=remove_item();
        count=count-1;
        if(count==N-1){
            wakeup(producer);
            }
        
  
    }
}

problem : in consumer code when at count==0 before going to sleep consumer preampt and then the 
producer read count ==0 and start incrementing the count and wakeup consumer thinking consumer is 
sleeping and after sometime when count ==N producer also goes to sleep and both ends sleeping foreever.
we need a integer which keep count of no of wakeup calls and here the role of semaphore comes into play.
