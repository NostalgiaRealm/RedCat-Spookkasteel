/*
 * FUN_005d7800 at 005d7800
 * undefined FUN_005d7800(void)
 * Address ranges: 005d7800-005d7876
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005d7800(int param_1,float *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar2;
  iVar1 = FUN_0059b1e0();
  if (iVar2 < iVar1) {
    fVar3 = (float10)FUN_005de6b0();
    *param_2 = (float)fVar3;
    if (fVar3 + (float10)1e-05 < (float10)*(float *)(param_1 + 0xc)) {
      iVar1 = FUN_005de6a0();
      *param_3 = *(int *)(iVar1 + 4) + *(int *)(param_1 + 8);
      return 1;
    }
  }
  *param_2 = 0.0;
  *param_3 = 0;
  return 0;
}

