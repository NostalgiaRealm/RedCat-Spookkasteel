/*
 * FUN_005b98d0 at 005b98d0
 * undefined FUN_005b98d0(void)
 * Address ranges: 005b98d0-005b993e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b98d0(undefined4 param_1,int param_2,undefined4 *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  
  *param_3 = *(undefined4 *)(param_2 + 0x74);
  param_3[1] = *(undefined4 *)(param_2 + 0x78);
  param_3[2] = *(undefined4 *)(param_2 + 0x7c);
  *param_4 = *(float *)(param_2 + 0x80);
  param_4[1] = *(float *)(param_2 + 0x84);
  param_4[2] = *(float *)(param_2 + 0x88);
  iVar3 = 3;
  pfVar1 = param_4;
  pfVar2 = (float *)(param_2 + 0xa4);
  do {
    iVar3 = iVar3 + -1;
    *(float *)(((int)param_3 - (int)param_4) + -4 + (int)(pfVar1 + 1)) =
         *(float *)(((int)param_3 - (int)param_4) + (int)pfVar1) - *pfVar2;
    *pfVar1 = *pfVar1 - *pfVar2;
    pfVar1 = pfVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (iVar3 != 0);
  return 1;
}

