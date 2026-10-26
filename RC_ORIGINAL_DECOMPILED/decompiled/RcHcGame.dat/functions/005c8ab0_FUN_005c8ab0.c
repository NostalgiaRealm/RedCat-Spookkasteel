/*
 * FUN_005c8ab0 at 005c8ab0
 * undefined FUN_005c8ab0(void)
 * Address ranges: 005c8ab0-005c8b97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005c8ab0(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  *param_3 = 0;
  iVar1 = FUN_005cf3b0(0x24);
  if (iVar1 == 0) {
    FUN_005cf220(0x34,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x462,&DAT_006b3f70,
                 0);
    return 0;
  }
  iVar2 = (**(code **)(*DAT_006cc490 + 0x14))(DAT_006cc490,*param_2,iVar1);
  if (iVar2 != 0) {
    FUN_005cf400(iVar1);
    _DAT_007203c0 = 0;
    iVar1 = FUN_005c8ba0(param_2[6]);
    if (iVar1 == 0) {
      FUN_005cf220(0xb,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x46d,&DAT_006b3f70
                   ,0);
      return 0;
    }
  }
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(unaff_ESI + 4);
  *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + 1;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = param_2[8];
  *(undefined4 *)(iVar1 + 0xc) = param_2[3];
  *(undefined4 *)(iVar1 + 0x10) = param_2[4];
  *(undefined4 *)(iVar1 + 0x14) = param_2[5];
  *(undefined4 *)(iVar1 + 0x18) = param_2[6];
  param_2[8] = iVar1;
  *param_3 = iVar1;
  return 1;
}

