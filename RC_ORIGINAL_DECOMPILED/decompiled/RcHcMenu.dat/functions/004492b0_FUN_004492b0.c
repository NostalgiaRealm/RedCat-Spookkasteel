/*
 * FUN_004492b0 at 004492b0
 * undefined __register FUN_004492b0(int param_1)
 * Address ranges: 004492b0-004493c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004492b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar1 = FUN_00448bc4(param_1);
    iVar1 = *(int *)(param_1 + 0x10) - iVar1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  FUN_00448bc4(param_1);
  FUN_004491a8();
  *(undefined1 *)(param_1 + 0x44) = 0;
  FUN_00438988(*(int **)(param_1 + 4));
  (**(code **)PTR_DAT_005723e0)();
  FUN_0044902c(param_1,*(int *)(param_1 + 0xc));
  iVar1 = FUN_00448bc4(param_1);
  uVar2 = (iVar1 * 9) / 10;
  *(short *)(param_1 + 10) = (short)uVar2;
  if (*(char *)(param_1 + 0x1f) != '\0') {
    *(short *)(param_1 + 8) = (short)((ulonglong)(uVar2 & 0xffff) / 10);
  }
  return;
}

