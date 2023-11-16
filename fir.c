#include "fir.h"

void __attribute__ ( ( section ( ".mprjram" ) ) ) initfir() {
	//initial your fir
	int * outputsignal;
}

int* __attribute__ ( ( section ( ".mprjram" ) ) ) fir(){
	initfir();
	//write down your fir
	
	for(int i=0;i<N;i++){
	  int temp=0;
	  for(int j=0;j<N;j++){
	  	if (i-j>=0){
	  		temp += inputsignal[i-j] * taps[j];
	  	}
	    
	  }
	  outputsignal[i] = temp;
	}	
	return outputsignal;
}
		
