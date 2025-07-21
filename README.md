<img src= "https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/holberton%20modif.png">

# 🚀 holbertonschool-printf
Ce projet vise à créer une version simplifiée de la fonction printf de la bibliothèque standard C. L'objectif est de comprendre son fonctionnement interne et de reproduire certaines de ses fonctionnalités clés, en respectant les exigences de style et de compilation définies par Holberton School.

# 📚 Table des Matières
Contexte du Projet

Ressources Apprises

Exigences Générales

Utilisation

Structure du Projet et Tâches

Compilation

Auteur

# 💡 Contexte du Projet
Ce projet fait partie du cursus de programmation de Holberton School. Il se concentre sur la création d'une implémentation personnalisée de printf, en mettant l'accent sur la gestion des spécificateurs de conversion de base et le respect des normes de codage.

# 📖 Ressources Apprises
Au cours de ce projet, les concepts et outils suivants ont été approfondis :

Secrets de printf : Compréhension approfondie du fonctionnement de la fonction printf.

Projets de Groupe : Collaboration et gestion de projet en équipe.

Organigrammes (Flowcharts) : Visualisation et conception logique des algorithmes.

Pages man : Utilisation de la documentation officielle pour printf (section 3).

gcc et ses options : Compilation de code C avec des drapeaux spécifiques (-Wall, -Werror, -Wextra, -pedantic, -std=gnu89, -Wno-format).

Betty style : Adhésion aux normes de style de code de Holberton School.

Fonctions à nombre variable d'arguments (va_list, va_start, va_end, va_copy, va_arg) : Gestion des arguments de fonction de manière dynamique.

Allocation mémoire dynamique (malloc, free) : Gestion de la mémoire pour les chaînes de caractères et autres données.

Gestion des entrées/sorties (write) : Écriture directe sur la sortie standard.

# ✅ Exigences Générales
Éditeurs Autorisé : vi, vim, emacs.

Environnement de Compilation : Ubuntu 20.04 LTS.

Compilateur C : gcc avec les options -Wall -Werror -Wextra -pedantic -std=gnu89.

Fin de Fichier : Tous les fichiers doivent se terminer par une nouvelle ligne.

Fichier README.md : Obligatoire à la racine du dossier du projet.

Style de Code : Conforme au style Betty (vérifié avec betty-style.pl et betty-doc.pl).

Variables Globales : Interdites.

Nombre de Fonctions par Fichier : Pas plus de 5 fonctions par fichier.

Fichiers main.c : Ne doivent pas être poussés dans le dépôt racine. Des fichiers de test avec main peuvent être placés dans un dossier séparé (test/).

Fichier d'En-tête : main.h doit contenir les prototypes de toutes les fonctions et être protégé contre les inclusions multiples (include guarded).

# 💻 Utilisation
La fonction _printf est conçue pour être utilisée comme la fonction printf standard. Elle prend une chaîne de format et un nombre variable d'arguments, et affiche le résultat sur la sortie standard.
```Bash
C

#include "main.h" // Incluez votre fichier d'en-tête

int main(void)
{
    int count;

    count = _printf("Ceci est une chaîne simple.\n");
    _printf("Nombre de caractères imprimés : %d\n", count);

    _printf("Un caractère : %c\n", 'A');
    _printf("Une chaîne : %s\n", "Bonjour le monde !");
    _printf("Un pourcentage : %%\n");
    _printf("Un entier : %d\n", 42);
    _printf("Un autre entier : %i\n", -123);

    return (0);
}
```
# 📋 Structure du Projet et Tâches
Le projet est organisé autour de l'implémentation progressive de la fonction _printf et de ses fonctionnalités.

Tâches
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Prototype : int _printf(const char *format, ...);

Retour : Le nombre de caractères imprimés (hors octet nul de fin de chaîne).

Gestion des spécificateurs :

%c (caractère)

%s (chaîne de caractères)

%% (caractère %)

Limitations : Pas de gestion de tampon, de drapeaux, de largeur de champ, de précision ou de modificateurs de longueur.

1. Education is when you read the fine print. Experience is what you get if you don't
Gestion des spécificateurs additionnels :

%d (entier décimal signé)

%i (entier décimal signé)

Limitations : Pas de gestion de drapeaux, de largeur de champ, de précision ou de modificateurs de longueur.

2. Just because it's in print doesn't mean it's the gospel
Documentation : Création d'une page de manuel (man page) pour la fonction _printf.

Fichier : man_3_printf

⚙️ Compilation
Votre code sera compilé comme suit :

```Bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
Note importante : Ne poussez pas de fichier main.c dans le répertoire racine de votre projet. Nos fichiers main incluront votre fichier d'en-tête principal (main.h) via #include "main.h".
```

---

# ✍️ Auteurs
Mathieu GODALIER et Mathis ROY [liens vers le Github de Mathis](https://github.com/rpokman) - Élèves en programmation à la Holberton School
