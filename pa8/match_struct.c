#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct S {
  int val;
  struct S* left;
  struct S* right;
} S;

S* setupAns1() {
  // Make the contents of ans1 succeed at the comparisons below
  S* ans1;

  return ans1;
}


S** setupAns2() {

  // Make the contents of ans2 succeed at the comparisons below
  S** ans2;

  return ans2;
}

int main(void) {

	// Don't change this main below here. Feel free to change above here
	// to print out other debugging information that's helpful
	
	S* s1 = setupAns1();
	bool ans1OK =
		(s1->val == 100) &&
		(s1->left == NULL) &&
		(s1->right->val == 200) &&
    (s1->right->left == NULL) &&
    (s1->right->right == s1);
	if(ans1OK) { printf("You got ans1!\n"); }
	else { printf("ans1 didn't match\n"); }

	S** s2 = setupAns2();
	bool ans2OK =
    (s2[0]->val == 100) &&
    (s2[0]->left->val == 50) &&
    (s2[0]->left->left == NULL) &&
    (s2[0]->left->right == NULL) &&
    (s2[0]->right->val == 150) &&
    (s2[0]->right->left == NULL) &&
    (s2[0]->right->right == NULL) &&
    (s2[1]->val == 500) &&
    (s2[1]->left == NULL) &&
    (s2[1]->right == NULL) &&
    (s2[2] == NULL);
	if(ans2OK) { printf("You got ans2!\n"); }
	else { printf("ans2 didn't match\n"); }
		

}
