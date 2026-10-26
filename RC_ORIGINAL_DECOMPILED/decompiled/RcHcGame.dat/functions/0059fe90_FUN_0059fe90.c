/*
 * FUN_0059fe90 at 0059fe90
 * undefined FUN_0059fe90(void)
 * Address ranges: 0059fe90-0059fefc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0059fe90(int param_1,char param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    FUN_005657d0(param_1,0xc);
    FUN_005657a0(*(undefined4 *)(param_1 + 0xc));
    FUN_005657d0(param_1 + 0x10,4);
    if (param_2 == '\0') break;
    FUN_0059fe90(*(undefined4 *)(param_1 + 0x18),0);
    FUN_0059fe90(*(undefined4 *)(param_1 + 0x1c),0);
    FUN_0059fe90(*(undefined4 *)(param_1 + 0x20),0);
    param_1 = *(int *)(param_1 + 0x24);
    param_2 = '\0';
  }
  return;
}

