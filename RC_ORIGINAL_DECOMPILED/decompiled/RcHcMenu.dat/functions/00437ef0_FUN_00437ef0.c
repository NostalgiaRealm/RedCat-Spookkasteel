/*
 * FUN_00437ef0 at 00437ef0
 * undefined __register FUN_00437ef0(int param_1)
 * Address ranges: 00437ef0-00437f17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00437ef0(int param_1)

{
  SetWindowPos(*(HWND *)(param_1 + 0x14c),(HWND)0x0,0,0,0,0,
               (uint)*(ushort *)(&DAT_0056f85c + (uint)*(byte *)(param_1 + 0x168) * 2));
  return;
}

