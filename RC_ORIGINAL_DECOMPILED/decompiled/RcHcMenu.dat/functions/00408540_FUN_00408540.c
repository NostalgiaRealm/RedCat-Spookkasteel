/*
 * FUN_00408540 at 00408540
 * undefined __register FUN_00408540(LPCVOID param_1)
 * Address ranges: 00408540-00408552
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00408540(LPCVOID param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalHandle(param_1);
  GlobalUnlock(hMem);
  GlobalFree(hMem);
  return;
}

