/*
 * FUN_10008e88 at 10008e88
 * undefined __stdcall FUN_10008e88(undefined * UNRECOVERED_JUMPTABLE)
 * Address ranges: 10008e88-10008eb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008e88(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x10008eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

