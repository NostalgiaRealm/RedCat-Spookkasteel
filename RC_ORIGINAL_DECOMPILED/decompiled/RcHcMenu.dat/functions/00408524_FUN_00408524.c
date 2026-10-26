/*
 * FUN_00408524 at 00408524
 * undefined __register FUN_00408524(LPCVOID param_1, SIZE_T param_2, UINT param_3)
 * Address ranges: 00408524-0040853e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00408524(LPCVOID param_1,SIZE_T param_2,UINT param_3)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalReAlloc(pvVar1,param_2,param_3);
  GlobalLock(pvVar1);
  return;
}

