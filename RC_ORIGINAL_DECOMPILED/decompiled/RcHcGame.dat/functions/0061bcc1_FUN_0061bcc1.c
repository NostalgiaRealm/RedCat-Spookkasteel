/*
 * FUN_0061bcc1 at 0061bcc1
 * undefined FUN_0061bcc1(void)
 * Address ranges: 0061bcc1-0061bcfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061bcc1(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
      FUN_0060e601(param_2);
    }
  }
  else if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
    FUN_0060e601(param_2);
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) & 0xee;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
    return;
  }
  return;
}

