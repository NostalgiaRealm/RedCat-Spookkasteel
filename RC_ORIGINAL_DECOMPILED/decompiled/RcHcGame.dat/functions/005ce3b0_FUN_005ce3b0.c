/*
 * FUN_005ce3b0 at 005ce3b0
 * undefined FUN_005ce3b0(void)
 * Address ranges: 005ce3b0-005ce618
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ce3b0(int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float local_8;
  float local_4;
  
  local_8 = _DAT_0072040c;
  local_4 = _DAT_00720410;
  fVar1 = _DAT_00720408;
  if ((DAT_007203e0 != 0) &&
     (fVar2 = _DAT_00720414 * _DAT_007203e4 +
              _DAT_00720418 * _DAT_007203e8 + _DAT_0072041c * _DAT_007203ec, 0.0 < fVar2)) {
    fVar1 = _DAT_007203fc * fVar2 + _DAT_00720408;
    local_8 = _DAT_00720400 * fVar2 + _DAT_0072040c;
    local_4 = _DAT_00720404 * fVar2 + _DAT_00720410;
  }
  if (DAT_00720824 == 0) {
    if (0 < DAT_00720820) {
      pfVar3 = (float *)&DAT_00720424;
      iVar4 = DAT_00720820;
      do {
        fVar2 = _DAT_00720418 * *pfVar3 + _DAT_00720414 * pfVar3[-1] + _DAT_0072041c * pfVar3[1];
        if (0.0 < fVar2) {
          fVar1 = fVar2 * pfVar3[2] + fVar1;
          local_8 = fVar2 * pfVar3[3] + local_8;
          local_4 = fVar2 * pfVar3[4] + local_4;
        }
        pfVar3 = pfVar3 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    iVar4 = *(int *)(DAT_006cc5e0 + 0x400 + param_2 * 0x404);
    if (0 < iVar4) {
      pfVar3 = (float *)(DAT_006cc5e0 + param_2 * 0x404 + 4);
      do {
        fVar2 = _DAT_00720418 * *pfVar3 + _DAT_00720414 * pfVar3[-1] + _DAT_0072041c * pfVar3[1];
        if (0.0 < fVar2) {
          fVar1 = fVar2 * pfVar3[2] + fVar1;
          local_8 = fVar2 * pfVar3[3] + local_8;
          local_4 = fVar2 * pfVar3[4] + local_4;
        }
        pfVar3 = pfVar3 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  fVar1 = fVar1 * _DAT_007203f0;
  if (0.0 < param_3) {
    fVar1 = fVar1 * param_3;
  }
  if (fVar1 <= 255.0) {
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
  }
  else {
    fVar1 = 255.0;
  }
  *(float *)(param_1 + 0x14) = fVar1;
  local_8 = _DAT_007203f4 * local_8;
  if (0.0 < param_3) {
    local_8 = local_8 * param_3;
  }
  if (local_8 <= 255.0) {
    if (local_8 < 0.0) {
      local_8 = 0.0;
    }
  }
  else {
    local_8 = 255.0;
  }
  *(float *)(param_1 + 0x18) = local_8;
  local_4 = _DAT_007203f8 * local_4;
  if (0.0 < param_3) {
    local_4 = local_4 * param_3;
  }
  if (local_4 <= 255.0) {
    if (0.0 <= local_4) {
      *(float *)(param_1 + 0x1c) = local_4;
      return;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0x437f0000;
  return;
}

