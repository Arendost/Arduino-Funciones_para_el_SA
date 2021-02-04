void back (int V1){
  
  servo1.write(V1); 
  servo2.write(V1);
}

void chocar (int V2){
  
  servo1.write(V2); 
  servo2.write(V2);
}


void Rotar (int V1, int V2){

  servo1.write(V1); 
  servo2.write(V2);;
}

void Stop(){
 servo1.write(1500); 
 servo2.write(1500);
}
