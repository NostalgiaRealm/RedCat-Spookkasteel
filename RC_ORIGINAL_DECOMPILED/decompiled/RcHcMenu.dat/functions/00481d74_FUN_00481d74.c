/*
 * FUN_00481d74 at 00481d74
 * undefined __register FUN_00481d74(int param_1, LPCSTR param_2)
 * Address ranges: 00481d74-00481dd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00481d74(int param_1,LPCSTR param_2)

{
  undefined4 *in_FS_OFFSET;
  LPSTR in_stack_fffffee4;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  CHAR local_108 [256];
  int local_8;
  
  puStack_110 = (undefined1 *)0x481d8b;
  local_8 = param_1;
  FUN_00481830(param_1);
  puStack_114 = &LAB_00481dd1;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  puStack_110 = &stack0xfffffffc;
  if (param_2 != (LPCSTR)0x0) {
    puStack_110 = &stack0xfffffffc;
    in_stack_fffffee4 = FUN_0047fae4(*(int *)(local_8 + 0x30),param_2,local_108,0xff);
    thunk_FUN_00479b4d(in_stack_fffffee4);
  }
  *in_FS_OFFSET = in_stack_fffffee4;
  puStack_114 = &LAB_00481dd8;
  uStack_118 = 0x481dd0;
  FUN_00481854(local_8);
  return;
}

