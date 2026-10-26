/*
 * FUN_00615028 at 00615028
 * undefined FUN_00615028(void)
 * Address ranges: 00615028-0061503b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_00615028(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4) & 0xf;
  if ((uVar1 != 0) && (uVar1 != 2)) {
    return 0;
  }
  return 1;
}

