/*
 * FUN_005ad450 at 005ad450
 * undefined FUN_005ad450(void)
 * Address ranges: 005ad450-005ad488
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ad450(int param_1,uint *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  if (*param_2 < *(uint *)(param_1 + 8)) {
    do {
      if (*(int *)(param_1 + 4) == 0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)(*(int *)(param_1 + 4) + *param_2);
      }
    } while ((*pcVar2 == ' ') &&
            (uVar1 = *param_2, *param_2 = uVar1 + 1, uVar1 + 1 < *(uint *)(param_1 + 8)));
  }
  return;
}

