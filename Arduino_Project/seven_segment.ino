/***********************************************************
File name: seven_segment.ino
Description:Segment display Numbers 0 to 9 and some Alphabets, each digital display 
            1 second.After the cycle show
***********************************************************/

int a=7; //definition digital 7  pins as pin to control 'a' section(segment)
int b=6; //definition digital 6  pins as pin to control 'b' section(segment)
int c=4; //definition digital 4  pins as pin to control 'c' section(segment)
int d=11;//definition digital 11 pins as pin to control 'd' section(segment)
int e=10;//definition digital 10 pins as pin to control 'e' section(segment)
int f=8; //definition digital 8  pins as pin to control 'f' section(segment)
int g=9; //definition digital 9  pins as pin to control 'g' section(segment)
int dp=5;//definition digital 5  pins as pin to control 'dp' section(segment)
//ON and OFF functions to checks all segments
void digital_ON(void) //Segment display digital ALL
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp,HIGH);
}
void digital_OFF(void) //Segment display digital NONE
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
//Numbers starts here
void digital_0(void) //Segment display digital 0
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g, LOW);
  digitalWrite(dp,LOW);
}
void digital_1(void) //Segment display digital 1
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_2(void) //Segment display digital 2
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_3(void) //Segment display digital 3
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_4(void) //Segment display digital 4
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_5(void) //Segment display digital 5
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_6(void) //Segment display digital 6
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);  
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_7(void) //Segment display digital 7
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);  
  digitalWrite(c,HIGH);  
  digitalWrite(d,LOW); 
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_8(void) //Segment display digital 8
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_9(void) //Segment display digital 9
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
//Alphabets starts here
void digital_A(void) //Segment display digital A
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_B(void) //Segment display digital b
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_C(void) //Segment display digital C
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_D(void) //Segment display digital d
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_E(void) //Segment display digital E
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_F(void) //Segment display digital F
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_G(void) //Segment display digital G
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_H(void) //Segment display digital H
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_h(void) //Segment display digital h
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_I(void) //Segment display digital I
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_J(void) //Segment display digital J
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_K(void) //Segment display digital K
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_L(void) //Segment display digital L
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_M(void) //Segment display digital M
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_N(void) //Segment display digital N
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_O(void) //Segment display digital O
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_P(void) //Segment display digital P
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_Q(void) //Segment display digital q
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_R(void) //Segment display digital r
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_S(void) //Segment display digital S
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_T(void) //Segment display digital T
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_U(void) //Segment display digital U
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_V(void) //Segment display digital V
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_W(void) //Segment display digital W
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_X(void) //Segment display digital X
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_Y(void) //Segment display digital Y
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_Z(void) //Segment display digital Z
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void setup()
{
  int i;             //Define variables
  for(i=4;i<=11;i++)
  pinMode(i,OUTPUT); //Set up 4 ~ 11 pins to output mode
}
void loop()
{
  digital_0(); //Segment display digital 0
  delay(1000); //Delay 1s
  digital_1(); //Segment display digital 1
  delay(1000); //Delay 1s
  digital_2(); //Segment display digital 2
  delay(1000); //Delay 1s
  digital_3(); //Segment display digital 3
  delay(1000); //Delay 1s
  digital_4(); //Segment display digital 4
  delay(1000); //Delay 1s
  digital_5(); //Segment display digital 5
  delay(1000); //Delay 1s
  digital_6(); //Segment display digital 6
  delay(1000); //Delay 1s
  digital_7(); //Segment display digital 7
  delay(1000); //Delay 1s
  digital_8(); //Segment display digital 8
  delay(1000); //Delay 1s
  digital_9(); //Segment display digital 8
  delay(1000); //Delay 1s
  digital_A(); //Segment display digital A
  delay(1000); //Delay 1s
  digital_B(); //Segment display digital B
  delay(1000); //Delay 1s
  digital_C(); //Segment display digital C
  delay(1000); //Delay 1s
  digital_D(); //Segment display digital D
  delay(1000); //Delay 1s
  digital_E(); //Segment display digital E
  delay(1000); //Delay 1s
  digital_F(); //Segment display digital F
  delay(1000); //Delay 1s
  digital_G(); //Segment display digital G
  delay(1000); //Delay 1s
  digital_H(); //Segment display digital H
  delay(1000); //Delay 1s
  digital_h(); //Segment display digital h(lowercase)
  delay(1000); //Delay 1s
  digital_I(); //Segment display digital I
  delay(1000); //Delay 1s
  digital_J(); //Segment display digital J
  delay(1000); //Delay 1s
  digital_K(); //Segment display digital K
  delay(1000); //Delay 1s
  digital_L(); //Segment display digital L
  delay(1000); //Delay 1s
  digital_M(); //Segment display digital M
  delay(1000); //Delay 1s
  digital_N(); //Segment display digital N
  delay(1000); //Delay 1s
  digital_O(); //Segment display digital O
  delay(1000); //Delay 1s
  digital_P(); //Segment display digital P
  delay(1000); //Delay 1s
  digital_Q(); //Segment display digital Q
  delay(1000); //Delay 1s
  digital_R(); //Segment display digital R
  delay(1000); //Delay 1s
  digital_S(); //Segment display digital S
  delay(1000); //Delay 1s
  digital_T(); //Segment display digital T
  delay(1000); //Delay 1s
  digital_U(); //Segment display digital U
  delay(1000); //Delay 1s
  digital_V(); //Segment display digital V
  delay(1000); //Delay 1s
  digital_W(); //Segment display digital W
  delay(1000); //Delay 1s
  digital_X(); //Segment display digital X
  delay(1000); //Delay 1s
  digital_Y(); //Segment display digital Y
  delay(1000); //Delay 1s
  digital_Z(); //Segment display digital Z
  delay(1000); //Delay 1s
  digital_OFF(); //Segment display digital OFF
  delay(5000); //Delay 5s
  digital_ON(); //Segment display digital ON
  delay(1000); //Delay 1s
}