/*
 * FUN_10001980 at 10001980
 * undefined __stdcall FUN_10001980(void)
 * Address ranges: 10001980-100019e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001980(void)

{
  float unaff_retaddr;
  undefined1 *apuStack_20 [2];
  undefined1 local_18 [8];
  float fStack_10;
  float fStack_c;
  float fStack_4;
  
  apuStack_20[0] = local_18;
  (**(code **)(*DAT_1001bcd0 + 0x3c))(DAT_1001bcd0);
  fStack_10 = ((fStack_4 + unaff_retaddr) * -1.0) / (unaff_retaddr - fStack_4);
  fStack_c = (((fStack_4 + unaff_retaddr) - 2.0) * -1.0) / (unaff_retaddr - fStack_4);
  (**(code **)(*DAT_1001bcd0 + 0x34))(DAT_1001bcd0,apuStack_20);
  return;
}

