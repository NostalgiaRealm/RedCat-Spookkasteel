/*
 * FUN_10002990 at 10002990
 * undefined FUN_10002990(void)
 * Address ranges: 10002990-100029f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10002990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  if (*(int *)(param_1 + 0x100) < 0x10) {
    *(undefined4 *)(*(int *)(param_1 + 0x100) * 0x10 + param_1) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x100) * 0x10 + 4 + param_1) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x100) * 0x10 + 8 + param_1) = param_4;
    *(undefined4 *)(*(int *)(param_1 + 0x100) * 0x10 + 0xc + param_1) = param_5;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    return 1;
  }
  return 0;
}

