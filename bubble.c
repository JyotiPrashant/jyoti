#include<stdio.h>
#include<conio.h>
int main(){
	int temp,i,k,j,a[5]={33,30,55,66,77};
	for(i = 0 ; i <= 4 ; i++){
			if(a[i+1] < a[i]){
	for(j = 0 ; j <= 4-i-1 ; j++){
		if(a[j+1] < a[j]){
			temp = a[j+1];
			a[j+1] = a[j];
			a[j] = temp;
	}
}
}
else{
	break;
} 
}
/*	printf("after pass %d elements are :",i+1);
    for(k=0;k<5;k++){
	printf("%d\n",a[k]);
	}*/
printf("after pass %d elements are :",i+1);
printf("sorted array  ");
for(i=0;i<=4;i++){
printf("%d\t",a[i]);
}
getch();
return 0;
}






