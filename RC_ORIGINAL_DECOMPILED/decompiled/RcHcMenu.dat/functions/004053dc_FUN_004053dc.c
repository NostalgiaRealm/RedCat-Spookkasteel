/*
 * FUN_004053dc at 004053dc
 * undefined __register FUN_004053dc(VARIANTARG * param_1, undefined4 param_2)
 * Address ranges: 004053dc-004053f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004053dc(VARIANTARG *param_1,undefined4 param_2)

{
  if (7 < (param_1->n1).n2.vt) {
    FUN_00404de4(param_1);
  }
  (param_1->n1).n2.vt = 3;
  *(undefined4 *)((int)&param_1->n1 + 8) = param_2;
  return;
}

