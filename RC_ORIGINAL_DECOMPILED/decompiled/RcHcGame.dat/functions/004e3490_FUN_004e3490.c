/*
 * FUN_004e3490 at 004e3490
 * undefined FUN_004e3490(void)
 * Address ranges: 004e3490-004e34de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004e3490(int param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x188) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x188))(1);
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  if (0.0 < param_3) {
    uVar1 = FUN_00569110(param_4,param_2,param_3);
    *(undefined4 *)(param_1 + 0x188) = uVar1;
  }
  return;
}

