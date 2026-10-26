/*
 * FUN_1001cdb0 at 1001cdb0
 * undefined FUN_1001cdb0(void)
 * Address ranges: 1001cdb0-1001ce8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001cdb0(int *param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  uVar1 = param_1[0x10];
  param_1[0xe] = 0;
  param_1[0x10] = uVar1 & 0xfffffffe;
  uVar1 = (uVar1 & 0xfe) >> 1 & 1;
  param_1[0xf] = -0x40800000;
  if (param_1[8] != 0) {
    iVar2 = FUN_10024f00();
    if (0 < iVar2) {
      fVar3 = (float10)FUN_10024ef0();
      param_1[10] = (int)(float)fVar3;
      FUN_10024f00();
      fVar3 = (float10)FUN_10024ef0();
      param_1[0xb] = (int)(float)fVar3;
    }
    uVar1 = param_1[9];
    if (uVar1 == 1) {
      iVar2 = param_1[8];
    }
    else {
      if (uVar1 != 2) goto LAB_1001ce2e;
      iVar2 = param_1[8];
    }
    uVar1 = FUN_100265e0(iVar2);
  }
LAB_1001ce2e:
  param_1[6] = 0;
  param_1[7] = -0x40800000;
  if (*param_1 != 0) {
    iVar2 = FUN_10024f00();
    if (0 < iVar2) {
      fVar3 = (float10)FUN_10024ef0();
      param_1[2] = (int)(float)fVar3;
      FUN_10024f00();
      fVar3 = (float10)FUN_10024ef0();
      param_1[3] = (int)(float)fVar3;
    }
    uVar1 = param_1[1];
    if (uVar1 == 5) {
      uVar1 = FUN_10025090();
      return uVar1;
    }
    if (uVar1 == 4) {
      uVar1 = FUN_100252e0();
    }
  }
  return uVar1;
}

