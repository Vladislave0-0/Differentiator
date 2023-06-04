#ifndef RECURSIVE_DESCENT_H
#define RECURSIVE_DESCENT_H

//======================================================================

#include <sys/stat.h>

#include "./Tree.h"

//======================================================================

int file_processing(struct Tree* tree, const char* filename);

//======================================================================

int num_of_chars(struct Tree* tree, const char* filename);

//======================================================================

int chars_buffer(struct Tree* tree, FILE* stream);

//======================================================================

int variables_processing(struct Tree* tree);

//======================================================================

Node* make_tree(struct Tree* tree);

//======================================================================

Node* getGen(struct Tree* tree);

//==============================================================================

Node* getExp(struct Tree* tree);

//==============================================================================

Node* getMul(struct Tree* tree);

//==============================================================================

Node* getBrt(struct Tree* tree);

//==============================================================================

Node* getDeg(struct Tree* tree);

//==============================================================================

Node* getWord(struct Tree* tree);

//==============================================================================

char* getVar(struct Tree* tree);

//==============================================================================

int find_var(struct Tree* tree, char* variable);

//==============================================================================

Var* add_var(struct Tree* tree, char* variable);

//==============================================================================

Node* getNum(struct Tree* tree);

//==============================================================================

#endif // RECURSIVE_DESCENT_H