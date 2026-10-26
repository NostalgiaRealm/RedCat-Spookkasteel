/*
 * FUN_0041d108 at 0041d108
 * undefined __register FUN_0041d108(int param_1)
 * Address ranges: 0041d108-0041d137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041d108(int param_1)

{
  HGDIOBJ h;
  
  h = (HGDIOBJ)FUN_0041c05c(*(int *)(param_1 + 0x10));
  SelectObject(*(HDC *)(param_1 + 4),h);
  SetROP2(*(HDC *)(param_1 + 4),
          (uint)*(ushort *)(&DAT_0056f624 + (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x18) * 2));
  return;
}

