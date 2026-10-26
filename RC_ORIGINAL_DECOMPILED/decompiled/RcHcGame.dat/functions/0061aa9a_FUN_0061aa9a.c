/*
 * FUN_0061aa9a at 0061aa9a
 * undefined FUN_0061aa9a(void)
 * Address ranges: 0061aa9a-0061aab8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061aa9a(short param_1)

{
  short *psVar1;
  
  psVar1 = &DAT_006b3524;
  do {
    if (param_1 == *psVar1) {
      return 0;
    }
    psVar1 = psVar1 + 1;
  } while ((int)psVar1 < 0x6b3538);
  return 1;
}

