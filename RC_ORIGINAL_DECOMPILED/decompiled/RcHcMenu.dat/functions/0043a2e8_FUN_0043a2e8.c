/*
 * FUN_0043a2e8 at 0043a2e8
 * bool __register FUN_0043a2e8(int param_1)
 * Address ranges: 0043a2e8-0043a32c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0043a2e8(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_0043e3b4(param_1);
  if ((bVar1) && (*(char *)(param_1 + 0x62) != '\0')) {
    iVar2 = FUN_0043a250(param_1);
    ImageList_EndDrag();
    bVar1 = iVar2 != 0;
    *(undefined1 *)(param_1 + 0x62) = 0;
    FUN_0043a148(param_1,-1);
    ShowCursor(-1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

