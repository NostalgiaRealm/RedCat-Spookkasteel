/*
 * FUN_00405520 at 00405520
 * undefined __register FUN_00405520(VARIANTARG * param_1, int * param_2)
 * Address ranges: 00405520-00405541
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405520(VARIANTARG *param_1,int *param_2)

{
  if (7 < (param_1->n1).n2.vt) {
    FUN_00404de4(param_1);
  }
  (param_1->n1).n2.vt = 0xd;
  *(int **)((int)&param_1->n1 + 8) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return;
}

