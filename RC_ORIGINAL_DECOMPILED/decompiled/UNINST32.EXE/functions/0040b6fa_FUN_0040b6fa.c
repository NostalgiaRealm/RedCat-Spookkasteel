/*
 * FUN_0040b6fa at 0040b6fa
 * undefined __stdcall FUN_0040b6fa(void)
 * Address ranges: 0040b6fa-0040b714
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040b6fa(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0041377c;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0040c92a(puVar2);
    puVar2 = puVar1;
  }
  return;
}

