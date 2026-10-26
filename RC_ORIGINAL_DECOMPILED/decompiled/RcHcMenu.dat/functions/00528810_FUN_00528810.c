/*
 * FUN_00528810 at 00528810
 * undefined __register FUN_00528810(int * param_1, int * param_2)
 * Address ranges: 00528810-00528a1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00528810(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  char *pcStack_134;
  undefined *puStack_130;
  char *pcStack_12c;
  char *pcStack_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_00528a41;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if ((*(char *)((int)param_1 + 0x22d) != '\0') &&
     (puVar1 = &stack0xfffffffc, param_2 != (int *)0x0)) {
    iStack_124 = 0x528855;
    uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_004e310c);
    puVar1 = puStack_118;
    if ((char)uVar2 != '\0') {
      iStack_124 = 0x528869;
      FUN_00402fe0(*local_8,local_114);
      iStack_124 = 0x528877;
      FUN_00403fd4(&local_14,local_114);
      iStack_124 = local_14;
      pcStack_128 = ".SetAppObjList: ";
      pcStack_12c = 
      "AppObjGrid2 doesn\'t support MultiSelect when connected to a TAppObjCachedMemList.";
      puStack_130 = &DAT_00528acc;
      pcStack_134 = "Contact the Carthagoteam when this functionality is needed.";
      puStack_138 = (undefined1 *)0x52889b;
      FUN_004040f0(&local_10,5);
      puStack_138 = (undefined1 *)0x5288ad;
      FUN_00403d94(local_10);
      puVar1 = puStack_118;
    }
  }
  puStack_118 = puVar1;
  puStack_138 = (undefined1 *)0x5288b5;
  FUN_005231cc((uint)local_8);
  puStack_13c = &LAB_00528a1f;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puStack_138 = &stack0xfffffffc;
  if (local_8[0xa4] != 0) {
    puStack_138 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0xe8))();
    FUN_00528e38(local_8,extraout_EDX,extraout_ECX);
    piVar3 = (int *)FUN_005286e0(local_8);
    FUN_00520628(piVar3);
    piVar3 = (int *)FUN_005286e0(local_8);
    FUN_00520830(piVar3);
    iVar4 = FUN_005285b8(local_8);
    FUN_00523f00(iVar4);
    FUN_00403094((int *)local_8[0xa0]);
    local_8[0xa0] = 0;
  }
  local_8[0xa4] = (int)local_c;
  iVar4 = FUN_005285b8(local_8);
  *(int **)(*(int *)(iVar4 + 0x208) + 0xc) = local_c;
  if (local_8[0xa4] != 0) {
    piVar3 = (int *)FUN_00549b64(local_8[0xa4]);
    iVar4 = FUN_0049206c(piVar3);
    local_8[0xa0] = iVar4;
    iVar4 = FUN_00549b48(local_8[0xa4]);
    FUN_0049708c(local_8[0xa5],iVar4);
    piVar3 = (int *)FUN_005286e0(local_8);
    FUN_005279cc(piVar3,local_8[0xa5]);
    piVar3 = (int *)FUN_005286e0(local_8);
    FUN_0052766c(piVar3,local_8[0xa5]);
    FUN_00529270((int)local_8,local_8[0xa5]);
    piVar3 = (int *)FUN_005286e0(local_8);
    FUN_00520264(piVar3);
    piVar3 = (int *)FUN_005286e0(local_8);
    (**(code **)(*piVar3 + 0xc0))();
    FUN_00528c58(local_8,extraout_EDX_00,extraout_ECX_00);
  }
  (**(code **)(*local_8 + 0xec))();
  *in_FS_OFFSET = uStack_140;
  puStack_138 = &LAB_00528a26;
  puStack_13c = (undefined1 *)0x528a0e;
  piVar3 = (int *)FUN_005285b8(local_8);
  puStack_13c = (undefined1 *)0x528a16;
  (**(code **)(*piVar3 + 0xcc))();
  puStack_13c = (undefined1 *)0x528a1e;
  FUN_00523060(local_8);
  return;
}

