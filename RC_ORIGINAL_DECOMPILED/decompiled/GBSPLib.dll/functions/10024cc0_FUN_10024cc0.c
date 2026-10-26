/*
 * FUN_10024cc0 at 10024cc0
 * undefined FUN_10024cc0(void)
 * Address ranges: 10024cc0-10024d4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10024cc0(int *param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 local_8;
  
  if (1 < *param_1) {
    fVar2 = (float10)FUN_10024ef0();
    fVar3 = (float10)FUN_10024ef0();
    iVar1 = 2;
    fVar2 = fVar3 - (float10)(float)fVar2;
    if (2 < *param_1) {
      do {
        local_8 = (float)fVar3;
        fVar3 = (float10)FUN_10024ef0();
        fVar4 = (fVar3 - (float10)local_8) - (float10)(float)fVar2;
        if (fVar4 < (float10)0.0) {
          fVar4 = -fVar4;
        }
        if ((float10)param_2 < fVar4) {
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *param_1);
    }
  }
  return 1;
}

