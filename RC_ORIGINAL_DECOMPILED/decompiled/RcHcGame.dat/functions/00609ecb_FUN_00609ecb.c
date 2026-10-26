/*
 * FUN_00609ecb at 00609ecb
 * undefined FUN_00609ecb(void)
 * Address ranges: 00609ecb-00609f06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_00609ecb(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_0060f539(param_1,param_2);
  bVar2 = param_3 < 0;
  iVar1 = param_3;
  if (0 < param_3) {
    iVar1 = 0;
    do {
      fVar3 = fVar3 * (float10)10.0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    bVar2 = false;
  }
  if (bVar2) {
    iVar1 = -iVar1;
    do {
      fVar3 = fVar3 * (float10)0.1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return fVar3;
}

