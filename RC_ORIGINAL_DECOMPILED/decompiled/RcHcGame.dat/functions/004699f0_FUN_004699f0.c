/*
 * FUN_004699f0 at 004699f0
 * undefined FUN_004699f0(void)
 * Address ranges: 004699f0-00469a87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 __thiscall
FUN_004699f0(int param_1,float param_2,float param_3,float param_4,undefined4 param_5)

{
  if ((param_2 == *(float *)(param_1 + 0x110)) && (param_3 == *(float *)(param_1 + 0x114))) {
    if (param_4 == *(float *)(param_1 + 0x118)) {
      return 0;
    }
  }
  *(float *)(param_1 + 0x110) = param_2;
  *(float *)(param_1 + 0x114) = param_3;
  *(float *)(param_1 + 0x118) = param_4;
  FUN_00502350(1);
  FUN_00469980();
  FUN_00469fb0(*(float *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114),
               *(undefined4 *)(param_1 + 0x118),0x3f800000,param_5);
  return 1;
}

