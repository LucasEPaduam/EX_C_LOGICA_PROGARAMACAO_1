#include <stdio.h>

int main() {
	int medVel, cont, RP = -1, RPM;

	scanf("%d", &medVel);

	int vetor[medVel];

	for(cont = 0; cont < medVel; cont++) {
		scanf("%d", &vetor[cont]);
	}

	for(cont = 0; cont < medVel; cont++) {
		if((vetor[cont] < RP) && (cont != 0)) {
			RPM = 0;
			break;
		}
		RP = vetor[cont];
		RPM = 1;
	}

	if(RPM == 0) {
		printf("%d\n", cont+1);
	}else {
		printf("0\n");
	}

	return 0;
}
