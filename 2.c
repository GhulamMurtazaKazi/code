This C program determines the field of study and the university a student can apply to based on their NTS (National Testing Service) and F.Sc (Faculty of Science) scores. The user is asked to input their NTS and F.Sc scores. Depending on these scores, the program suggests a field of study at either Oxford or MIT.
#include<stdio.h>
int main () {
	float NTS,FSC;
	printf("enter your NTS and F.Sc score\n");
	scanf("%f %f",&NTS,&FSC);
	if (FSC>70&&NTS>=70) 
	{ printf("IT in oxford\n");
	} 
	if (FSC>70&&NTS>=60) {
		printf("Electronics in oxford\n");
	} 
	if (FSC>70&&NTS>=50) {
		printf("telecommunication in oxford");
	} 
	if ((FSC>=60&&FSC<=70)&&(NTS>=50)) {
		printf("IT in MIT\n");
	} if ((FSC>=50&&FSC<=59)&&(NTS>=50)) {
		printf("chemical in MIT\n");
		
	} if ((FSC>40&&FSC<50)&&(NTS>=50)) {
		printf("Commputer in MIT");
	}
	return 0;
	
}
