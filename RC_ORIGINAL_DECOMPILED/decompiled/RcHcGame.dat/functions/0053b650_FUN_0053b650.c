/*
 * FUN_0053b650 at 0053b650
 * undefined FUN_0053b650(void)
 * Address ranges: 0053b650-0053b66a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0053b650(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0053b630(param_1);
  if (cVar1 != '\0') {
    return *(undefined4 *)(param_1 + 8);
  }
  return 0;
}

