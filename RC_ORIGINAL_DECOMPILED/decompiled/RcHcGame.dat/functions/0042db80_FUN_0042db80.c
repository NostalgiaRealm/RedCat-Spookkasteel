/*
 * FUN_0042db80 at 0042db80
 * undefined FUN_0042db80(void)
 * Address ranges: 0042db80-0042dbdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_0042db80(int param_1,undefined4 *param_2,void *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)param_3 + 4);
  puVar1 = operator_new(0x10);
  puVar2 = param_3;
  if (param_3 == (void *)0x0) {
    puVar2 = puVar1;
  }
  *puVar1 = puVar2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar1[1] = puVar3;
  *(undefined4 **)((int)param_3 + 4) = puVar1;
  *(undefined4 **)puVar1[1] = puVar1;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_4;
    puVar1[3] = param_4[1];
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *param_2 = puVar1;
  return param_2;
}

