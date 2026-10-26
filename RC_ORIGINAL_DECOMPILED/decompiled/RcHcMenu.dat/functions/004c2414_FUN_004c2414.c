/*
 * FUN_004c2414 at 004c2414
 * undefined __register FUN_004c2414(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004c2414-004c24bb;004c25ef-004c2631
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 3 for TAppDAODatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 3 for
   TAppDAODatabase. Original bytes unchanged; names and types still inferred. */

void FUN_004c2414(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  VARIANTARG *pVVar3;
  undefined4 uStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  int local_134 [66];
  int local_2c [3];
  _union_2683 local_20;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  puStack_144 = &stack0xfffffffc;
  local_134[1] = 0;
  local_134[0] = 0;
  local_2c[1] = 0;
  local_2c[0] = 0;
  local_20._0_4_ = 0;
  local_20.decVal.Hi32 = 0;
  local_20._8_4_ = 0;
  local_20._12_4_ = 0;
  local_2c[2] = 0;
  local_10 = 0;
  puStack_148 = &LAB_004c2632;
  uStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14c;
  puStack_150 = (undefined1 *)0x4c2463;
  local_8 = param_1;
  local_c = FUN_0045b418((int *)&DAT_004bca60,'\x01',param_3);
  puStack_154 = &LAB_004c24bc;
  uStack_158 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_158;
  pVVar3 = (VARIANTARG *)PTR_DAT_005725ac;
  puStack_150 = &stack0xfffffffc;
  FUN_004045b8((BSTR)&local_10,*(LPCSTR *)(local_8 + 0x28));
  uVar2 = local_10;
  iVar1 = FUN_004bcdbc();
  uVar2 = FUN_004b7a2c(iVar1,uVar2,L";LANGID=0x0409;CP=1252;COUNTRY=0",pVVar3);
  iVar1 = FUN_00403224(local_c,(int)&DAT_004bca60);
  *(undefined4 *)(iVar1 + 4) = uVar2;
  *in_FS_OFFSET = pVVar3;
  *in_FS_OFFSET = puStack_150;
  puStack_148 = &LAB_004c2639;
  uStack_14c = 0x4c260c;
  FUN_00403dd4(local_134,2);
  uStack_14c = 0x4c2619;
  FUN_00403dd4(local_2c,2);
  uStack_14c = 0x4c2621;
  FUN_00404474(local_2c + 2);
  uStack_14c = 0x4c2629;
  FUN_00405bcc((VARIANTARG *)&local_20.n2);
  uStack_14c = 0x4c2631;
  FUN_00404474(&local_10);
  return;
}

