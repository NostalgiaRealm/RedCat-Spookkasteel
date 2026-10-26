/*
 * FUN_0040f092 at 0040f092
 * undefined __register FUN_0040f092(void)
 * Address ranges: 0040f092-0040f0ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040f092(void)

{
  int unaff_EBP;
  char *unaff_ESI;
  
  while( true ) {
    if ((byte)(*unaff_ESI - 0x3aU) < 0xf6) break;
    *(uint *)(unaff_EBP + -4) = (uint)(byte)(*unaff_ESI - 0x30);
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}

