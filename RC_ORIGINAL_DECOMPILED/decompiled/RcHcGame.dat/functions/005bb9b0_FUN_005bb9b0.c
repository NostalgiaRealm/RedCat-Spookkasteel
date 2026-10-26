/*
 * FUN_005bb9b0 at 005bb9b0
 * undefined FUN_005bb9b0(void)
 * Address ranges: 005bb9b0-005bb9da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bb9b0(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  if (((*(int *)(param_1 + 0x33668) != 0) && (*(int *)(param_1 + 0x33678) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x33678) + 0x30),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x005bb9d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 1;
}

