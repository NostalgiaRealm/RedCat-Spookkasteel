/*
 * FUN_10008ebc at 10008ebc
 * undefined __stdcall FUN_10008ebc(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * Address ranges: 10008ebc-10008ec2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008ebc(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x10008ec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

