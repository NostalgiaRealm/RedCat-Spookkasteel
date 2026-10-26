/*
 * FUN_0044fed8 at 0044fed8
 * undefined __register FUN_0044fed8(HWND param_1, int param_2)
 * Address ranges: 0044fed8-0044ff06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044fed8(HWND param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = FUN_0044fe80();
  if (bVar1) {
    FUN_0044feb0('\0');
  }
  ShowWindow(param_1,param_2);
  if (bVar1) {
    FUN_0044feb0('\x01');
  }
  return;
}

