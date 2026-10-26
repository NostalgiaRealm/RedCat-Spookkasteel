/*
 * FUN_004547f4 at 004547f4
 * undefined __register FUN_004547f4(int param_1, LPRECT param_2, undefined4 param_3, int param_4)
 * Address ranges: 004547f4-00454852
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004547f4(int param_1,LPRECT param_2,undefined4 param_3,int param_4)

{
  FUN_0041c140(*(int **)(param_1 + 0x10),1);
  param_2->bottom = param_2->bottom + -1;
  param_2->right = param_2->right + -1;
  for (; 0 < param_4; param_4 = param_4 + -1) {
    FUN_00454730();
    InflateRect(param_2,-1,-1);
  }
  param_2->bottom = param_2->bottom + 1;
  param_2->right = param_2->right + 1;
  return;
}

