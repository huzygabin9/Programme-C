#include <stdio.h>
int main() {
float a, b;
printf("Entrez deux nombres : ");
scanf("%f %f", &a, &b);
printf("Somme : %.2f\n", a + b);
printf("Difference : %.2f\n", a - b);
printf("Produit : %.2f\n", a * b);
printf("Quotient : %.2f\n", a / b);
return 0;
}

int main() {
float celsius, fahrenheit, prixHT, prixTVAC;
// Conversion de temperature
printf("Temperature en degres Celsius : ");
scanf("%f", &celsius);
fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
printf("Equivalent en Fahrenheit : %.2f F\n\n", fahrenheit);
// Calcul TVA 21%
printf("Montant HTVA en euros : ");
scanf("%f", &prixHT);
prixTVAC = prixHT * 1.21;
printf("Montant TVAC (21%%) : %.2f EUR\n", prixTVAC);
return 0;
}

int main() {
float poids, taille, imc;
printf("Entrez votre poids (en kg) : ");
scanf("%f", &poids);
printf("Entrez votre taille (en metres) : ");
scanf("%f", &taille);
imc = poids / (taille * taille);
printf("Votre IMC est de : %.2f\n", imc);
return 0;
}

int main() {
int nombre;
printf("Entrez un nombre entier : ");
scanf("%d", &nombre);
// Test positif, negatif ou nul
if (nombre > 0) {
printf("Positif\n");
} else if (nombre < 0) {
printf("Negatif\n");
} else {
printf("Zero\n");
}
// Test pair ou impair
if (nombre % 2 == 0) {
printf("Nombre pair.\n");
} else {
printf("Nombre impair.\n");
}
return 0;
}

int main() {
float achat, final;
printf("Montant de l'achat (EUR) : ");
scanf("%f", &achat);
if (achat > 100.0) {
final = achat * 0.90; // Remise de 10%
} else {
final = achat;
}
printf("Montant final a payer : %.2f EUR\n\n", final);
// Maximum de 3 nombres
int x, y, z, max;
printf("Entrez trois entiers : ");
scanf("%d %d %d", &x, &y, &z);
max = x;
if (y > max) max = y;
if (z > max) max = z;
printf("Le plus grand nombre est : %d\n", max);
return 0;
}

int main() {
float poids, taille, imc;
printf("Poids (kg) et taille (m) : ");
scanf("%f %f", &poids, &taille);
imc = poids / (taille * taille);
printf("IMC = %.2f -> ", imc);
if (imc < 18.5) {
printf("Insuffisance ponderale\n");
} else if (imc < 25.0) {
printf("Corpulence normale\n");
} else if (imc < 30.0) {
printf("Surpoids\n");
} else {
printf("Obesite\n");
}
return 0;
}

int main() {
int choix;
float a, b;
printf("=== CALCULATRICE ===\n");
printf("1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n");
printf("Votre choix : ");
scanf("%d", &choix);
if (choix >= 1 && choix <= 4) {
printf("Entrez deux nombres : ");
scanf("%f %f", &a, &b);
}
switch (choix) {
case 1:
printf("Resultat : %.2f\n", a + b);
break;
case 2:
printf("Resultat : %.2f\n", a - b);
break;
case 3:
printf("Resultat : %.2f\n", a * b);
break;
case 4:
if (b != 0) printf("Resultat : %.2f\n", a / b);
else printf("Erreur : Division par zero impossible.\n");
break;
default:
printf("Choix invalide.\n");
}
return 0;
}

int main() {
int choixTVA;
float prixHT, prixTVAC;
printf("Prix HTVA : ");
scanf("%f", &prixHT);
printf("Taux de TVA (1: 6%%, 2: 12%%, 3: 21%%) : ");
scanf("%d", &choixTVA);
switch (choixTVA) {
case 1: prixTVAC = prixHT * 1.06; break;
case 2: prixTVAC = prixHT * 1.12; break;
case 3: prixTVAC = prixHT * 1.21; break;
default:
printf("Taux invalide, application de 21%% par defaut.\n");
prixTVAC = prixHT * 1.21;
}
printf("Prix TVAC : %.2f EUR\n", prixTVAC);
return 0;
}

int main() {
// Calcul de 1 + 2 + ... + 100
int i = 1, somme = 0;
while (i <= 100) {
somme += i;
i++;
}
printf("Somme de 1 a 100 = %d\n\n", somme);
// Controle d'acces par code secret
int codeSecret = 1234, saisie;
printf("Entrez le code secret : ");
scanf("%d", &saisie);
while (saisie != codeSecret) {
printf("Code incorrect. Reessayez : ");
scanf("%d", &saisie);
}
printf("Acces autorise.\n");
return 0;
}

int main() {
float note, somme = 0;
int compteur = 0;
printf("Entrez une note (-1 pour terminer) : ");
scanf("%f", &note);
while (note != -1) {
somme += note;
compteur++;
printf("Entrez une note (-1 pour terminer) : ");
scanf("%f", &note);
}
if (compteur > 0) {
printf("Moyenne des %d notes : %.2f\n", compteur, somme / compteur);
} else {
printf("Aucune note saisie.\n");
}
return 0;
}

int main() {
// Compte a rebours de 20 a 1
for (int i = 20; i >= 1; i--) {
printf("%d ", i);
}
printf("\nDecollage !\n\n");
// Factorielle d'un entier positif
int n;
long factorielle = 1;
printf("Entrez un entier positif pour la factorielle : ");
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
factorielle *= i;
}
printf("%d! = %ld\n", n, factorielle);
return 0;
}

int main() {
int puissance = 1;
for (int exp = 1; exp <= 10; exp++) {
puissance *= 2;
printf("2^%d = %d\n", exp, puissance);
}
int sommeCarres = 0;
for (int k = 1; k <= 10; k++) {
sommeCarres += k * k;
}
printf("\nSomme des carres (1^2 + ... + 10^2) = %d\n", sommeCarres);
return 0;
}

int main() {
int taille = 5;
// Triangle rectangle
printf("--- Triangle ---\n");
for (int ligne = 1; ligne <= taille; ligne++) {
for (int col = 1; col <= ligne; col++) {
printf("*");
}
printf("\n");
}
// Damier 5x6
printf("\n--- Damier ---\n");
for (int ligne = 0; ligne < 5; ligne++) {
for (int col = 0; col < 6; col++) {
if ((ligne + col) % 2 == 0) printf("X");
else printf("O");
}
printf("\n");
}
return 0;
}

int main() {
// Grille de multiplication 5x5
for (int i = 1; i <= 5; i++) {
for (int j = 1; j <= 5; j++) {
printf("%3d ", i * j);
}
printf("\n");
}
// Cadre 5x10
printf("\n");
for (int i = 1; i <= 5; i++) {
for (int j = 1; j <= 10; j++) {
if (i == 1 || i == 5 || j == 1 || j == 10) printf("#");
else printf(" ");
}
printf("\n");
}
return 0;
}
