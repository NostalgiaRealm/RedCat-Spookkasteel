/*
 * FUN_0046efa0 at 0046efa0
 * undefined FUN_0046efa0(void)
 * Address ranges: 0046efa0-0046effb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_0046efa0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x1418) = 0xffffffff;
  if ((-1 < param_6) && (param_6 < 5)) {
    uVar1 = __ftol();
    FUN_004041b0(uVar1);
    *(int *)(param_1 + 0x1418) = param_6;
    *(undefined4 *)(param_1 + 0x1408) = param_2;
    *(undefined4 *)(param_1 + 0x140c) = param_3;
    *(undefined4 *)(param_1 + 0x1410) = param_4;
  }
  return;
}

