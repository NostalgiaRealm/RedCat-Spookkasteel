/*
 * FUN_005de570 at 005de570
 * undefined FUN_005de570(void)
 * Address ranges: 005de570-005de69c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005de570(int *param_1,int *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)*param_1;
  iVar2 = FUN_005de510(param_3);
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2 + 1;
  }
  if ((-1 < iVar2) && (param_3 - 1e-05 < *(float *)(piVar3[1] * iVar2 + 8 + (int)piVar3))) {
    FUN_005cf220(0x4a,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b0894,0x12d,&DAT_006b3f70,
                 0);
    return 0;
  }
  if (0x7ffffffe < *piVar3) {
    FUN_005cf220(0x4e,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b0894,0x134,&DAT_006b3f70,
                 0);
    return 0;
  }
  piVar3 = (int *)FUN_005cf410(piVar3,(*piVar3 + 1) * piVar3[1] + 8);
  if (piVar3 == (int *)0x0) {
    FUN_005cf220(0x4b,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b0894,0x13d,&DAT_006b3f70,
                 0);
    return 0;
  }
  iVar4 = iVar2 + 1;
  if (iVar4 < *piVar3) {
    iVar1 = piVar3[1];
    FUN_0060ab50((iVar2 + 2) * iVar1 + 8 + (int)piVar3,iVar1 * iVar4 + 8 + (int)piVar3,
                 (*piVar3 - iVar4) * iVar1);
  }
  *(float *)(piVar3[1] * iVar4 + 8 + (int)piVar3) = param_3;
  *piVar3 = *piVar3 + 1;
  *param_1 = (int)piVar3;
  return 1;
}

