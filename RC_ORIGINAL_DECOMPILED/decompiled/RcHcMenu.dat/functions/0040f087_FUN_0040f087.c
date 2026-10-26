/*
 * FUN_0040f087 at 0040f087
 * undefined __register FUN_0040f087(void)
 * Address ranges: 0040f087-0040f091
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040f087(void)

{
  char cVar1;
  char *unaff_ESI;
  
  do {
    cVar1 = *unaff_ESI;
    if (cVar1 == '\0') {
      return;
    }
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 == ' ');
  return;
}

