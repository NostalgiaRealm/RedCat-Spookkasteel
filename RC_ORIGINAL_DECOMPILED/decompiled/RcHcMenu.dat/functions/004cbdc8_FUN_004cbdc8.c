/*
 * FUN_004cbdc8 at 004cbdc8
 * undefined __register FUN_004cbdc8(void)
 * Address ranges: 004cbdc8-004cbde1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cbdc8(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = '\v';
  puVar2 = &DAT_005745d0;
  do {
    FUN_00403094((int *)*puVar2);
    puVar2 = puVar2 + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}

