class Motor
{
  public:
    int pos;
    int neg;
    int speedControl;
    
    // Constructor
    Motor(int p, int n, int s): pos(p), neg(n), speedControl(s) 
    {
      pinMode(neg, OUTPUT);
      pinMode(pos, OUTPUT);
      pinMode(speedControl, OUTPUT); 

      // Making negtives as ground
      digitalWrite(neg, LOW);
    }
    ////////////////////////////////////
    //           farward()
    ////////////////////////////////////
    void farward()
    {
      digitalWrite(pos, HIGH);
      digitalWrite(neg, LOW); 
    }
    ////////////////////////////////////
    //           backward()
    ////////////////////////////////////
    void backward()
    {
      digitalWrite(pos, LOW);
      digitalWrite(neg, HIGH); 
    }
    ////////////////////////////////////
    //           speed()
    ////////////////////////////////////
    void setSpeed(short int s)
    {
      analogWrite(speedControl,s); 
    }

};
