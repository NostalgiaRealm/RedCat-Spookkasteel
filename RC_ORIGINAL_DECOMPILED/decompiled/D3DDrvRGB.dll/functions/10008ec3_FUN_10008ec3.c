/*
 * FUN_10008ec3 at 10008ec3
 * undefined __stdcall FUN_10008ec3(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * Address ranges: 10008ec3-10008ec9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008ec3(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x10008ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

