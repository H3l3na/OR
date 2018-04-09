#include <stdio.h>
#include <math.h>
/* Definicija tacke i kruznice */
struct Tacka {
	float x,y;
};
struct Kruznica {
	struct Tacka centar;
	float poluprecnik;
};

/* Funkcije za unos */
struct Tacka unos_tacke() {
	struct Tacka t;
	printf ("Unesite koordinate tacke (x,y): ");
	scanf ("%f,%f", &t.x, &t.y);
	return t;
}

struct Kruznica unos_kruznice() {
	struct Kruznica k;
	printf ("Unesite centar kruznice:\n");
	k.centar = unos_tacke();
	printf ("Unesite poluprecnik kruznice: ");
	scanf("%f", &k.poluprecnik);
	return k;
}

/* Funkcija za udaljenost izmedju dvije tacke */
float udaljenost(struct Tacka t1, struct Tacka t2) {
	return sqrt( (t1.x-t2.x)*(t1.x-t2.x) + (t1.y-t2.y)*(t1.y-t2.y) );
}

float obim_kruznice(struct Kruznica k){
    float obim;
    obim=2*(3.14)*k.poluprecnik;
    return obim;
}

float povrsina_kruznice(struct Kruznica k){
    float povrsina;
    povrsina=k.poluprecnik*k.poluprecnik*(3.14);
    return povrsina;
}

/* Glavni program: Da li je tacka unutar kruznice */
int main() {
	struct Kruznica k;
	struct Tacka t;
	float d;
	printf ("Unesite kruznicu:\n");
	k = unos_kruznice();
	printf ("Unesite neku tacku:\n");
	t = unos_tacke();

	/* Tacka se nalazi unutar kruznice ako je udaljenost tacke od centra
	kruznice manja od poluprecnika kruznice */
	d = udaljenost(t, k.centar);
	if (d<k.poluprecnik)
		printf("Tacka je unutar kruznice.");
	else if (d==k.poluprecnik)
		printf("Tacka je na kruznici.");
	else
		printf("Tacka je izvan kruznice.");
    float obim, povrsina;
    obim=obim_kruznice(k);
    povrsina=povrsina_kruznice(k);
    printf("\nObim kruznice je: %.2f", obim);
    printf("\nPovrsina kruznice je: %.2f", povrsina);
	return 0;
}

