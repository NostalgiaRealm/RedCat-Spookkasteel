/*
 * FUN_005a5d90 at 005a5d90
 * undefined FUN_005a5d90(void)
 * Address ranges: 005a5d90-005a5dc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005a5d90(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = 0xe;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  do {
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[8] = 0;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 8;
  } while (iVar1 != 0);
  return;
}

