/*
 * FUN_00403b50 at 00403b50
 * undefined FUN_00403b50(void)
 * Address ranges: 00403b50-00403bab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00403b50(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x9c))();
  *(undefined1 *)(iVar1 + 0x208) = 0;
  FUN_0049b8d0();
  iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x9c))();
  *(undefined1 *)(iVar1 + 0x209) = 0;
  FUN_0049b8d0();
  FUN_00505400(&DAT_006b9760);
  FUN_004041b0(5000);
  FUN_00402a10(1,0);
  return;
}

