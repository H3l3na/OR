#include <stdio.h>
#include <stdlib.h> /* Zbog funkcije exit() */
int main() {
	FILE *ulaz;
	char znak, ime[20];
	int broj_redova=0, broj_rijeci=0, broj_znakova=0, razmak=1, broj_samogl=0, br_cifara=0, br_vel=0;

	printf ("Unesite ime datoteke: ");
	scanf ("%s", ime);
	ulaz = fopen(ime, "r");
	if (ulaz == NULL) {
		printf ("Pogreska kod otvaranja datoteke %s!\n\n", ime);
		exit (1);
	}
	while ((znak=fgetc(ulaz)) != EOF) {
		/* Ako je znak novi red, povecaj broj linija za jedan */
		if (znak=='\n')
			++broj_redova;
        if (znak=='1' || znak=='2' || znak=='3' || znak=='4' || znak=='5' || znak=='6' || znak=='7' || znak=='8' || znak=='9' || znak=='0'){
            br_cifara++;
        }
        if (znak=='a' || znak=='A' || znak=='e' || znak=='E' || znak=='i' || znak=='I' || znak=='o' || znak=='O' || znak=='u' || znak=='U'){
            broj_samogl++;
        }
        if (znak>=65 && znak<=90){
            br_vel++;
        }
		/* Da li je znak razmak? */
		if (znak==' ' || znak=='\n' || znak=='\t')
			razmak=1;

		else {
			++broj_znakova;
			/* Ako je prethodni znak bio razmak a ovaj nije,
			   povecavamo broj rijeci za 1 */
			if (razmak==1) ++broj_rijeci;
			razmak=0;
		}
	}
	if (broj_znakova != 0) broj_redova++;
	printf ("Broj redova: %d\nBroj rijeci: %d\nBroj znakova: %d\nBroj samoglasnika: %d\nBroj velikih slova: %d\nBroj cifara: %d\n",
broj_redova, broj_rijeci, broj_znakova, broj_samogl, br_vel, br_cifara);
	fclose (ulaz);
	return 0;
}
