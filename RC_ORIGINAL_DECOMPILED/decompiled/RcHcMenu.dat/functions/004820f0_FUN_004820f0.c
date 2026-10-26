/*
 * FUN_004820f0 at 004820f0
 * undefined __register FUN_004820f0(int param_1, LPCSTR param_2)
 * Address ranges: 004820f0-00482156;0048215e-0048216f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004820f0(int param_1,LPCSTR param_2)

{
  bool bVar1;
  LPSTR pCVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  CHAR local_111 [261];
  LPCSTR local_c;
  int local_8;
  
  puStack_118 = (undefined1 *)0x482107;
  local_c = param_2;
  local_8 = param_1;
  bVar1 = FUN_00480bd4(param_1);
  if (bVar1) {
    puStack_118 = (undefined1 *)0x482113;
    FUN_00481830(local_8);
    puStack_11c = &LAB_00482157;
    uStack_120 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_120;
    puStack_118 = &stack0xfffffffc;
    pCVar2 = FUN_0047fae4(0,local_c,local_111,0x104);
    uVar3 = thunk_FUN_00479b3b(pCVar2);
    FUN_0047fe48(uVar3);
    *in_FS_OFFSET = pCVar2;
    puStack_11c = (undefined1 *)0x48215e;
    uStack_120 = 0x482156;
    FUN_00481854(local_8);
    return;
  }
  puStack_118 = (undefined1 *)0x48216c;
  FUN_00403e04((int *)(local_8 + 0x54),(undefined4 *)local_c);
  return;
}

