byte led[7]={3,4,5,6,7,8,9};
bool light[10][7]={
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1}
};

void setup() {
  for(int i=0;i<sizeof(led);i++){
pinMode(led[i],OUTPUT);}
}

void loop() {
 for(int j=0;j<=10;j++) {
    for(int i=0;i<=7;i++){
      digitalWrite(led[i],light[j][i]);
    }delay(1000);
  }

}
