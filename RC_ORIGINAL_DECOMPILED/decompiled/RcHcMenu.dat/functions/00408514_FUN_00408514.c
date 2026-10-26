/*
 * FUN_00408514 at 00408514
 * undefined __register FUN_00408514(UINT param_1, SIZE_T param_2)
 * Address ranges: 00408514-00408521
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00408514(UINT param_1,SIZE_T param_2)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(param_1,param_2);
  GlobalLock(hMem);
  return;
}

