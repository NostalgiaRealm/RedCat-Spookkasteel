/*
 * FUN_00594b00 at 00594b00
 * undefined FUN_00594b00(void)
 * Address ranges: 00594b00-00594bbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00594b00(float *param_1)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  undefined1 local_19;
  float local_18 [4];
  float local_8;
  float local_4;
  
  if ((DAT_006c9f74 & 1) == 0) {
    DAT_006c9f74 = DAT_006c9f74 | 1;
    iVar1 = FUN_0059aed0();
    if (*(float *)(iVar1 + 0xcc) == 0.0) {
      fVar3 = (float10)FUN_005ad390(iVar1 + 0x80,&local_19);
      *(float *)(iVar1 + 0xcc) = (float)fVar3;
    }
    else {
      fVar3 = (float10)*(float *)(iVar1 + 0xcc);
    }
    DAT_006c9f70 = (float)fVar3;
  }
  if ((DAT_006c9f74 & 2) == 0) {
    DAT_006c9f6c = DAT_006c9f70 * 4.0;
    DAT_006c9f74 = DAT_006c9f74 | 2;
  }
  local_8 = DAT_006c9f6c;
  local_18[0] = -DAT_006c9f70;
  local_18[2] = -DAT_006c9f70;
  local_4 = DAT_006c9f70;
  local_18[1] = 0.0;
  local_18[3] = DAT_006c9f70;
  pfVar2 = local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

