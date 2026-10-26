/*
 * Unwind@006405d8 at 006405d8
 * undefined Unwind@006405d8(void)
 * Address ranges: 006405d8-006405ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Unwind_006405d8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    FUN_005e2f00();
    return;
  }
  return;
}

