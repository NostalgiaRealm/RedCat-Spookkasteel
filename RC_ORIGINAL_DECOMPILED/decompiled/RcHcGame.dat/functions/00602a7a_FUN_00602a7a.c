/*
 * FUN_00602a7a at 00602a7a
 * undefined FUN_00602a7a(void)
 * Address ranges: 00602a7a-00602abc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00602a7a(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 == param_4) goto LAB_00602ab0;
    uVar1 = *param_1;
    uVar2 = *param_3;
    if (uVar2 >= uVar1 && uVar2 != uVar1) goto LAB_00602aa1;
    if (uVar2 < uVar1) {
      return 1;
    }
    param_3 = param_3 + 1;
  }
  if (param_3 == param_4) {
LAB_00602ab0:
    uVar3 = (uint)(param_1 != param_2);
  }
  else {
LAB_00602aa1:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

