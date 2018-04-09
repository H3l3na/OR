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

struct Pravougaonik{
    float a, b;
};

struct Pravougaonik unos_pravougaonika(){
    struct Pravougaonik p;
    printf("\nUnesite dimenzije pravougaonika (a, b): ");
    scanf("%f, %f", &p.a, &p.b);
    return p;
};

float obim_pravougaonika(struct Pravougaonik p){
    float obim;
    obim=2*(p.a)+2*(p.b);
    return obim;
}

float povrsina_pravougaonika (struct Pravougaonik p){
    float povrsina;
    povrsina=(p.a)*(p.b);
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
    struct Pravougaonik p;
    printf("\nUnesite stranice pravougaonika: ");
    p=unos_pravougaonika();
    float obim_p=obim_pravougaonika(p);
    float povrsina_p=povrsina_pravougaonika(p);
    printf("\nObim pravougaonika je: %.2f", obim_p);
    printf("\nPovrsina pravougaonika je: %.2f", povrsina_p);
	return 0;
}
