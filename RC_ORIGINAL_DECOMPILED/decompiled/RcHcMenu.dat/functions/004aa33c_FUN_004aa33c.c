/*
 * FUN_004aa33c at 004aa33c
 * undefined __register FUN_004aa33c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 004aa33c-004aa3a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004aa33c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x28) = 1;
  puStack_1c = &LAB_004aa3aa;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = FUN_004aa3d0(param_1);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      uVar3 = param_4;
      iVar2 = FUN_004aa3bc(param_1,iVar1);
      FUN_004a9af8(iVar2,param_2,param_3,uVar3);
      if (*(char *)(param_1 + 0x28) == '\0') break;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  *in_FS_OFFSET = uStack_20;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

