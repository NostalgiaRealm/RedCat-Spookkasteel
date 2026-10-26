/*
 * FUN_00483000 at 00483000
 * undefined __register FUN_00483000(undefined4 param_1, int * param_2)
 * Address ranges: 00483000-0048301e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483000(undefined4 param_1,int *param_2)

{
  if (DAT_00573950 != (code *)0x0) {
    (*DAT_00573950)(param_2);
    return;
  }
  FUN_00406aa0(param_2);
  return;
}

