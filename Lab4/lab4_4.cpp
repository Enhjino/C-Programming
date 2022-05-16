//lab 4 Angid
//Dasgal 4
 #include <stdio.h>
 int main (){
 	int a;
 	printf("Shultei, ustai hool ideh uu?\n");
 	printf("Tiim bol 1, Ugui bol 0\n");
 	scanf("%d",&a);
 	switch (a){
 		case 0 : 
 			printf("Mah ni tatsan uu?\n");
 			printf("Tiim bol 1, Ugui bol 0\n");
 			scanf("%d",&a);
 			switch (a) {
 				case 0:
 					printf("Yutai holison?\n");
 					printf("Guriltai bol 1, ondogtei bol 2, budaatai bol 3, nogootoi bol 4\n");
 					scanf("%d",&a);
 					switch (a) {
 						case 1 : 
 						printf("Tsuivan");
 						break;
 						case 2 : 
 						printf("Ondogtei huurga");
 						break;
 						case 3 : 
 						printf("Hoorond ni holih uu?\n");
 						printf("Tiim bol 1, Ugui bol 0\n");
 						scanf("%d",&a);
 						switch (a){
 							case 0 :
 								printf("Guliash");
 								break;
 							case 1 :
 								printf("Budaatai huurga");}
 								break;
 						case 4 :
 						printf("Nogootoi huurga");
 						break;
 					}
 					break;
 				case 1 :
 					printf("Guriland  orooson uu\n");
 					printf("Tiim bol 1, Ugui bol 0\n");
 		        	scanf("%d",&a);
 					switch (a) {
 						case 0:
 							printf("Budaatai yu?\n");
 							printf("Ondgond orooson bol 1, Mahaa booronhiilson bol 2\n");
 							scanf("%d",&a);
 							switch (a) {
 								case 1:
 									printf("Ondogtei pifshteks");
 									break;
 								case 2:
 									printf("Tefteli");
 									break;}
 						break;
 						case 1: 
 							printf("Yaj bolgoson?\n");
 							printf("Sharsan bol 1, Jignesen bol 2\n");
 							scanf("%d",&a);
 							switch (a){
 								case 1 :
 									printf("Yaj sharsan?\n");
 									printf("Huulgun sharsan bol 1, Shuud sharsan bol 2\n");
 									scanf("%d",&a);
 									switch (a){
 										case 1: 
 										printf("Piroshki");
 										break;
 										case 2:
 										printf("Huushuur");
 										break;
 									}
 						break;
 						case 2 :
 									printf("Yaj jignesen?\n");
									printf("Huulgun jignesen bol 1, Shuud jignesen bol 2\n");
 									scanf("%d",&a);
 									switch (a){
 										case 1: 
 										printf("Mantuun buuz");
 										break;
 										case 2:
 										printf("Buuz");
 										break;
 							}
 						break;
 					}
 					break;
 			 		}
 			}
 			break;
 		case 1 : 
		 	printf("Tsaitai bol 1, Shultei bol 0\n");
 			scanf("%d",&a);
 			switch (a) {
 				case 0:
 					printf("Yutai shul idmeer baina?\n");
 					printf("Guriltai bol 1, Puntuuztei bol 2, goimontoi bol 3, banshtai bol 4, mahtai bol 5, nogootoi bol 6\n");
 					scanf("%d",&a);
 					switch (a) {
 						case 1 : 
 						printf("Lapsha");
 						break;
 						case 2 : 
 						printf("Huitsai");
 						break;
 						case 3 : 
 						printf("Goimontoi shul ");
 						break;
 						case 4 :
 						printf("Banshai shul");
 						break;
  						case 5 :
 						printf("Har shul");
 						break;	
						case 6 :
 						printf("Nogootoi shul");
 						break;					
 					}
 					break;
 				case 1 :
 					printf("Budaatai bol 1, Banshtai bol 0\n");
 		        	scanf("%d",&a);
 					switch (a) {
 						case 0:
 							printf("Banshtai tsai");
 							break;
 						case 1: 
	 						printf("Budaatai tsai");
							 break;			
 			}		
 	}
 	break;
 }
}
