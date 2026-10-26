/*
 * FUN_0041d0dc at 0041d0dc
 * undefined __register FUN_0041d0dc(int param_1)
 * Address ranges: 0041d0dc-0041d107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041d0dc(int param_1)

{
  HGDIOBJ h;
  COLORREF color;
  
  h = (HGDIOBJ)FUN_0041bb5c(*(int *)(param_1 + 0xc));
  SelectObject(*(HDC *)(param_1 + 4),h);
  color = FUN_0041b688(*(uint *)(*(int *)(param_1 + 0xc) + 0x18));
  SetTextColor(*(HDC *)(param_1 + 4),color);
  return;
}

