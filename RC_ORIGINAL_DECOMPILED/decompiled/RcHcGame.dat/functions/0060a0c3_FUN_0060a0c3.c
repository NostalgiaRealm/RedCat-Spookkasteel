/*
 * FUN_0060a0c3 at 0060a0c3
 * undefined FUN_0060a0c3(void)
 * Address ranges: 0060a0c3-0060a0ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060a0c3(code *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x0060a0ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

