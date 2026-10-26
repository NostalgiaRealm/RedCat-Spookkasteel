/*
 * FUN_004aa164 at 004aa164
 * undefined __register FUN_004aa164(int param_1)
 * Address ranges: 004aa164-004aa1cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004aa164(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x28) = 1;
  puStack_1c = &LAB_004aa1ce;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = FUN_004aa3d0(param_1);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_004aa3bc(param_1,iVar1);
      FUN_004a9aa0(iVar2);
      if (*(char *)(param_1 + 0x28) == '\0') break;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  *in_FS_OFFSET = uStack_20;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

