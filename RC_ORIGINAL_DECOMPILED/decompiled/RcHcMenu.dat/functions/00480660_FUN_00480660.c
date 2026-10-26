/*
 * FUN_00480660 at 00480660
 * undefined __register FUN_00480660(int param_1, LPCSTR param_2)
 * Address ranges: 00480660-004806c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00480660(int param_1,LPCSTR param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  LPSTR in_stack_fffffee4;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  CHAR local_108 [256];
  int local_8;
  
  puStack_110 = (undefined1 *)0x480677;
  local_8 = param_1;
  FUN_00481830(param_1);
  puStack_114 = &LAB_004806c2;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  puStack_110 = &stack0xfffffffc;
  if (param_2 != (LPCSTR)0x0) {
    puStack_110 = &stack0xfffffffc;
    in_stack_fffffee4 = FUN_0047fae4(*(int *)(local_8 + 0x30),param_2,local_108,0xff);
    uVar1 = thunk_FUN_00479b53(in_stack_fffffee4);
    FUN_0047fe48(uVar1);
  }
  *in_FS_OFFSET = in_stack_fffffee4;
  puStack_114 = &LAB_004806c9;
  uStack_118 = 0x4806c1;
  FUN_00481854(local_8);
  return;
}

