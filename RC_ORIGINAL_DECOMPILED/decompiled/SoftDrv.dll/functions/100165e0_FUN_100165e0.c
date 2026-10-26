/*
 * FUN_100165e0 at 100165e0
 * undefined FUN_100165e0(void)
 * Address ranges: 100165e0-1001664d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100165e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    if (param_1[0x16] != 0) {
      FUN_100165e0(param_1[0x16]);
    }
    if (param_1[0x17] != 0) {
      FUN_100165e0(param_1[0x17]);
    }
    iVar1 = 0;
    if (0 < param_1[3]) {
      piVar2 = param_1 + 6;
      do {
        if (*piVar2 != 0) {
          FUN_10018dc8(*piVar2);
        }
        *piVar2 = 0;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < param_1[3]);
    }
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
    return 1;
  }
  return 0;
}

