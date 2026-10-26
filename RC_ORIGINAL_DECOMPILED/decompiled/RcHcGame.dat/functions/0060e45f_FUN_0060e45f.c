/*
 * FUN_0060e45f at 0060e45f
 * undefined FUN_0060e45f(void)
 * Address ranges: 0060e45f-0060e480
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0060e45f(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0061c6f2(param_1);
  *(undefined8 *)param_2 = uVar2;
  uVar1 = 0xffffffff;
  if ((*param_2 & param_2[1]) != 0xffffffff) {
    uVar1 = 0;
  }
  return uVar1;
}

