/*
 * FUN_1000d860 at 1000d860
 * undefined FUN_1000d860(void)
 * Address ranges: 1000d860-1000d8d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000d860(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined1 local_c [12];
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *param_1) {
    do {
      FUN_10014560(local_c);
      fVar3 = (float10)FUN_10014550();
      if (((float10)0.1 < fVar3) && (iVar1 = iVar1 + 1, iVar1 == 3)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_1);
  }
  return 1;
}

