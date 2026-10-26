/*
 * FUN_0043cb78 at 0043cb78
 * undefined __register FUN_0043cb78(undefined4 param_1, HWND param_2)
 * Address ranges: 0043cb78-0043cb9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043cb78(undefined4 param_1,HWND param_2)

{
  HWND pHVar1;
  
  pHVar1 = (HWND)FUN_0043caec();
  if (param_2 != pHVar1) {
    if (param_2 == (HWND)0x0) {
      ReleaseCapture();
    }
    else {
      SetCapture(param_2);
    }
  }
  return;
}

