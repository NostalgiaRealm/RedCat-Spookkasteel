/*
 * FUN_0060d20a at 0060d20a
 * undefined FUN_0060d20a(void)
 * Address ranges: 0060d20a-0060d23f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060d20a(uint param_1)

{
  int iVar1;
  
  if ((param_1 <= DAT_006b2e34) && (iVar1 = FUN_006170cc(param_1), iVar1 != 0)) {
    return;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  HeapAlloc(DAT_00747ea0,0,param_1 + 0xf & 0xfffffff0);
  return;
}

