/*
 * FUN_10001040 at 10001040
 * undefined FUN_10001040(void)
 * Address ranges: 10001040-10001083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001040(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    piVar1 = (int *)(param_1 + 0x30);
    do {
      if (*piVar1 != 0) {
        FUN_1000c2e0(*piVar1);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 5;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  FUN_10014360(param_1);
  _DAT_1003fde8 = 0;
  return;
}

