/*
 * FUN_004aa1dc at 004aa1dc
 * undefined __register FUN_004aa1dc(int param_1)
 * Address ranges: 004aa1dc-004aa240
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004aa1dc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x28) = 1;
  puStack_18 = &LAB_004aa241;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar1 = FUN_004aa3d0(param_1);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_004aa3bc(param_1,iVar1);
      FUN_004a9ab4(iVar2);
      if (*(char *)(param_1 + 0x28) == '\0') break;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

