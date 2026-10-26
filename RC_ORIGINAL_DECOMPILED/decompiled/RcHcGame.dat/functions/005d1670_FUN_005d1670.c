/*
 * FUN_005d1670 at 005d1670
 * undefined FUN_005d1670(void)
 * Address ranges: 005d1670-005d16be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d1670(int *param_1,undefined4 param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = 0;
  piVar1 = param_1 + 1;
  if (0 < *param_1) {
    do {
      fVar3 = (float10)FUN_005b2e40();
      if ((fVar3 - (float10)(float)piVar1[3]) + (float10)param_3 < (float10)0.0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 5;
    } while (iVar2 < *param_1);
  }
  return 1;
}

