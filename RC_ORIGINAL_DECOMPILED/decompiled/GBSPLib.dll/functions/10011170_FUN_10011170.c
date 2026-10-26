/*
 * FUN_10011170 at 10011170
 * undefined FUN_10011170(void)
 * Address ranges: 10011170-100111b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10011170(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = 0;
  do {
    iVar1 = *param_1;
    fVar3 = (float10)FUN_100143d0();
    if (fVar3 - (float10)*(float *)(iVar1 + 0x14) < (float10)0.0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 3);
  return 1;
}

