/*
 * FUN_004c4380 at 004c4380
 * undefined FUN_004c4380(void)
 * Address ranges: 004c4380-004c43a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004c4380(int param_1)

{
  tagMSG local_1c;
  
  PeekMessageA(&local_1c,*(HWND *)(*(int *)(param_1 + 0x58) + 0x54),0x100,0x108,1);
  return;
}

