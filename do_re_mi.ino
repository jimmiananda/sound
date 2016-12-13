int speaker= 9; 
void setup()
{ 
}
void DO() {  tone(speaker, 262); }  
void RE() {  tone(speaker, 294); }  
void MI() {  tone(speaker, 330); }  
void FA() {  tone(speaker, 349); }   
void SOL() {  tone(speaker, 395); }  
void LA() {  tone(speaker, 440); }   
void SI() {  tone(speaker, 494); }   
void DOO() {  tone(speaker, 523); }       
void DIAM() {  noTone(speaker); }       
void loop() {
  SOL(); delay(500);      
  MI(); delay(1000);   
  SOL(); delay(1000);   
  DOO(); delay(1000); 
  DIAM(); delay(500);
  SOL(); delay(500);  
  DOO(); delay(500);   
  SOL(); delay(500);   
  FA() ; delay(500);     
  MI(); delay(500);      
  RE(); delay(1000);
  DIAM(); delay(500);
  FA(); delay(500);     
  RE(); delay(1000);  
  FA(); delay(1000);  
  LA(); delay(1000);   
  SOL(); delay(500);   
  DO(); delay(500);  
  MI(); delay(500);    
  RE(); delay(500);     
  DO(); delay(1000); 
  DIAM(); delay(500);
  SOL(); delay(500);  
  MI(); delay(1000);  
  SOL(); delay(1000); 
  DIAM(); delay(500);
  SOL(); delay(500);  
  DOO(); delay(500);  
  SOL(); delay(500);   
  FA(); delay(500);     
  MI(); delay(500);     
  RE(); delay(1000);
  DIAM(); delay(500);
  FA(); delay(500);    
  RE(); delay(1000);    
  FA(); delay(1000); 
  LA(); delay(1000);  
  SOL(); delay(500);    
  DO(); delay(500);  
  MI(); delay(500);    
  RE(); delay(500);      
  DO(); delay(1000); 
  DIAM(); delay(1000);
}
