/*
 * FUN_005be540 at 005be540
 * undefined FUN_005be540(void)
 * Address ranges: 005be540-005be764
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005be6da) */
/* WARNING: Removing unreachable block (ram,0x005be6e9) */
/* WARNING: Removing unreachable block (ram,0x005be6c8) */
/* WARNING: Removing unreachable block (ram,0x005be71a) */
/* WARNING: Removing unreachable block (ram,0x005be729) */

int * FUN_005be540(void)

{
  int iVar1;
  int *piVar2;
  int local_4;
  
  iVar1 = FUN_005cd390(4);
  if (iVar1 == 0) {
    FUN_005cf220(0x47,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x7a7,&DAT_006b3f70,
                 0);
    return (int *)0x0;
  }
  if (local_4 != 0xf0) {
    FUN_005cf220(0x47,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x7ac,&DAT_006b3f70,
                 0);
    return (int *)0x0;
  }
  iVar1 = FUN_005cd390(4);
  if (iVar1 == 0) {
    FUN_005cf220(0x47,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x7b1,&DAT_006b3f70,
                 0);
    return (int *)0x0;
  }
  piVar2 = (int *)FUN_005bd440();
  if (piVar2 != (int *)0x0) {
    iVar1 = FUN_005cf3b0(0xf0);
    *piVar2 = iVar1;
    if (*piVar2 == 0) {
      FUN_005cf220(0x41,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x7cb,
                   &DAT_006b3f70,0);
      FUN_005bd500();
      return (int *)0x0;
    }
    iVar1 = FUN_005cd390(0xf0);
    if (iVar1 != 0) {
      return piVar2;
    }
    FUN_005cf220(0x47,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x7d1,&DAT_006b3f70,
                 0);
    FUN_005bd500();
    return (int *)0x0;
  }
  FUN_005cf220(0x41,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x7c3,&DAT_006b3f70,0)
  ;
  return (int *)0x0;
}

