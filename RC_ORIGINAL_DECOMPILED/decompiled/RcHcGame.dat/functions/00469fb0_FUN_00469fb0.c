/*
 * FUN_00469fb0 at 00469fb0
 * undefined FUN_00469fb0(void)
 * Address ranges: 00469fb0-0046a00b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_00469fb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xa58) = 0xffffffff;
  if ((-1 < param_6) && (param_6 < 5)) {
    uVar1 = __ftol();
    FUN_004041b0(uVar1);
    *(int *)(param_1 + 0xa58) = param_6;
    *(undefined4 *)(param_1 + 0xa48) = param_2;
    *(undefined4 *)(param_1 + 0xa4c) = param_3;
    *(undefined4 *)(param_1 + 0xa50) = param_4;
  }
  return;
}

