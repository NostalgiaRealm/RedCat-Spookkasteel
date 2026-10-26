/*
 * FUN_0040e14c at 0040e14c
 * undefined __register FUN_0040e14c(void)
 * Address ranges: 0040e14c-0040e165
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040e14c(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = '\x01';
  for (puVar2 = DAT_0056f34c; (cVar1 != '\0' && (puVar2 != (undefined4 *)0x0));
      puVar2 = (undefined4 *)*puVar2) {
    cVar1 = (*(code *)puVar2[1])();
  }
  return;
}

