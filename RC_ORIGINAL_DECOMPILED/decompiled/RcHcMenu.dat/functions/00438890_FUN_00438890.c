/*
 * FUN_00438890 at 00438890
 * undefined __register FUN_00438890(int param_1)
 * Address ranges: 00438890-004388c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438890(int param_1)

{
  tagRECT local_14;
  
  FUN_0043211c(param_1,&local_14.left);
  InflateRect(&local_14,1,1);
  InvalidateRect(*(HWND *)(*(int *)(param_1 + 0x24) + 0x14c),&local_14,-1);
  return;
}

