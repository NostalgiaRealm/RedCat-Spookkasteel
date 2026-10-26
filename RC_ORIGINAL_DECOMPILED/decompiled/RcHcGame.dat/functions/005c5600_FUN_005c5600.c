/*
 * FUN_005c5600 at 005c5600
 * undefined FUN_005c5600(void)
 * Address ranges: 005c5600-005c56dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_005c5600(int *param_1)

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
    iVar2 = FUN_0059b1e0();
    if (0 < iVar2) {
      fVar3 = (float10)FUN_005de6b0();
      param_1[10] = (int)(float)fVar3;
      FUN_0059b1e0();
      fVar3 = (float10)FUN_005de6b0();
      param_1[0xb] = (int)(float)fVar3;
    }
    uVar1 = param_1[9];
    if (uVar1 == 1) {
      iVar2 = param_1[8];
    }
    else {
      if (uVar1 != 2) goto LAB_005c567e;
      iVar2 = param_1[8];
    }
    uVar1 = FUN_005dd830(iVar2);
  }
LAB_005c567e:
  param_1[6] = 0;
  param_1[7] = -0x40800000;
  if (*param_1 != 0) {
    iVar2 = FUN_0059b1e0();
    if (0 < iVar2) {
      fVar3 = (float10)FUN_005de6b0();
      param_1[2] = (int)(float)fVar3;
      FUN_0059b1e0();
      fVar3 = (float10)FUN_005de6b0();
      param_1[3] = (int)(float)fVar3;
    }
    uVar1 = param_1[1];
    if (uVar1 == 5) {
      uVar1 = FUN_005dc720();
      return uVar1;
    }
    if (uVar1 == 4) {
      uVar1 = FUN_005dc970();
    }
  }
  return uVar1;
}

