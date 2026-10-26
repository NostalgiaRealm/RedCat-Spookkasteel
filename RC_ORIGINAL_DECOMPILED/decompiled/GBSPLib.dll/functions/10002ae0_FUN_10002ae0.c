/*
 * FUN_10002ae0 at 10002ae0
 * undefined FUN_10002ae0(void)
 * Address ranges: 10002ae0-10002b23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002ae0(undefined4 param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  
  FUN_10002a50(param_1);
  fVar1 = *param_2;
  fVar2 = (float10)FUN_10002ac0(fVar1);
  if (ABS((float10)fVar1 - fVar2) < (float10)0.01) {
    fVar2 = (float10)FUN_10002ac0(fVar1);
    *param_2 = (float)fVar2;
  }
  return;
}

