/*
 * FUN_00418920 at 00418920
 * undefined __register FUN_00418920(void)
 * Address ranges: 00418920-004189c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418920(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_110 [256];
  char *local_10;
  int local_c [2];
  
  puStack_118 = &stack0xfffffffc;
  local_10 = (char *)0x0;
  puStack_11c = &LAB_004189c6;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_0040ff98(*(int **)(in_stack_00000004 + -8),*(int *)(in_stack_00000004 + -0xc),local_c);
  uVar1 = FUN_0041889c();
  if ((char)uVar1 == '\0') {
    FUN_00417fe0();
    if (local_c[0] == 0) {
      FUN_00418ed0(*(int *)(in_stack_00000004 + -4),0xd,in_stack_00000004);
    }
    else {
      FUN_00403344(**(int **)(*(int *)(in_stack_00000004 + -4) + 0x1c),local_c[0],local_110);
      FUN_00403fd4((int *)&local_10,local_110);
      FUN_00417ce8(*(int *)(in_stack_00000004 + -4),local_10);
    }
  }
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_004189cd;
  puStack_11c = (undefined1 *)0x4189c5;
  FUN_00403db0((int *)&local_10);
  return;
}

