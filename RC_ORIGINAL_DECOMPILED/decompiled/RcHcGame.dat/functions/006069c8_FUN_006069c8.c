/*
 * FUN_006069c8 at 006069c8
 * undefined FUN_006069c8(void)
 * Address ranges: 006069c8-00606a06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_006069c8(int *param_1,int *param_2)

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

