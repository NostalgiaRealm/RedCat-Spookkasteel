/*
 * FUN_004be818 at 004be818
 * undefined __register FUN_004be818(int param_1, int * param_2)
 * Address ranges: 004be818-004be88a;004be8cb-004be8e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 10 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 10 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004be818(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  undefined4 local_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  int local_20;
  _union_2683 local_1c;
  int *local_c;
  int local_8;
  
  puStack_130 = &stack0xfffffffc;
  puStack_13c = &stack0xfffffffc;
  local_20 = 0;
  local_1c._0_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._8_4_ = 0;
  local_1c._12_4_ = 0;
  puStack_134 = &LAB_004be8e9;
  local_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_138;
  puStack_140 = &LAB_004be88b;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  local_c = param_2;
  local_8 = param_1;
  FUN_004b9bb0(*(int *)(param_1 + 0x34),(VARIANT *)&local_1c.n2);
  iVar1 = FUN_00403224(local_c,(int)&PTR_FUN_004bcca8);
  FUN_004b9cc8(*(int *)(local_8 + 0x34),(undefined2 *)(iVar1 + 0x10));
  *in_FS_OFFSET = uStack_144;
  *in_FS_OFFSET = local_138;
  puStack_130 = &LAB_004be8f0;
  puStack_134 = (undefined1 *)0x4be8e0;
  FUN_00403db0(&local_20);
  puStack_134 = (undefined1 *)0x4be8e8;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  return;
}

