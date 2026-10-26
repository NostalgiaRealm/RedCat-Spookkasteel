/*
 * FUN_0046c7a0 at 0046c7a0
 * undefined __register FUN_0046c7a0(int param_1, undefined4 param_2, undefined4 param_3, longlong param_4)
 * Address ranges: 0046c7a0-0046c81c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046c7a0(int param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  if ((*(char *)(param_1 + 0xd9) != '\0') &&
     (((float10)param_4 < (float10)*(longlong *)(param_1 + 0xe0) ||
      ((float10)*(longlong *)(param_1 + 0xe8) < (float10)param_4)))) {
    FUN_0046aa44(param_1);
  }
  FUN_00469acc(param_1,&param_4,0);
  return;
}

