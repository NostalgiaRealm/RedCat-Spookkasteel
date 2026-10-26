/*
 * FUN_00418228 at 00418228
 * undefined __register FUN_00418228(void)
 * Address ranges: 00418228-004182f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418228(void)

{
  char cVar1;
  bool bVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int iVar3;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  char *local_c;
  uint local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = (char *)0x0;
  puStack_14 = &LAB_004182f1;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = FUN_0040f9f8(*(int **)(in_stack_00000004 + -8),
                         *(undefined4 **)(in_stack_00000004 + -0xc));
  bVar2 = FUN_004181d8();
  if (!bVar2) {
    iVar3 = in_stack_00000004;
    FUN_00417fe0();
    cVar1 = **(char **)(in_stack_00000004 + -0x10);
    if (cVar1 == '\x01') {
      FUN_004180c8(*(int *)**(undefined4 **)(in_stack_00000004 + -0xc),local_8,iVar3,
                   in_stack_00000004);
    }
    else if (cVar1 == '\x02') {
      FUN_00417724(*(int *)(in_stack_00000004 + -4),local_8);
    }
    else if (cVar1 == '\x03') {
      FUN_0040f7c8(*(char **)(in_stack_00000004 + -0x10),local_8,(int *)&local_c);
      FUN_00417ce8(*(int *)(in_stack_00000004 + -4),local_c);
    }
    else if (cVar1 == '\x06') {
      FUN_00418034(local_8,extraout_EDX,iVar3,in_stack_00000004);
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004182f8;
  puStack_14 = (undefined1 *)0x4182f0;
  FUN_00403db0((int *)&local_c);
  return;
}

