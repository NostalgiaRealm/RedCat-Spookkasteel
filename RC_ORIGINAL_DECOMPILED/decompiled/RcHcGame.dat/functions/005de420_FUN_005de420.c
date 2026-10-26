/*
 * FUN_005de420 at 005de420
 * undefined FUN_005de420(void)
 * Address ranges: 005de420-005de502
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005de420(void)

{
  int iVar1;
  int *piVar2;
  int local_8;
  int local_4;
  
  iVar1 = FUN_005cd390(8);
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b0894,0x8e,
                 &DAT_006b3f70,0);
    return (int *)0x0;
  }
  piVar2 = (int *)FUN_005cf3b0(local_4 * local_8 + 8);
  if (piVar2 == (int *)0x0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b0894,0x96,
                 &DAT_006b3f70,0);
    return (int *)0x0;
  }
  iVar1 = FUN_005cd390(local_4 * local_8);
  if (iVar1 == 0) {
    FUN_005cf400(piVar2);
    _DAT_007203c0 = 0;
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b0894,0x9e,
                 &DAT_006b3f70,0);
    return (int *)0x0;
  }
  *piVar2 = local_8;
  piVar2[1] = local_4;
  return piVar2;
}

