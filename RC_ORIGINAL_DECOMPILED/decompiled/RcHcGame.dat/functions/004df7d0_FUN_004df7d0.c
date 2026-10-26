/*
 * FUN_004df7d0 at 004df7d0
 * undefined FUN_004df7d0(void)
 * Address ranges: 004df7d0-004df857
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004df7d0(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  if ((param_1 != -1) && (0.0 < param_2)) {
    fVar2 = (float)param_1;
    param_2 = fVar2 * param_2;
    if (fVar2 < param_2) {
      param_2 = fVar2;
    }
    fVar2 = fVar2 - param_2;
    iVar1 = FUN_0060a4a0(fVar2);
    iVar1 = __ftol(fVar2,iVar1 % 10000);
    return iVar1;
  }
  return param_1;
}

