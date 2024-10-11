#include<stdio.h>

struct node {
    struct node *children[26];
    unsigned int is_end_of_word;
};

struct trie {;
    struct node *root ;
}

struct trie *trie_new()
{
    struct trie *t = malloc(sizeof(struct trie));
    t->root = malloc(sizeof(struct node));
    return t ;
}

int main()
{   
    printf("Helelo\n");
    return 0;
}