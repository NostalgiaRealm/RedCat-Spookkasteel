/*
 * FUN_00448628 at 00448628
 * undefined __register FUN_00448628(HWND param_1)
 * Address ranges: 00448628-0044864d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00448628(HWND param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)GetWindowLongA(param_1,-4);
  DestroyWindow(param_1);
  if (pcVar1 != DefWindowProcA) {
    FUN_00448550((int)pcVar1);
  }
  return;
}

