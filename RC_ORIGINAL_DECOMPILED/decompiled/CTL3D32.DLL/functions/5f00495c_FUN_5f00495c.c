/*
 * FUN_5f00495c at 5f00495c
 * undefined __stdcall FUN_5f00495c(void)
 * Address ranges: 5f00495c-5f004988
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_5f00495c(void)

{
  uint in_EAX;
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = (undefined4 *)&stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x400;
    *puVar1 = *puVar1;
  }
  *(undefined4 *)((int)puVar1 - in_EAX) = *(undefined4 *)((int)puVar1 - in_EAX);
                    /* WARNING: Could not recover jumptable at 0x5f004987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

