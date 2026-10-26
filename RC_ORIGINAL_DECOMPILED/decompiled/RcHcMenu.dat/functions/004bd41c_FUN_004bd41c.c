/*
 * FUN_004bd41c at 004bd41c
 * undefined __register FUN_004bd41c(int param_1)
 * Address ranges: 004bd41c-004bd4f9;004bd54f-004bd58e;004bd5eb-004bd620
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 8 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 8 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004bd41c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  undefined4 local_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  int local_11c [2];
  undefined4 local_114 [65];
  int local_10 [3];
  
  puStack_12c = &stack0xfffffffc;
  local_11c[1] = 0;
  local_11c[0] = 0;
  local_114[0] = 0;
  local_10[1] = 0;
  local_10[0] = 0;
  puStack_130 = &LAB_004bd621;
  local_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_134;
  puVar1 = &stack0xfffffffc;
  local_10[2] = param_1;
  if (*(int *)(param_1 + 4) == 0) {
    puStack_138 = (undefined1 *)0x4bd470;
    FUN_00403d94("Assertion failure");
    puVar1 = puStack_12c;
  }
  puStack_12c = puVar1;
  if (*(int *)(*(int *)(local_10[2] + 4) + 4) == 0) {
    puStack_138 = (undefined1 *)0x4bd490;
    FUN_00403d94("Assertion failure");
  }
  puStack_138 = (undefined1 *)0x4bd4a4;
  iVar2 = FUN_00403224(*(int **)(*(int *)(local_10[2] + 4) + 4),(int)&PTR_FUN_004bcac4);
  if (*(char *)(iVar2 + 0x2c) != '\0') {
    puStack_138 = (undefined1 *)0x4bd4be;
    FUN_00403d94("Cannot execute because the database is opened readonly.");
  }
  puStack_138 = (undefined1 *)0x4bd4c6;
  iVar2 = FUN_004d68f0(local_10[2]);
  if (iVar2 == 0) {
    puStack_13c = &LAB_004bd58f;
    uStack_140 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_140;
    puStack_138 = &stack0xfffffffc;
    FUN_004045b8((BSTR)local_114,*(LPCSTR *)(local_10[2] + 0x2c));
    FUN_004b8a50(*(int *)(local_10[2] + 0x30),local_114[0],(VARIANTARG *)PTR_DAT_005725ac);
    *in_FS_OFFSET = uStack_140;
  }
  else {
    puStack_13c = &LAB_004bd4fa;
    uStack_140 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_140;
    puStack_138 = &stack0xfffffffc;
    FUN_004b9704(*(int *)(local_10[2] + 0x38),(VARIANTARG *)PTR_DAT_005725ac);
    *in_FS_OFFSET = uStack_140;
  }
  *in_FS_OFFSET = local_134;
  puStack_12c = &LAB_004bd628;
  puStack_130 = (undefined1 *)0x4bd608;
  FUN_00403dd4(local_11c,2);
  puStack_130 = (undefined1 *)0x4bd613;
  FUN_00404474(local_114);
  puStack_130 = (undefined1 *)0x4bd620;
  FUN_00403dd4(local_10,2);
  return;
}

