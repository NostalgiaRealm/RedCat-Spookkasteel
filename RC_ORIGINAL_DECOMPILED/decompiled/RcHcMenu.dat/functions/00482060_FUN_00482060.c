/*
 * FUN_00482060 at 00482060
 * undefined __register FUN_00482060(int param_1, LPCSTR param_2)
 * Address ranges: 00482060-004820d4;004820dc-004820ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00482060(int param_1,LPCSTR param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  CHAR local_111 [261];
  LPCSTR local_c;
  int local_8;
  
  puStack_118 = (undefined1 *)0x482077;
  local_c = param_2;
  local_8 = param_1;
  bVar1 = FUN_00480bd4(param_1);
  if (bVar1) {
    puStack_118 = (undefined1 *)0x482083;
    FUN_00481830(local_8);
    puStack_11c = &LAB_004820d5;
    uStack_120 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_120;
    puStack_118 = &stack0xfffffffc;
    FUN_0047fae4(0,local_c,local_111,0x104);
    uVar2 = FUN_0048115c(local_8);
    uVar3 = thunk_FUN_00478ffa(uVar2);
    FUN_0047fe48(uVar3);
    *in_FS_OFFSET = uVar2;
    FUN_00481854(local_8);
    return;
  }
  puStack_118 = (undefined1 *)0x4820ea;
  FUN_00403e04((int *)(local_8 + 0x50),(undefined4 *)local_c);
  return;
}

