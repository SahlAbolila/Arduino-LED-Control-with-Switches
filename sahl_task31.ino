
const int red2 = 3 ;
const int red3 = 5 ;
const int red4 = 6 ;
const int red5 = 9 ;
const int green1 = 10 ;
const int green6 = 11 ;
int switchPin1 = 13 ;
int switchPin2 = 14 ;
int reading1 = 0 ;
int reading2 = 0 ;

void setup()
{
  
  pinMode(red2,OUTPUT);
  pinMode(red3,OUTPUT);
  pinMode(red4,OUTPUT);
  pinMode(red5,OUTPUT);
  pinMode(green1,OUTPUT);
  pinMode(green6,OUTPUT);
  pinMode(switchPin1,INPUT);
  pinMode(switchPin2,INPUT);
  
}

void loop()
{
  
  reading1 = digitalRead(switchPin1) ;
  reading2 = digitalRead(switchPin2) ;
  
  if ( reading1 == HIGH )
    { 
      
      for ( int i = 0 ; i<=250 ; i+=5 )
      { 
        
        analogWrite(red2,i);
        analogWrite(green1,i);
        delay ( 250 );
        
      }
    
     if ( reading1 == LOW ) 
         { 
      
      for ( int i = 250 ; i>=0 ; i-=5 )
      { 
        
        analogWrite(red2,i);
        analogWrite(green1,i);
        delay ( 250 );
        
      }
      
         }
    }
  
  if ( reading2 == HIGH )
    { 
      
      for ( int i = 0 ; i<=250 ; i+=5 )
      { 
        
        analogWrite(red4,i);
        analogWrite(green6,i);
        delay ( 250 );
        
      }
    
     if ( reading2 == LOW ) 
         { 
      
      for ( int i = 250 ; i>=0 ; i-=5 )
      { 
        
        analogWrite(red4,i);
        analogWrite(green6,i);
        delay ( 250 );
        
      }
      
         }
    }
}
  
