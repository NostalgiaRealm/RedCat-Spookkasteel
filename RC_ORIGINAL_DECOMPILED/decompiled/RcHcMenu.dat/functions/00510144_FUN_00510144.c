/*
 * FUN_00510144 at 00510144
 * undefined __register FUN_00510144(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00510144-00510186
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00510144(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if ((*(char *)(param_1 + 8) != '\0') ||
     ((float10)CONCAT44(param_5,param_4) != (float10)*(longlong *)(param_1 + 0x10))) {
    *(undefined4 *)(param_1 + 0x10) = param_4;
    *(undefined4 *)(param_1 + 0x14) = param_5;
    *(undefined1 *)(param_1 + 8) = 0;
    FUN_00501180(param_1);
  }
  return;
}

