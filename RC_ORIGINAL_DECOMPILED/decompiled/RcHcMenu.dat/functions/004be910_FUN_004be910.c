/*
 * FUN_004be910 at 004be910
 * undefined __register FUN_004be910(int * param_1)
 * Address ranges: 004be910-004be97c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 7 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 7 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004be910(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  _union_2683 local_1c;
  int *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_1c._12_4_ = 0;
  local_1c._8_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._0_4_ = 0;
  puStack_24 = &LAB_004be97d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_1;
  local_c = (int *)FUN_004d7114((int *)&PTR_FUN_004bcca8,'\x01',param_1);
  iVar1 = FUN_00403224(local_c,(int)&PTR_FUN_004bcca8);
  FUN_004b9bb0(local_8[0xd],(VARIANT *)&local_1c.n2);
  FUN_00404e28((VARIANT *)(iVar1 + 0x10),(VARIANTARG *)&local_1c.n2);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004be984;
  puStack_24 = (undefined1 *)0x4be97c;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  return;
}

