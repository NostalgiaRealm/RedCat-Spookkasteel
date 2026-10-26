/*
 * FUN_005d0180 at 005d0180
 * undefined FUN_005d0180(void)
 * Address ranges: 005d0180-005d01f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005d0180(int *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  
  param_1[4] = (int)*param_2;
  param_1[5] = (int)param_2[1];
  param_1[6] = (int)param_2[2];
  iVar3 = 0;
  if (0 < *param_1) {
    pfVar2 = (float *)(param_1[0x46] + 0x58);
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = pfVar2[-0x10] * *param_2;
      pfVar2[1] = pfVar2[-0xf] * param_2[1];
      fVar1 = param_2[2];
      pfVar2[10] = 1.4013e-45;
      pfVar2[2] = pfVar2[-0xe] * fVar1;
      pfVar2 = pfVar2 + 0x23;
    } while (iVar3 < *param_1);
    param_1[2] = 1;
    return;
  }
  param_1[2] = 1;
  return;
}

