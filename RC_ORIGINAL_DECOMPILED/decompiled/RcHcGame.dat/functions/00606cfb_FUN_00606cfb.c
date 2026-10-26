/*
 * FUN_00606cfb at 00606cfb
 * undefined FUN_00606cfb(void)
 * Address ranges: 00606cfb-00606d20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00606cfb(int param_1)

{
  DAT_0070febc = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_006070ba);
  return param_1;
}

