#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
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
// -> créer un user(la struct user)
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
  int id;
  char pseudo[PSEUDO_LENGTH];
  bool is_admin;
};

struct user users[MAX_USERS];

enum user_field {
  ID,
  PSEUDO,
  IS_ADMIN
};

bool create_user(struct user *user, int id, char *pseudo, bool is_admin) {
  user -> id = id;
  strcpy(user -> pseudo, pseudo);
  user -> is_admin = is_admin;

  return true;
}

void display_user(struct user *users) {
  printf("ID: %d\n", users -> id);
  printf("Pseudo: %s\n", users -> pseudo);
  printf("Is admin: %d\n", users -> is_admin);
}

void display_all_users(struct user *users) {
  for (int i = 0; users[i].id != -1; i++) {
    display_user(&users[i]);
  }

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
  struct user *user1 = malloc(sizeof(struct user));
  create_user(user1, 1, "Bob l eponge", false);

  struct user *user2 = malloc(sizeof(struct user));
  create_user(user2, 2, "Patrick l etoile", false);
  
  struct user *user3 = malloc(sizeof(struct user));
  create_user(user3, 3, "Capitaine krabs", true);

  printf("============== display all users ==============\n");

  users[0] = *user1;
  users[1] = *user2;
  users[2] = *user3;
  users[3].id = -1;  // Marque la fin du tableau

  display_all_users(users);
  printf("============== end display all users ==============\n");

  for (int i = 0; users[i].id != -1; i++) {
    if (users[i].is_admin == true) {
      printf("============== display admin ==============\n");
      display_user(&users[i]);
      printf("============== end display admin ==============\n");
    }
  }
  
  free(user1);
  free(user2);
  free(user3);
  return 0;
}

// int main(); 