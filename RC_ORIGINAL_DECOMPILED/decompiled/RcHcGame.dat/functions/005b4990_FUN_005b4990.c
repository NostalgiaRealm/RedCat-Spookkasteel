/*
 * FUN_005b4990 at 005b4990
 * undefined FUN_005b4990(void)
 * Address ranges: 005b4990-005b4a61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005b4990(int param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  
  iVar1 = FUN_005b4500(param_1 + 0x54);
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x41c,
                 &DAT_006b3f70,param_3);
    return 0;
  }
  pfVar2 = param_2;
  pfVar3 = (float *)(param_1 + 0x3c);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  if ((((*param_2 == 0.0) && (param_2[3] == 0.0)) && (param_2[1] == 0.0)) &&
     (((param_2[4] == 0.0 && (param_2[2] == 0.0)) && (param_2[5] == 0.0)))) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x58) = 1;
  return 1;
}

