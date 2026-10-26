/*
 * FUN_00592db0 at 00592db0
 * undefined FUN_00592db0(void)
 * Address ranges: 00592db0-00592dd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00592db0(int param_1)

{
  if (*(int *)(param_1 + 0x30c) != 0) {
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    FUN_005aa980(param_1 + 0x30c);
  }
  return;
}

