#include<stdio.h>
void HRK(char harf1,char harf2,short AX,short BX,short CX,short DX){
	if(harf1=='A'){
		if(harf2=='A'){
			AX=AX;
			printf("AX = AX \n");
		}
		else if(harf2=='B'){
			AX=BX;
			printf("AX = BX\n");
		}else if(harf2=='C'){
			AX=CX;
			printf("AX = CX\n");
		} else if(harf2=='D'){
			AX=DX;
			printf("AX = DX\n");
		}        	    	
	}else if(harf1=='B'){
	    if(harf2=='A'){
			BX=AX;
			printf("BX = AX\n");
		}
		else if(harf2=='B'){
			BX=BX;
			printf("BX = BX\n");
		}else if(harf2=='C'){
			BX=CX;
			printf("BX = CX\n");
		} else if(harf2=='D'){
			BX=DX;
			printf("BX = DX\n");
		}        	   
	}else if(harf1=='C'){
		if(harf2=='A'){
			CX=AX;
			printf("CX = AX\n");
		}
		else if(harf2=='B'){
			CX=BX;
			printf("CX = BX\n");
		}else if(harf2=='C'){
			CX=CX;
			printf("CX = CX\n");
		} else if(harf2=='D'){
			CX=DX;
			printf("CX = DX\n");
		}        	   
	}else if(harf1=='D'){
	   if(harf2=='A'){
			DX=AX;
			printf("DX = AX\n");
		}
		else if(harf2=='B'){
			DX=BX;
			printf("DX = BX\n");
		}else if(harf2=='C'){
			DX=CX;
			printf("DX = CX\n");
		} else if(harf2=='D'){
			DX=DX;
			printf("DX = DX\n");
		}        	   
	}			   	   
}
void TOP(char harf1,char harf2,short AX,short BX,short CX,short DX){
	if(harf1=='A'){
		if(harf2=='A'){
			AX=AX+AX;
			printf("AX = AX + AX\n");
		}
		else if(harf2=='B'){
			AX=AX+BX;
			printf("AX = AX + BX\n");
		}else if(harf2=='C'){
			AX=AX+CX;
			printf("AX = AX + CX\n");
		} else if(harf2=='D'){
			AX=AX+DX;
			printf("AX = AX + DX\n");
		}        	    	
	}else if(harf1=='B'){
	    if(harf2=='A'){
			BX=BX+AX;
			printf("BX = BX + AX\n");
		}
		else if(harf2=='B'){
			BX=BX+BX;
			printf("BX = BX + BX\n");
		}else if(harf2=='C'){
			BX=BX+CX;
			printf("BX = BX + CX\n");
		} else if(harf2=='D'){
			BX=BX+DX;
			printf("BX = BX + DX\n");
		}        	   
	}else if(harf1=='C'){
		if(harf2=='A'){
			CX=CX+AX;
			printf("CX = CX + AX\n");
		}
		else if(harf2=='B'){
			CX=CX+BX;
			printf("CX = CX + BX\n");
		}else if(harf2=='C'){
			CX=CX+CX;
			printf("CX = CX + CX\n");
		} else if(harf2=='D'){
			CX=CX+DX;
			printf("CX = CX + DX\n");
		}        	   
	}else if(harf1=='D'){
	   if(harf2=='A'){
			DX=DX+AX;
			printf("DX = DX + AX\n");
		}
		else if(harf2=='B'){
			DX=DX+BX;
			printf("DX = DX + BX\n");
		}else if(harf2=='C'){
			DX=DX+CX;
			printf("DX = DX + CX\n");
		} else if(harf2=='D'){
			DX=DX+DX;
			printf("DX = DX + DX\n");
		}        	   
	}			  
}
void CRP(char harf1,char harf2,short AX,short BX,short CX,short DX){
	if(harf1=='A'){
		if(harf2=='A'){
			AX=AX*AX;
			printf("AX = AX * AX\n");
		}
		else if(harf2=='B'){
			AX=AX*BX;
			printf("AX = AX * BX\n");
		}else if(harf2=='C'){
			AX=AX*CX;
			printf("AX = AX * CX\n");
		} else if(harf2=='D'){
			AX=AX*DX;
			printf("AX = AX * DX\n");
		}        	    	
	}else if(harf1=='B'){
	    if(harf2=='A'){
			BX=BX*AX;
			printf("BX = BX * AX\n");
		}
		else if(harf2=='B'){
			BX=BX*BX;
			printf("BX = BX * BX\n");
		}else if(harf2=='C'){
			BX=BX*CX;
			printf("BX = BX * CX\n");
		} else if(harf2=='D'){
			BX=BX*DX;
			printf("BX = BX * DX\n");
		}        	   
	}else if(harf1=='C'){
		if(harf2=='A'){
			CX=CX*AX;
			printf("CX = CX * AX\n");
		}
		else if(harf2=='B'){
			CX=CX*BX;
			printf("CX = CX * BX\n");
		}else if(harf2=='C'){
			CX=CX*CX;
			printf("CX = CX * CX\n");
		} else if(harf2=='D'){
			CX=CX*DX;
			printf("CX = CX * DX\n");
		}        	   
	}else if(harf1=='D'){
	    if(harf2=='A'){
			DX=DX*AX;
			printf("DX = DX * AX\n");
		}
		else if(harf2=='B'){
			DX=DX*BX;
			printf("DX = DX * BX\n");
		}else if(harf2=='C'){
			DX=DX*CX;
			printf("DX = DX * CX\n");
		} else if(harf2=='D'){
			DX=DX*DX;
			printf("DX = DX * DX\n");
		}        	   
	}	
}
void CIK(char harf1,char harf2,short AX,short BX,short CX,short DX){
	if(harf1=='A'){
		if(harf2=='A'){
			AX=AX-AX;
			printf("AX = AX - AX\n");
		}
		else if(harf2=='B'){
			AX=AX-BX;
			printf("AX = AX - BX\n");
		}else if(harf2=='C'){
			AX=AX-CX;
			printf("AX = AX - CX\n");
		} else if(harf2=='D'){
			AX=AX-DX;
			printf("AX = AX - DX\n");
		}        	    	
	}else if(harf1=='B'){
	    if(harf2=='A'){
			BX=BX-AX;
			printf("BX = BX - AX\n");
		}
		else if(harf2=='B'){
			BX=BX-BX;
			printf("BX = BX - BX\n");
		}else if(harf2=='C'){
			BX=BX-CX;
			printf("BX = BX - CX\n");
		} else if(harf2=='D'){
			BX=BX-DX;
			printf("BX = BX - DX\n");
		}        	   
	}else if(harf1=='C'){
		if(harf2=='A'){
			CX=CX-AX;
			printf("CX = CX - AX\n");
		}
		else if(harf2=='B'){
			CX=CX-BX;
			printf("CX = CX - BX\n");
		}else if(harf2=='C'){
			CX=CX-CX;
			printf("CX = CX - CX\n");
		} else if(harf2=='D'){
			CX=CX-DX;
			printf("CX = CX - DX\n");
		}        	   
	}else if(harf1=='D'){
	   if(harf2=='A'){
			DX=DX-AX;
			printf("DX = DX - AX\n");
		}
		else if(harf2=='B'){
			DX=DX-BX;
			printf("DX = DX - BX\n");
		}else if(harf2=='C'){
			DX=DX-CX;
			printf("DX = DX - CX\n");
		} else if(harf2=='D'){
			DX=DX-DX;
			printf("DX = DX - DX\n");
		}        	   
	}	
}
void BOL(char harf1,char harf2,short AX,short BX,short CX,short DX){
	if(harf1=='A'){
		if(AX==0||BX==0||CX==0||DX==0){
		    printf("Gecersiz islem payda sifir olamaz!\n");
        }else{
			if(harf2=='A'){
			    AX=AX/AX;
			    DX=AX%AX;
			    printf("AX = AX / AX ----> DX = AX mod AX\n");
		    }
		    else if(harf2=='B'){
			    AX=AX/BX;
		    	DX=AX%BX;
			    printf("AX = AX / BX---->DX = AX mod BX\n");
		    }else if(harf2=='C'){
			    AX=AX/CX;
			    DX=AX%CX;
			    printf("CX = CX / AX---->DX = AX mod CX\n");
		    } else if(harf2=='D'){
			    AX=AX/DX;
			    DX=AX%DX;
			    printf("DX = DX / AX ----> DX = AX mod BX\n");
		    } 
		}    
	}else if(harf1=='B'){
		if(AX==0||BX==0||CX==0||DX==0){
		    printf("Gecersiz islem payda sifir olamaz!\n");
	    }else{
	        if(harf2=='A'){
			    BX=BX/AX;
			    DX=BX%AX;
			    printf("BX = BX / AX ----> DX = BX mod AX\n");
		    }
		    else if(harf2=='B'){
		        BX=BX/BX;
			    DX=BX%BX;
			    printf("BX = BX / BX ----> DX = BX mod BX\n");
		    }else if(harf2=='C'){
			    BX=BX/CX;
			    DX=BX%CX;
			    printf("BX = BX / CX ----> DX = BX mod CX\n");
		    } else if(harf2=='D'){
		    	BX=BX/DX;
			    DX=BX%DX;
			    printf("BX = BX / DX ----> DX = BX mod DX\n");
		    }        	   
	    }
	}else if(harf1=='C'){
		if(AX==0||BX==0||CX==0||DX==0){
		    printf("Gecersiz islem payda sifir olamaz!\n");
		}else{
		    if(harf2=='A'){
		        CX=CX/AX;
	            DX=CX%AX;
		        printf("CX = CX / AX ----> DX = CX mod AX\n");
	        }
		    else if(harf2=='B'){
			    CX=CX/BX;
			    DX=CX%BX;
			    printf("CX = CX / BX---->DX=CX mod BX\n");
		    }else if(harf2=='C'){
		        CX=CX/CX;
	     	    DX=CX%CX;
			    printf("CX = CX / CX ----> DX = CX mod CX\n");
		    } else if(harf2=='D'){
			    CX=CX/DX;
			    DX=CX%DX;
			    printf("CX = CX / DX ----> DX = CX mod DX\n");
		    }        	   
        }
	}else if(harf1=='D'){
		if(AX==0||BX==0||CX==0||DX==0){
	    printf("Gecersiz islem payda sifir olamaz!\n");
	    }else{
	        if(harf2=='A'){
			    DX=DX/AX;
			    DX=DX%AX;
			    printf("DX = DX / AX ----> DX = DX mod AX\n");
		    }
		    else if(harf2=='B'){
			    DX=DX/BX;
			    DX=DX%BX;
			    printf("DX = DX / BX ----> DX = DX mod BX\n");
		    }else if(harf2=='C'){
			    DX=DX/CX;
			    DX=DX%CX;
			    printf("DX = DX / CX ----> DX = DX mod CX\n");
		    } else if(harf2=='D'){
			    DX=DX/DX;
			    DX=DX%DX;
			    printf("DX = DX / DX ----> DX = DX mod DX\n");
		    }        	   
	    }
	}
	
}
void VEYA(char harf1,char harf2,short AX,short BX,short CX,short DX){
	if(harf1=='A'){
		if(harf2=='A'){
			AX=AX|AX;
			printf("AX = AX | AX\n");
		}
		else if(harf2=='B'){
			AX=AX|BX;
			printf("AX = AX | BX\n");
		}else if(harf2=='C'){
			AX=AX|CX;
			printf("AX = AX | CX\n");
		} else if(harf2=='D'){
			AX=AX|DX;
			printf("AX = AX | DX\n");
		}        	    	
	}else if(harf1=='B'){
	    if(harf2=='A'){
			BX=BX|AX;
			printf("BX = BX | AX\n");
		}
		else if(harf2=='B'){
			BX=BX|BX;
			printf("BX = BX | BX\n");
		}else if(harf2=='C'){
			BX=BX|CX;
			printf("BX = BX | CX\n");
		} else if(harf2=='D'){
			BX=BX|DX;
			printf("BX = BX | DX\n");
		}        	   
	}else if(harf1=='C'){
		if(harf2=='A'){
			CX=CX|AX;
			printf("CX = CX | AX\n");
		}
		else if(harf2=='B'){
			CX=CX|BX;
			printf("CX = CX | BX\n");
		}else if(harf2=='C'){
			CX=CX|CX;
			printf("CX = CX | CX\n");
		} else if(harf2=='D'){
			CX=CX|DX;
			printf("CX = CX | DX\n");
		}        	   
	}else if(harf1=='D'){
	   if(harf2=='A'){
			DX=DX|AX;
			printf("DX = DX | AX\n");
		}
		else if(harf2=='B'){
			DX=DX|BX;
			printf("DX = DX | BX\n");
		}else if(harf2=='C'){
			DX=DX|CX;
			printf("DX = DX | CX\n");
		} else if(harf2=='D'){
			DX=DX|DX;
			printf("DX = DX | DX\n");
		}        	   
	}	
}
void VE(char harf1,char harf2,short AX,short BX,short CX,short DX){
	if(harf1=='A'){
		if(harf2=='A'){
			AX=AX&AX;
			printf("AX = AX & AX\n");
		}
		else if(harf2=='B'){
			AX=AX&BX;
			printf("AX = AX & BX\n");
		}else if(harf2=='C'){
			AX=AX&CX;
			printf("AX = AX & CX\n");
		} else if(harf2=='D'){
			AX=AX&DX;
			printf("AX = AX & DX\n");
		}        	    	
	}else if(harf1=='B'){
	    if(harf2=='A'){
			BX=BX&AX;
			printf("BX = BX & AX\n");
		}
		else if(harf2=='B'){
			BX=BX&BX;
			printf("BX=BX&BX\n");
		}else if(harf2=='C'){
			BX=BX&CX;
			printf("BX = BX & CX\n");
		} else if(harf2=='D'){
			BX=BX&DX;
			printf("BX = BX & DX\n");
		}        	   
	}else if(harf1=='C'){
		if(harf2=='A'){
			CX=CX&AX;
			printf("CX = CX & AX\n");
		}
		else if(harf2=='B'){
			CX=CX&BX;
			printf("CX = CX & BX\n");
		}else if(harf2=='C'){
			CX=CX&CX;
			printf("CX = CX & CX\n");
		} else if(harf2=='D'){
			CX=CX&DX;
			printf("CX = CX & DX\n");
		}        	   
	}else if(harf1=='D'){
	   if(harf2=='A'){
			DX=DX&AX;
			printf("DX = DX & AX\n");
		}
		else if(harf2=='B'){
			DX=DX&BX;
			printf("DX = DX & BX\n");
		}else if(harf2=='C'){
			DX=DX&CX;
			printf("DX = DX & CX\n");
		} else if(harf2=='D'){
			DX=DX&DX;
			printf("DX = DX & DX\n");
		}        	   
	}	
}
void DEG(char harf1,short AX,short BX,short CX,short DX){
	if(harf1=='A'){
			AX=~AX;
			printf("AX = ~ AX\n"); 	    	
	}else if(harf1=='B'){
			BX=~BX;
			printf("BX = ~ BX\n");        	   
	}else if(harf1=='C'){
			CX=~CX;
			printf("CX = ~ CX\n");   
	}else if(harf1=='D'){
			DX=~DX;
			printf("DX = ~ DX\n");
	}	
}
void adresH(short RAM[256],short harf1,int sayi1,short AX,short BX,short CX,short DX){
	if(harf1=='A'){	
		AX=RAM[sayi1];
		printf("AX = %d\n",AX);
	}else if(harf1=='B'){
		BX=RAM[sayi1];
		printf("BX = %d\n",BX);
	}else if(harf1=='C'){
		CX=RAM[sayi1];
		printf("CX = %d\n",CX);
	}else if(harf1=='D'){
		DX=RAM[sayi1];
		printf("DX = %d\n",DX);
	}
}
void adresT(short RAM[256],short harf1,char sayi1,short AX,short BX,short CX,short DX){
	if(harf1=='A'){	
		AX=AX+RAM[sayi1];
		printf("AX = AX + %d\n",AX);
	}else if(harf1=='B'){
		BX=BX+RAM[sayi1];
		printf("BX = BX + %d\n",BX);
	}else if(harf1=='C'){
		CX=CX+RAM[sayi1];
		printf("CX = CX + %d\n",CX);
	}else if(harf1=='D'){
		DX=DX+RAM[sayi1];
		printf("DX = DX + %d\n",DX);
	}
}
void adresCR(short RAM[256],short harf1,char sayi1,short AX,short BX,short CX,short DX){
	if(harf1=='A'){	
		AX=AX*RAM[sayi1];
		printf("AX = AX * %d\n",AX);
	}else if(harf1=='B'){
		BX=BX*RAM[sayi1];
		printf("BX = BX * %d\n",BX);
	}else if(harf1=='C'){
		CX=CX*RAM[sayi1];
		printf("CX = CX * %d\n",CX);
	}else if(harf1=='D'){
		DX=DX*RAM[sayi1];
		printf("DX = DX * %d\n",DX);
	}
}
void adresCI(short RAM[256],short harf1,char sayi1,short AX,short BX,short CX,short DX){
	if(harf1=='A'){	
		AX=AX-RAM[sayi1];
		printf("AX = AX - %d\n",AX);
	}else if(harf1=='B'){
		BX=BX-RAM[sayi1];
		printf("BX = BX - %d\n",BX);
	}else if(harf1=='C'){
		CX=CX-RAM[sayi1];
		printf("CX = CX - %d\n",CX);
	}else if(harf1=='D'){
		DX=DX-RAM[sayi1];
		printf("DX = DX - %d\n",DX);
	}
}
void adresB(short RAM[256],short harf1,char sayi1,short AX,short BX,short CX,short DX){
	if(RAM[sayi1]==0){
		printf("Gecersiz islem payda sifir olamaz!\n");
	}else{
	    if(harf1=='A'){	
		    AX=AX/RAM[sayi1];
		    printf("AX = AX / %d\n",AX);
	    }else if(harf1=='B'){
		    BX=BX/RAM[sayi1];
		    printf("BX = BX / %d\n",BX);
	    }else if(harf1=='C'){
		    CX=CX/RAM[sayi1];
	    	printf("CX = CX / %d\n",CX);
	    }else if(harf1=='D'){
	    	DX=DX/RAM[sayi1];
    		printf("DX = DX / %d\n",DX);
	    }	
	}

}
void adresV(short RAM[256],short harf1,char sayi1,short AX,short BX,short CX,short DX){
	if(harf1=='A'){	
		AX=AX&RAM[sayi1];
		printf("AX = AX & %d\n",AX);
	}else if(harf1=='B'){
		BX=BX&RAM[sayi1];
		printf("BX = BX & %d\n",BX);
	}else if(harf1=='C'){
		CX=CX&RAM[sayi1];
		printf("CX = CX & %d\n",CX);
	}else if(harf1=='D'){
		DX=DX&RAM[sayi1];
		printf("DX = DX & %d\n",DX);
	}
}
void adresVY(short RAM[256],short harf1,char sayi1,short AX,short BX,short CX,short DX){
	if(harf1=='A'){	
		AX=AX|RAM[sayi1];
		printf("AX = AX | %d\n",AX);
	}else if(harf1=='B'){
		BX=BX|RAM[sayi1];
		printf("BX = BX | %d\n",BX);
	}else if(harf1=='C'){
		CX=CX|RAM[sayi1];
		printf("CX = CX | %d\n",CX);
	}else if(harf1=='D'){
		DX=DX|RAM[sayi1];
		printf("DX = DX | %d\n",DX);
	}
}
int main(){
    int j=0;
	short AX,BX,CX,DX;
	int X;
	short RAM[256];
    FILE *dosya;
	char yol[500];
	char veri[500];
	
	printf("\nDosyanizin adini giriniz->>");
	scanf("%s", &yol);
	dosya = fopen(yol, "r");
	
	if(dosya == NULL){
		printf("\nDosyaniz bulunamadi!\n");
	    return 0;
	}
	else{
		printf("\nDOSYANIZ BASARI ILE OKUNMUSTUR.\n\n");
		dosya = fopen(yol, "r");
		//Dosya içerisinde yazanlar
		while(!feof(dosya)){
            for(j=0;j<250;j++){  
				fscanf(dosya, "%c", &veri[j]);
				if( veri[j]!='\0'){
					printf("%c",veri[j]);
			    }
			}
		    printf("\n\n------------------\n\n");
		   //KOMUTLAR
			for(j=0;j<250;j++){	
			    if(veri[j]=='H'){//HRK komutu
			        if(veri[j+7]=='A'||veri[j+7]=='B'||veri[j+7]=='C'||veri[j+7]=='D'){
						HRK(veri[j+4],veri[j+7],AX,BX,CX,DX);
					}else if(veri[j+7]=='['){
						if((int)veri[j+10]==10){
							X=(int)veri[j+8]-48;
							adresH(RAM,veri[j+4],X,AX,BX,CX,DX);
						}else if((int)veri[j+11]==10){
						    X=((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
						    adresH(RAM,veri[j+4],X,AX,BX,CX,DX);
						}else if((int)veri[j+12]==10){
						    X=((int)veri[j+8]-48)*100+((int)veri[j+9]-48)*10+(int)veri[j+10]-48;
						    adresH(RAM,veri[j+4],X,AX,BX,CX,DX);
						}
					}else{
						if((int)veri[j+8]==10){
							if(veri[j+4]=='A'){
							    AX=(int)veri[j+7]-48;
			    				printf(" AX = %d\n",AX);
			    			}else if(veri[j+4]=='B'){
			    				BX=(int)veri[j+7]-48;
			    				printf("BX = %d\n",BX);
							}else if(veri[j+4]=='C'){
								CX=(int)veri[j+7]-48;
			    				printf("CX = %d\n",CX);
							}else if(veri[j+4]=='D'){
								DX=(int)veri[j+7]-48;
			    				printf("DX = %d\n",DX);
							}
						}else if((int)veri[j+9]==10){
							if(veri[j+4]=='A'){
								AX=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
			    				printf("AX = %d\n",AX);
							}else if(veri[j+4]=='B'){
								BX=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
			    				printf("BX = %d\n",BX);
							}else if(veri[j+4]=='C'){
								CX=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
			    				printf("CX = %d\n",CX);
							}else if(veri[j+4]=='D'){
								DX=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
			    				printf("DX = %d\n",DX);
							}
						}else if((int)veri[j+10]==10||(int)veri[j+10]==0){
							if(veri[j+4]=='A'){
								AX=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
			    				printf("AX = %d\n",AX);
							}else if(veri[j+4]=='B'){
								BX=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
			    				printf("BX = %d\n",BX);
							}else if(veri[j+4]=='C'){
								CX=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
			    			    printf("CX = %d\n",CX);
							}else if(veri[j+4]=='D'){
								DX=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
			    				printf("DX = %d\n",DX);
							}
						}
					}
			    }
			    else if(veri[j]=='T'){ // TOP komutu
					if(veri[j+7]=='A'||veri[j+7]=='B'||veri[j+7]=='C'||veri[j+7]=='D'){
						TOP(veri[j+4],veri[j+7],AX,BX,CX,DX);
					}else if(veri[j+7]=='['){
						if((int)veri[j+10]==10){
							X=(int)veri[j+8]-48;
							adresT(RAM,veri[j+4],X,AX,BX,CX,DX);
						}else if((int)veri[j+11]==10){
						    X=((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
						    adresT(RAM,veri[j+4],X,AX,BX,CX,DX);
						}else if((int)veri[j+12]==10){
						    X=((int)veri[j+8]-48)*100+((int)veri[j+9]-48)*10+(int)veri[j+10]-48;
						    adresT(RAM,veri[j+4],X,AX,BX,CX,DX);
						}
					}else{
						if((int)veri[j+8]==10){
							if(veri[j+4]=='A'){
							    X=(int)veri[j+7]-48;
							    AX=AX+X;
			    				printf("AX = AX + %d\n",X);
			    			}else if(veri[j+4]=='B'){
			    				X=(int)veri[j+7]-48;
			    				BX=BX+X;
			    				printf("BX = BX + %d\n",X);
							}else if(veri[j+4]=='C'){
								X=(int)veri[j+7]-48;
								CX=CX+X;
			    				printf("CX = CX + %d\n",X);
							}else if(veri[j+4]=='D'){
								X=(int)veri[j+7]-48;
								DX=DX+X;
			    				printf("DX = DX + %d\n",X);
							}
						}else if((int)veri[j+9]==10){
							if(veri[j+4]=='A'){
								X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
								AX=AX+X;
			    				printf("AX = AX + %d\n",X);
							}else if(veri[j+4]=='B'){
								X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
								BX=BX+X;
			    				printf("BX = BX + %d\n",X);
							}else if(veri[j+4]=='C'){
								X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
								CX=CX+X;
			    			    printf("CX = CX + %d\n",X);
							}else if(veri[j+4]=='D'){
								X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
								DX=DX+X;
			    				printf("DX = DX + %d\n",X);
							}
						}else if((int)veri[j+10]==10||(int)veri[j+10]==0){
							if(veri[j+4]=='A'){
								X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
								AX=AX+X;
			    				printf("AX = AX + %d\n",X);
							}else if(veri[j+4]=='B'){
								X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
								BX=BX+X;
			    				printf("BX = BX + %d\n",X);
							}else if(veri[j+4]=='C'){
								X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
								CX=CX+X;
			    				printf("CX = CX + %d\n",X);
							}else if(veri[j+4]=='D'){
								X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
								DX=DX+X;
			    				printf("DX = DX + %d\n",X);
							}
						}
					}
				}//CRP ve CIK komutularý
				else if( veri[j]=='C'){
					if(veri[j+1]=='R'){//CRP komutu
						if(veri[j+7]=='A'||veri[j+7]=='B'||veri[j+7]=='C'||veri[j+7]=='D'){
						   	CRP(veri[j+4],veri[j+7],AX,BX,CX,DX);
						}else if(veri[j+7]=='['){
						    if((int)veri[j+10]==10){
						        X=(int)veri[j+8]-48;
							    adresCR(RAM,veri[j+4],X,AX,BX,CX,DX);
						    }else if((int)veri[j+11]==10){
						        X=((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
						        adresCR(RAM,veri[j+4],X,AX,BX,CX,DX);
						    }else if((int)veri[j+12]==10){
						        X=((int)veri[j+8]-48)*100+((int)veri[j+9]-48)*10+(int)veri[j+10]-48;
						        adresCR(RAM,veri[j+4],X,AX,BX,CX,DX);
						    }
					    }else{
							if((int)veri[j+8]==10){
							    if(veri[j+4]=='A'){
							    	X=(int)veri[j+7]-48;
							    	AX=AX*X;
			    				    printf("AX = AX * %d\n",X);
			    				}else if(veri[j+4]=='B'){
			    					X=(int)veri[j+7]-48;
			    					BX=BX*X;
			    				    printf("BX = BX * %d\n",X);
							    }else if(veri[j+4]=='C'){
									X=(int)veri[j+7]-48;
									CX=CX*X;
			    				    printf("CX = CX * %d\n",X);
								}else if(veri[j+4]=='D'){
								    X=(int)veri[j+7]-48;
								    DX=DX*X;
			    				    printf("DX = DX * %d\n",X);
								}
							}else if((int)veri[j+9]==10){
								if(veri[j+4]=='A'){
									X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
									AX=AX*X;
			    				    printf("AX = AX * %d\n",X);
							    }else if(veri[j+4]=='B'){
									X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
									BX=BX*X;
			    				    printf("BX = BX * %d\n",X);
								}else if(veri[j+4]=='C'){
									X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
									CX=CX*X;
			    				    printf("CX = CX * %d\n",X);
							    }else if(veri[j+4]=='D'){
									X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
									DX=DX*X;
			    				    printf("DX = DX * %d\n",X);
								}
							}else if((int)veri[j+10]==10||(int)veri[j+10]==0){
								if(veri[j+4]=='A'){
									X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
									AX=AX*X;
			    				    printf("AX = AX * %d\n",X);
								}else if(veri[j+4]=='B'){
									X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
									BX=BX*X;
			    				    printf("BX = BX * %d\n",X);
								}else if(veri[j+4]=='C'){
									X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
									CX=CX*X;
			    				    printf("CX = CX * %d\n",X);
							    }else if(veri[j+4]=='D'){
									X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
									DX=DX*X;
			    				    printf("DX = DX * %d\n",X);
								}
							}
					    }
					}else if(veri[j+1]=='I'){//CIK komutu
						if(veri[j+7]=='A'||veri[j+7]=='B'||veri[j+7]=='C'||veri[j+7]=='D'){
						   	CIK(veri[j+4],veri[j+7],AX,BX,CX,DX);
						}else if(veri[j+7]=='['){
						    if((int)veri[j+10]==10){
						 	    X=(int)veri[j+8]-48;
							    adresCI(RAM,veri[j+4],X,AX,BX,CX,DX);
						    }else if((int)veri[j+11]==10){
						        X=((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
						        adresCI(RAM,veri[j+4],X,AX,BX,CX,DX);
						    }else if((int)veri[j+12]==10){
						        X=((int)veri[j+8]-48)*100+((int)veri[j+9]-48)*10+(int)veri[j+10]-48;
						        adresCI(RAM,veri[j+4],X,AX,BX,CX,DX);
						    }
					    }else{
							if((int)veri[j+8]==10){
							    if(veri[j+4]=='A'){
							    	X=(int)veri[j+7]-48;
							    	AX=AX-X;
			    				    printf("AX = AX - %d\n",X);
			    				}else if(veri[j+4]=='B'){
			    					X=(int)veri[j+7]-48;
			    					BX=BX-X;
			    				    printf("BX = BX - %d\n",X);
							    }else if(veri[j+4]=='C'){
									X=(int)veri[j+7]-48;
									CX=CX-X;
			    				    printf("CX = CX - %d\n",X);
								}else if(veri[j+4]=='D'){
								    X=(int)veri[j+7]-48;
								    DX=DX-X;
			    				    printf("DX = DX - %d\n",X);
								}
							}else if((int)veri[j+9]==10){
								if(veri[j+4]=='A'){
									X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
									AX=AX-X;
			    				    printf("AX = AX - %d\n",X);
							    }else if(veri[j+4]=='B'){
									X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
									BX=BX-X;
			    				    printf("BX = BX - %d\n",X);
								}else if(veri[j+4]=='C'){
									X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
									CX=CX-X;
			    				    printf("CX = CX - %d\n",X);
							    }else if(veri[j+4]=='D'){
									X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
									DX=DX-X;
			    				    printf("DX = DX - %d\n",X);
								}
							}else if((int)veri[j+10]==10||(int)veri[j+10]==0){
								if(veri[j+4]=='A'){
									X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
									AX=AX-X;
			    				    printf("AX = AX - %d\n",X);
								}else if(veri[j+4]=='B'){
									X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
									BX=BX-X;
			    				    printf("BX = BX - %d\n",X);
								}else if(veri[j+4]=='C'){
									X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
									CX=CX-X;
			    				    printf("CX = CX - %d\n",X);
							    }else if(veri[j+4]=='D'){
									X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
									DX=DX-X;
			    				    printf("DX = DX - %d\n",X);
								}
							}
					    }						      
					}
				}
				else if( veri[j]=='B'){//BOL komutu
					if(veri[j+7]=='A'||veri[j+7]=='B'||veri[j+7]=='C'||veri[j+7]=='D'){
						BOL(veri[j+4],veri[j+7],AX,BX,CX,DX);
					}else if(veri[j+7]=='['){
						if((int)veri[j+10]==10){
							X=(int)veri[j+8]-48;
							adresB(RAM,veri[j+4],X,AX,BX,CX,DX);
						}else if((int)veri[j+11]==10){
						    X=((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
						    adresB(RAM,veri[j+4],X,AX,BX,CX,DX);
						}else if((int)veri[j+12]==10){
						    X=((int)veri[j+8]-48)*100+((int)veri[j+9]-48)*10+(int)veri[j+10]-48;
						    adresB(RAM,veri[j+4],X,AX,BX,CX,DX);
						}
					}else{
						if((int)veri[j+8]==10){
							if(veri[j+4]=='A'){
							    X=(int)veri[j+7]-48;
							   	AX=AX/X;
			    				DX=AX%X;
			    				printf("AX = AX / %d ---> DX = AX mod %d\n",X,X);
			    			}else if(veri[j+4]=='B'){
			    				X=(int)veri[j+7]-48;
			    				BX=BX/X;
			    				DX=BX%X;
			    				printf("BX = BX / %d ---> DX = BX mod %d\n",X,X);
							}else if(veri[j+4]=='C'){
								CX=CX/X;
			    				DX=CX%X;
			    				printf("CX = CX / %d ---> DX = CX mod %d\n",X,X);
							}else if(veri[j+4]=='D'){
								X=(int)veri[j+7]-48;
								DX=DX/X;
			    				DX=DX%X;
			    				printf("DX = DX / %d ---> DX = DX mod %d\n",X,X);
							}
						}else if((int)veri[j+9]==10){
							if(veri[j+4]=='A'){
								X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
								AX=AX/X;
			    				DX=AX%X;
			    				printf("AX = AX / %d ---> DX = AX mod %d\n",X,X);
							}else if(veri[j+4]=='B'){
								X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
							    BX=BX/X;
			    				DX=BX%X;
			    				printf("BX = BX / %d ---> DX = BX mod %d\n",X,X);
							}else if(veri[j+4]=='C'){
								X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
								CX=CX/X;
			    				DX=CX%X;
			    				printf("CX = CX / %d ---> DX = CX mod %d\n",X,X);
							}else if(veri[j+4]=='D'){
								X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
								DX=DX/X;
			    				DX=DX%X;
			    				printf("DX = DX / %d ---> DX = DX mod %d\n",X,X);
							}
						}else if((int)veri[j+10]==10||(int)veri[j+10]==0){
							if(veri[j+4]=='A'){
								X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
								AX=AX/X;
			    				DX=AX%X;
			    				printf(" AX = AX / %d ---> DX = AX mod %d\n",X,X);
							}else if(veri[j+4]=='B'){
								X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
								BX=BX/X;
			    				DX=BX%X;
			    				printf("BX = BX / %d ---> DX = BX mod %d\n",X,X);
							}else if(veri[j+4]=='C'){
								X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
								CX=CX/X;
			    				DX=CX%X;
			    				printf("CX = CX / %d ---> DX = CX mod %d\n",X,X);
							}else if(veri[j+4]=='D'){
								X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
								DX=DX/X;
			    				DX=DX%X;
			    				printf("DX = DX / %d ---> DX = DX mod %d\n",X,X);
							}
						}
					}
				}// VE,VEYA komutlarý
				else if( veri[j]=='V'){
					if(veri[j+2]=='Y'){ //VEYA
					    if(veri[j+8]=='A'||veri[j+8]=='B'||veri[j+8]=='C'||veri[j+8]=='D'){
						    VEYA(veri[j+5],veri[j+8],AX,BX,CX,DX);
						}else if(veri[j+8]=='['){
						    if((int)veri[j+10]==10){
						 	    X=(int)veri[j+9]-48;
							    adresVY(RAM,veri[j+5],X,AX,BX,CX,DX);
						    }else if((int)veri[j+11]==10){
						        X=((int)veri[j+9]-48)*10+(int)veri[j+10]-48;
						        adresVY(RAM,veri[j+5],X,AX,BX,CX,DX);
						    }else if((int)veri[j+12]==10){
						        X=((int)veri[j+9]-48)*100+((int)veri[j+10]-48)*10+(int)veri[j+11]-48;
						        adresVY(RAM,veri[j+5],X,AX,BX,CX,DX);
						    }
					    }else{
							if((int)veri[j+9]==10){
							    if(veri[j+5]=='A'){
							    	X=(int)veri[j+8]-48;
							    	AX=AX|X;
			    				    printf("AX = AX | %d\n",X);
			    			    }else if(veri[j+5]=='B'){
			    					X=(int)veri[j+8]-48;
			    					BX=BX|X;
			    				    printf("BX = BX | %d\n",X);
								}else if(veri[j+5]=='C'){
									X=(int)veri[j+8]-48;
									CX=CX|X;
			    				    printf("CX = CX | %d\n",X);
							    }else if(veri[j+5]=='D'){
									X=(int)veri[j+8]-48;
									DX=DX|X;
			    				    printf("DX = DX | %d\n",X);
								}
							}else if((int)veri[j+10]==10){
								if(veri[j+5]=='A'){
									X=((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
									AX=AX|X;
			    				    printf("AX = AX | %d\n",X);
								}else if(veri[j+5]=='B'){
									X=((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
									BX=BX|X;
			    				    printf("BX = BX | %d\n",X);
							    }else if(veri[j+5]=='C'){
									X=((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
									CX=CX|X;
			    				    printf("CX = CX | %d\n",X);
								}else if(veri[j+5]=='D'){
									X=((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
								    DX=DX|X;
			    				    printf("DX = DX | %d\n",X);
							    }
						    }else if((int)veri[j+11]==10||(int)veri[j+11]==0){
								if(veri[j+5]=='A'){
									X=((int)veri[j+8]-48)*100+((int)veri[j+9]-48)*10+(int)veri[j+10]-48;
									AX=AX|X;
			    				    printf("AX = AX | %d\n",X);
								}else if(veri[j+5]=='B'){
									X=((int)veri[j+8]-48)*100+((int)veri[j+9]-48)*10+(int)veri[j+10]-48;
								    BX=BX|-X;
			    				    printf("BX = BX | %d\n",X);
								}else if(veri[j+5]=='C'){
									X=((int)veri[j+8]-48)*100+((int)veri[j+9]-48)*10+(int)veri[j+10]-48;
									CX=CX|X;
			    				    printf("CX = CX | %d\n",X);
								}else if(veri[j+5]=='D'){
									X=((int)veri[j+8]-48)*100+((int)veri[j+9]-48)*10+(int)veri[j+10]-48;
									DX=DX|X;
			    				    printf("DX = DX | %d\n",X);
								}
						    }
						}
				    }
					else {//VE
						if(veri[j+6]=='A'||veri[j+6]=='B'||veri[j+6]=='C'||veri[j+6]=='D'){
						   	VE(veri[j+3],veri[j+6],AX,BX,CX,DX);
						}else if(veri[j+6]=='['){
						    if((int)veri[j+8]==10){
						 	    X=(int)veri[j+7]-48;
							    adresV(RAM,veri[j+3],X,AX,BX,CX,DX);
						    }else if((int)veri[j+9]==10){
						        X=((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
						        adresV(RAM,veri[j+3],X,AX,BX,CX,DX);
						    }else if((int)veri[j+10]==10){
						        X=((int)veri[j+7]-48)*100+((int)veri[j+8]-48)*10+(int)veri[j+9]-48;
						        adresV(RAM,veri[j+4],X,AX,BX,CX,DX);
						    }
					    }else{
							if((int)veri[j+7]==10){
							    if(veri[j+3]=='A'){
							    	X=(int)veri[j+6]-48;
							    	AX=AX&X;
			    				    printf("AX = AX & %d\n",X);
			    				}else if(veri[j+3]=='B'){
			    					X=(int)veri[j+6]-48;
			    					BX=BX&X;
			    				    printf("BX = BX & %d\n",X);
							    }else if(veri[j+3]=='C'){
									X=(int)veri[j+6]-48;
									CX=CX&X;
			    				    printf("CX = CX & %d\n",X);
								}else if(veri[j+3]=='D'){
									X=(int)veri[j+6]-48;
									DX=DX&X;
			    				    printf("DX = DX & %d\n",X);
							    }
							}else if((int)veri[j+8]==10){
								if(veri[j+3]=='A'){
									X=((int)veri[j+6]-48)*10+(int)veri[j+7]-48;
									AX=AX&X;
			    				    printf("AX = AX & %d\n",X);
							    }else if(veri[j+3]=='B'){
									X=((int)veri[j+6]-48)*10+(int)veri[j+7]-48;
									BX=BX&X;
			    				    printf("BX = BX & %d\n",X);
								}else if(veri[j+3]=='C'){
									X=((int)veri[j+6]-48)*10+(int)veri[j+7]-48;
									CX=CX&X;
			    				    printf("CX = CX & %d\n",X);
								}else if(veri[j+3]=='D'){
									X=((int)veri[j+6]-48)*10+(int)veri[j+7]-48;
									DX=DX&X;
			    				    printf("DX = DX & %d\n",X);
							    }
							}else if((int)veri[j+9]==10||(int)veri[j+9]==0){
								if(veri[j+3]=='A'){
									X=((int)veri[j+6]-48)*100+((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
									AX=AX&X;
			    				    printf("AX = AX & %d\n",X);
								}else if(veri[j+3]=='B'){
								    X=((int)veri[j+6]-48)*100+((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
									BX=BX&X;
			    				    printf("BX = BX &%d\n",X);
								}else if(veri[j+3]=='C'){
									X=((int)veri[j+6]-48)*100+((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
									CX=CX&X;
			    				    printf("CX = CX & %d\n",X);
								}else if(veri[j+3]=='D'){
									X=((int)veri[j+6]-48)*100+((int)veri[j+7]-48)*10+(int)veri[j+8]-48;
									DX=DX&X;
			    				    printf("DX = DX & %d\n",X);
								}
							}
					    }
				    }
				}
				else if( veri[j]=='D'){//DEG komutu
					if(veri[j+4]=='A'|| veri[j+4]=='B'||veri[j+4]=='C'||veri[j+4]=='D'){
						DEG(veri[j+4],AX,BX,CX,DX);
  					}
				}    
			}
    	}
        fclose(dosya); 
    }      
	return 0;
}		
