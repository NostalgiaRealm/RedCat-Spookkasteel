/*
 * FUN_004d0978 at 004d0978
 * undefined __register FUN_004d0978(int * param_1, undefined4 param_2, int param_3, int * param_4)
 * Address ranges: 004d0978-004d0cb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 19 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 19 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004d0978(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  char *pcStack_1a0;
  char *pcStack_19c;
  undefined1 *puStack_198;
  undefined4 uStack_194;
  undefined1 *puStack_190;
  undefined1 *puStack_18c;
  _union_2683 local_180;
  undefined4 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined1 local_164;
  _union_2683 *local_160;
  undefined1 local_15c;
  undefined4 local_158;
  undefined1 local_154;
  undefined4 local_150;
  undefined1 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined1 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  int local_130;
  int local_12c;
  byte local_128 [256];
  int local_28;
  int local_24;
  uint local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_11;
  int local_10;
  undefined1 *local_c;
  int *local_8;
  
  puStack_18c = &stack0xfffffffc;
  local_180._0_4_ = 0;
  local_180.decVal.Hi32 = 0;
  local_180._8_4_ = 0;
  local_180._12_4_ = 0;
  local_12c = 0;
  local_130 = 0;
  local_28 = 0;
  for (iVar7 = param_3; -1 < iVar7; iVar7 = iVar7 + -1) {
  }
  local_c = &stack0xfffffe78;
  puStack_190 = &LAB_004d0ced;
  uStack_194 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_194;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  puVar2 = &stack0xfffffe78;
  local_8 = param_1;
  if (param_4 == (int *)0x0) {
    puStack_198 = (undefined1 *)0x4d09e8;
    FUN_00402fe0(*param_1,local_128);
    puStack_198 = (undefined1 *)0x4d09f6;
    FUN_00403fd4(&local_28,local_128);
    puStack_198 = (undefined1 *)0x4d0a03;
    FUN_00404038(&local_28,(undefined4 *)".FindAppObjByProps: Object is nil.");
    puStack_198 = (undefined1 *)0x4d0a15;
    FUN_00403d94(local_28);
    puVar1 = puStack_18c;
    puVar2 = local_c;
  }
  local_c = puVar2;
  puStack_18c = puVar1;
  puStack_198 = (undefined1 *)0x4d0a1d;
  cVar3 = (**(code **)(*local_8 + 0x44))();
  uVar5 = extraout_ECX;
  uVar6 = extraout_EDX;
  if (cVar3 == '\0') {
    puStack_198 = (undefined1 *)0x4d0a31;
    FUN_00402fe0(*local_8,local_128);
    puStack_198 = (undefined1 *)0x4d0a42;
    FUN_00403fd4(&local_130,local_128);
    puStack_198 = (undefined1 *)local_130;
    pcStack_19c = ".FindAppObjByProps: ";
    pcStack_1a0 = " Connection must be open";
    FUN_004040f0(&local_12c,3);
    FUN_00403d94(local_12c);
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX_00;
  }
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  pcStack_19c = &LAB_004d0cb5;
  pcStack_1a0 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_1a0;
  puStack_198 = &stack0xfffffffc;
  local_18 = FUN_004cf39c(local_8,uVar6,uVar5);
  local_1c = (int *)FUN_004cf3c8(local_8,'\0');
  iVar7 = FUN_00494858(param_4);
  FUN_004b49b8(local_18,iVar7);
  if (-1 < local_10) {
    local_24 = local_10 + 1;
    local_20 = 0;
    do {
      if (((int)local_20 < 0) || (uVar4 = local_20, local_10 < (int)local_20)) {
        uVar4 = thunk_FUN_00402874(local_20);
      }
      cVar3 = (**(code **)(**(int **)(local_c + uVar4 * 4) + 0x4c))();
      if (cVar3 == '\0') {
        FUN_00403d94("Gegeven AppProp is niet geinitialiseerd");
      }
      if (((int)local_20 < 0) || (uVar4 = local_20, local_10 < (int)local_20)) {
        uVar4 = thunk_FUN_00402874(local_20);
      }
      cVar3 = (**(code **)(**(int **)(local_c + uVar4 * 4) + 0x50))();
      if (cVar3 == '\0') {
        local_158 = *(undefined4 *)PTR_DAT_00572470;
        local_154 = 7;
        FUN_004b4e04((int)local_18,&local_158,0);
        if (((int)local_20 < 0) || (uVar4 = local_20, local_10 < (int)local_20)) {
          uVar4 = thunk_FUN_00402874(local_20);
        }
        local_170 = *(undefined4 *)(local_c + uVar4 * 4);
        local_16c = 7;
        local_168 = *(undefined4 *)PTR_DAT_0057260c;
        local_164 = 7;
        if (((int)local_20 < 0) || (uVar4 = local_20, local_10 < (int)local_20)) {
          uVar4 = thunk_FUN_00402874(local_20);
        }
        FUN_00496550(*(int **)(local_c + uVar4 * 4),(VARIANT *)&local_180.n2);
        local_160 = &local_180;
        local_15c = 0xd;
        FUN_004b4e04((int)local_18,&local_170,2);
        local_158 = *(undefined4 *)PTR_DAT_005725b8;
        local_154 = 7;
        FUN_004b4e04((int)local_18,&local_158,0);
      }
      else {
        local_150 = *(undefined4 *)PTR_DAT_00572470;
        local_14c = 7;
        if (((int)local_20 < 0) || (uVar4 = local_20, local_10 < (int)local_20)) {
          uVar4 = thunk_FUN_00402874(local_20);
        }
        local_148 = *(undefined4 *)(local_c + uVar4 * 4);
        local_144 = 7;
        local_140 = *(undefined4 *)PTR_DAT_0057252c;
        local_13c = 7;
        local_138 = *(undefined4 *)PTR_DAT_005725b8;
        local_134 = 7;
        FUN_004b4e04((int)local_18,&local_150,3);
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  FUN_004b4f0c(local_18,0);
  FUN_004d69fc(local_1c,(int)local_18);
  FUN_004d5dc0(local_1c);
  local_11 = (**(code **)(*local_1c + 0x3c))();
  *in_FS_OFFSET = pcStack_1a0;
  puStack_198 = &LAB_004d0cbc;
  pcStack_19c = (char *)0x4d0cac;
  FUN_00403094(local_18);
  pcStack_19c = (char *)0x4d0cb4;
  FUN_00403094(local_1c);
  return;
}

