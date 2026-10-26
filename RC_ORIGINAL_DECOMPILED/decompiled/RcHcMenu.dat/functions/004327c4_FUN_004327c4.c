/*
 * FUN_004327c4 at 004327c4
 * undefined __register FUN_004327c4(int param_1)
 * Address ranges: 004327c4-004327ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004327c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  iVar1 = FUN_0041bd28(*(int *)(param_1 + 0x58));
  if (iVar1 != *(int *)(param_1 + 0x74)) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 0x10;
    uVar2 = FUN_0041bd28(*(int *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x74) = uVar2;
  }
  FUN_00433700(param_1,0xb00e,0,0);
  return;
}

