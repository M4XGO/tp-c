# Gestion des exploits 
## TP Révisions C et assembleur

### Auteurs

- [Clément Valentin](https://github.com/Dabamboo)
- [Maxime NONY](https://github.com/M4XGO)


## Attendu :

- pas d'utilisateurs au début du programme
- une structure
  - utilisateur : 
    - int ID
    - char*$PSEUDO_LENGTH pseudo 
    - bool is_admin
- tableaux -> de structures
- des fonctions
  - créer un user(struct user)
    - remplir tout les champs pour créer un user
  - afficher tous les users((pointer)*struct user)
    - afficher le contenu du l'addresse mémoir de la structure user
  - affichage global de tous les users (que les pseudos)
  - recherche d'un user par id
    - return position dans le tableau if true
    - return -1 if false
  - modifier un user(le tableau des users, un id, un entier pour définir le champ à modifier(enum), la nouvelle valeur)
    - return le tableau des users modifié


## TODO -> 
- [ ] Remplir le README.md
- [ ] Finir les fonctions