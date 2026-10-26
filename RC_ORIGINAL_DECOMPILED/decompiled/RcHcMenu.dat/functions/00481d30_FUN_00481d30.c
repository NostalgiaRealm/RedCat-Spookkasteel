/*
 * FUN_00481d30 at 00481d30
 * undefined __register FUN_00481d30(int param_1)
 * Address ranges: 00481d30-00481d69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00481d30(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)0x481d3f;
  local_8 = param_1;
  FUN_00481830(param_1);
  puStack_10 = &LAB_00481d6a;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  thunk_FUN_00479b4d(0);
  *in_FS_OFFSET = 0;
  puStack_10 = &LAB_00481d71;
  uStack_14 = 0x481d69;
  FUN_00481854(local_8);
  return;
}

