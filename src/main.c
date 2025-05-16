#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define PSEUDO_LENGTH 30
#define MAX_USERS 10

// pas d'utilisateurs au début du programme
//une structure
//  utilisateur : 
//      int ID
//      char*$PSEUDO_LENGTH pseudo 
//      bool is_admin
//tableaux -> de structures
//des fonctions -> X
// -> créer un user(struct user)
//    -> remplir tout les champs pour créer un user
// -> afficher tous les users((pointer)*struct user) -> X
//    -> afficher le contenu du l'addresse mémoir de la structure user
// -> affichage global de tous les users (que les pseudos)
// -> recherche d'un user par id
//    -> return position dans le tableau if true
//    -> return -1 if false
// -> modifier un user(le tableau des users, un id, un entier pour définir le champ à modifier(enum), la nouvelle valeur)
//   -> return le tableau des users modifié

struct user {
  int ID;
  char pseudo[PSEUDO_LENGTH];
  bool is_admin;
};

struct user users[MAX_USERS];

enum user_field {
  ID,
  PSEUDO,
  IS_ADMIN
};

bool create_user(struct user *user) {
  //
  return true;
}

void display_users(struct user *users) {
  printf("Structure user: %p\n", users);
}

void display_all_users(struct user *users) {
  printf("All users:\n");
  // tout les users mais que les pseudos
}

int search_user_by_id(struct user *users, int id) {
  //
  return -1;
}

struct user *modify_user(struct user *users, int id, enum user_field field, void *new_value ) {
  //
  return users;
}

int main() {

  return 0;
}

// int main(); 