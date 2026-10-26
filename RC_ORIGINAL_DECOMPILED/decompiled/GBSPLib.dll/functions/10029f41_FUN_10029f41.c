/*
 * FUN_10029f41 at 10029f41
 * undefined FUN_10029f41(void)
 * Address ranges: 10029f41-10029f6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029f41(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0)) {
    FUN_10029dab(param_2);
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) & 0xee;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}

