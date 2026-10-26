/*
 * FUN_10002fb0 at 10002fb0
 * undefined FUN_10002fb0(void)
 * Address ranges: 10002fb0-10002ffd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002fb0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    iVar1 = 0;
    if (0 < param_1[1]) {
      piVar2 = param_1 + 0x76;
      do {
        if (*piVar2 != 0) {
          FUN_10002960(piVar2);
          *piVar2 = 0;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x42;
      } while (iVar1 < param_1[1]);
    }
    param_1[1] = 0;
  }
  return;
}

