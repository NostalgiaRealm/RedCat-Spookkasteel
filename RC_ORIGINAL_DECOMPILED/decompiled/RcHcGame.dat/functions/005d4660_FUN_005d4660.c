/*
 * FUN_005d4660 at 005d4660
 * undefined FUN_005d4660(void)
 * Address ranges: 005d4660-005d46b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d4660(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[1] == 0) {
    param_1[1] = 0;
    return;
  }
  iVar1 = 0;
  if (0 < *param_1) {
    piVar2 = (int *)(param_1[1] + 0x40);
    do {
      if (*piVar2 != 0) {
        FUN_005c02b0();
        *piVar2 = 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x13;
    } while (iVar1 < *param_1);
  }
  FUN_005cf400(param_1[1]);
  param_1[1] = 0;
  _DAT_007203c0 = 0;
  param_1[1] = 0;
  return;
}

