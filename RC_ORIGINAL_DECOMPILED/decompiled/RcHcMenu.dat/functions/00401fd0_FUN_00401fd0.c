/*
 * FUN_00401fd0 at 00401fd0
 * undefined __register FUN_00401fd0(void)
 * Address ranges: 00401fd0-00402019
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00401fd0(void)

{
  if (0 < (int)DAT_00573488) {
    if ((int)DAT_00573488 < 0xc) {
      DAT_00573434 = 7;
    }
    else {
      *DAT_0057348c = DAT_00573488 | 2;
      FUN_00401dbc((int)(DAT_0057348c + 1));
      DAT_0057348c = (uint *)0x0;
      DAT_00573488 = 0;
    }
  }
  return;
}

