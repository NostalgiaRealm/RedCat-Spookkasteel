/*
 * FUN_0053b690 at 0053b690
 * undefined FUN_0053b690(void)
 * Address ranges: 0053b690-0053b6aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0053b690(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0053b670(param_1);
  if (cVar1 != '\0') {
    return *(undefined4 *)(param_1 + 8);
  }
  return 0;
}

