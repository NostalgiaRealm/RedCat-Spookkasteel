/*
 * FUN_00600aa5 at 00600aa5
 * undefined FUN_00600aa5(void)
 * Address ranges: 00600aa5-00600ae3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00600aa5(int *param_1,int *param_2)

{
  if ((char)param_1[1] == '\0') {
    Peek();
  }
  if ((char)param_2[1] == '\0') {
    Peek();
  }
  if (*param_1 == 0) {
    if (*param_2 != 0) {
      return 0;
    }
  }
  else if (*param_2 == 0) {
    return 0;
  }
  return 1;
}

