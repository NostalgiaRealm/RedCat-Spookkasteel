/*
 * FUN_004c3030 at 004c3030
 * undefined __register FUN_004c3030(int * param_1, int * param_2, int param_3)
 * Address ranges: 004c3030-004c316f;004c31d4-004c3217
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 7 for TAppDAODatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 7 for
   TAppDAODatabase. Original bytes unchanged; names and types still inferred. */

void FUN_004c3030(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  char *pcStack_15c;
  char *pcStack_158;
  undefined1 *puStack_154;
  undefined4 uStack_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  int local_138 [2];
  _union_2683 local_130;
  byte local_120 [256];
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_148 = &stack0xfffffffc;
  local_138[0] = 0;
  local_138[1] = 0;
  local_130._0_4_ = 0;
  local_130.decVal.Hi32 = 0;
  local_130._8_4_ = 0;
  local_130._12_4_ = 0;
  local_1c = 0;
  local_20 = 0;
  local_18 = (undefined4 *)0x0;
  puStack_14c = &LAB_004c3218;
  uStack_150 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_150;
  puStack_154 = (undefined1 *)0x4c3090;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_00403224(param_2,(int)&DAT_004bca60);
  if (*(int *)(iVar1 + 4) == 0) {
    puStack_154 = (undefined1 *)0x4c30a6;
    FUN_00402fe0(*local_8,local_120);
    puStack_154 = (undefined1 *)0x4c30b4;
    FUN_00403fd4(&local_20,local_120);
    puStack_154 = (undefined1 *)local_20;
    pcStack_158 = ".DoDropViewFor: ";
    pcStack_15c = " Parameter cannot be nil";
    puStack_160 = (undefined1 *)0x4c30ce;
    FUN_004040f0(&local_1c,3);
    puStack_160 = (undefined1 *)0x4c30e0;
    FUN_00403d94(local_1c);
  }
  puStack_160 = (undefined1 *)0x4c30ee;
  FUN_00403e48((int *)&local_18,*(int *)(local_10 + 0x3c));
  local_14 = (int *)0x0;
  puStack_164 = &LAB_004c3170;
  uStack_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_168;
  puStack_160 = &stack0xfffffffc;
  iVar1 = FUN_00403224(local_c,(int)&DAT_004bca60);
  iVar1 = FUN_004b8760(*(int *)(iVar1 + 4));
  FUN_004054ac((VARIANTARG *)&local_130.n2,local_18);
  local_14 = (int *)FUN_004b9984(iVar1,(VARIANTARG *)&local_130.n2);
  FUN_004b93cc((int)local_14,local_138 + 1);
  iVar1 = FUN_00403224(local_c,(int)&DAT_004bca60);
  iVar1 = FUN_004b8760(*(int *)(iVar1 + 4));
  FUN_004b7660(iVar1);
  *in_FS_OFFSET = uStack_168;
  puStack_160 = (undefined1 *)0x4c31dc;
  FUN_00403094(local_14);
  *in_FS_OFFSET = pcStack_15c;
  puStack_154 = &LAB_004c321f;
  pcStack_158 = (char *)0x4c31f4;
  FUN_00403db0(local_138);
  pcStack_158 = (char *)0x4c31ff;
  FUN_00404474(local_138 + 1);
  pcStack_158 = (char *)0x4c320a;
  FUN_00405bcc((VARIANTARG *)&local_130.n2);
  pcStack_158 = (char *)0x4c3217;
  FUN_00403dd4(&local_20,3);
  return;
}

