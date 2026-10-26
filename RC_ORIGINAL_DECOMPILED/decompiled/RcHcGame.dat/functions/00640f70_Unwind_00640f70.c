/*
 * Unwind@00640f70 at 00640f70
 * undefined Unwind@00640f70(void)
 * Address ranges: 00640f70-00640f86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Unwind_00640f70(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    FUN_00542570();
    return;
  }
  return;
}

