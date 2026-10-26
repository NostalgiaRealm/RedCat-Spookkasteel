/*
 * FUN_00605821 at 00605821
 * undefined FUN_00605821(void)
 * Address ranges: 00605821-00605865
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00605821(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  
  if ((param_2 < param_1) && (puVar1 = param_2 + param_3, param_1 < puVar1)) {
    param_1 = param_1 + param_3;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      puVar1 = puVar1 + -1;
      param_1 = param_1 + -1;
      *param_1 = *puVar1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}

