# TP1_18_09_2025
TP 1 de INF 231 Technique de conception d'algorithme et structure de donnée du 18 septembre 2025



# Inverser-Tableau
Un programme qui inverse un tableau



# Mediane-Tableau
Un programme qui calcul la mediane d'un tableau.



# Produit-Incrementation-1
 Un programme qui calcule le produit a * b (avec a, b > 0) en utilisant uniquement l’opération d’incrémentation +1 .



# Produit-Matrices
Ecrire un program en langage C qui permet d'effectuer le produit des matrices.
Introduction

Les matrices constituent un outil fondamental en mathématiques et en informatique, particulièrement dans le domaine de l’algèbre linéaire.
Parmi les opérations principales sur les matrices figure la multiplication, qui est à la base de nombreuses applications telles que la résolution de systèmes d’équations, le traitement d’images, les réseaux neuronaux et la modélisation en physique.
Dans ce rapport, nous présentons un programme en langage C permettant de réaliser le produit de plusieurs matrices en demandant les valeurs à l’utilisateur.
Objectifs
	•	Implémenter en langage C l’opération de multiplication matricielle.
	•	Permettre à l’utilisateur de saisir plusieurs matrices et obtenir leur produit.
	•	Mettre en pratique les notions d’algèbre linéaire et de programmation en C.
Méthodologie

Le programme suit les étapes suivantes :
	1.	Demander à l’utilisateur combien de matrices il souhaite multiplier.
	2.	Vérifier la compatibilité des dimensions pour la multiplication.
	3.	Lire les éléments de chaque matrice.
	4.	Multiplier les matrices successivement ((M_1 \times M_2) \times M_3 \times …).
	5.	Afficher le résultat final.
Conclusion

Ce programme illustre l’implémentation pratique de la multiplication matricielle en langage C.
La condition de compatibilité entre matrices a été vérifiée afin d’éviter les erreurs de dimension.
La multiplication a ensuite été effectuée de manière itérative pour gérer plusieurs matrices.

Ce travail peut être enrichi par des extensions, telles que :
	•	l’affichage des produits intermédiaires,
	•	l’optimisation de l’algorithme pour des matrices de grande taille,
	•	ou encore l’utilisation de nombres réels (float/double) au lieu des entiers.

Ainsi, ce projet constitue une étape fondamentale pour l’apprentissage de l’algèbre linéaire assistée par ordinateur.



# Produit-VecteurxMatrice
Un programme qui calcul le produit d'un vecteur par une matrice.



# Produit-Vectoriel
Un progrmme qui fait le calcul d'un produit vectoriel



# Recherche-Sequentiel
Ecrire un program qui effectue une recherche sequentiel.
Introduction

La recherche séquentielle est l’un des algorithmes les plus simples pour trouver un élément dans une structure de données.
Elle consiste à parcourir successivement les éléments d’un tableau jusqu’à ce que l’on trouve la valeur recherchée ou que l’on atteigne la fin du tableau.

Ce rapport présente une implémentation en langage C de la recherche séquentielle, ainsi qu’une analyse de son fonctionnement et de sa complexité.
Objectifs
	•	Implémenter la recherche séquentielle dans un tableau d’entiers.
	•	Permettre à l’utilisateur de saisir les données et la valeur à rechercher.
	•	Afficher la position de l’élément si celui-ci est trouvé, ou un message d’échec sinon.
  Méthodologie
	1.	Lire la taille du tableau et ses éléments.
	2.	Lire la valeur à rechercher.
	3.	Parcourir le tableau avec une boucle.
	4.	Utiliser une condition pour vérifier si la valeur existe.
	5.	Afficher le résultat.
Conclusion

La recherche séquentielle est une méthode simple et efficace pour des petits tableaux ou lorsque les données ne sont pas triées.
Cependant, pour des grands ensembles de données, sa complexité linéaire devient un désavantage.

Des alternatives plus rapides existent, comme la recherche dichotomique (ou binaire), mais celle-ci nécessite que le tableau soit trié au préalable.



# Somme-de-matrices
Ecrire un program en langage C qui permet de faire la somme des matrices.
1. Introduction

Les matrices sont des structures mathématiques fondamentales utilisées dans de nombreux domaines scientifiques et techniques, tels que l’informatique, la physique, l’ingénierie et l’économie.
L’une des opérations de base sur les matrices est l’addition, qui consiste à additionner les éléments correspondants de deux matrices de même dimension.
Dans ce rapport, nous présentons un programme en langage C permettant d’effectuer la somme de plusieurs matrices en demandant les valeurs à l’utilisateur.
Objectifs
	•	Comprendre la notion d’addition de matrices.
	•	Implémenter cette opération à l’aide de tableaux bidimensionnels en langage C.
	•	Concevoir un programme interactif qui permet à l’utilisateur de saisir les matrices et d’afficher le résultat de leur addition.
Méthodologie

Le programme suit les étapes suivantes :
	1.	Demander à l’utilisateur le nombre de lignes et de colonnes des matrices.
	2.	Lire les valeurs de la première matrice A.
	3.	Lire les valeurs de la deuxième matrice B.
	4.	Effectuer l’addition élément par élément et stocker le résultat dans la matrice C.
	5.	Afficher la matrice résultante C.
Ce projet a permis de mettre en œuvre une opération fondamentale sur les matrices en utilisant le langage C.
L’approche par tableaux bidimensionnels s’avère simple et efficace pour représenter des matrices de taille limitée.
Ce travail constitue une base pour des extensions possibles, telles que :
	•	l’addition de plusieurs matrices (plus de deux),
	•	la soustraction,
	•	la multiplication,
	•	ou encore l’implémentation d’opérations plus complexes (transposée, inversion, déterminant).  




  # Tri-Tableau
Un programme qui teste si un tableau est trie.
