/*
 * FUN_00432838 at 00432838
 * undefined __register FUN_00432838(int param_1, char param_2)
 * Address ranges: 00432838-00432854
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00432838(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x49)) &&
     (*(char *)(param_1 + 0x49) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_00433700(param_1,0xb008,0,0);
  }
  return;
}

