/*
 * FUN_100017a0 at 100017a0
 * undefined FUN_100017a0(void)
 * Address ranges: 100017a0-10001a78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100017a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint auStack_a8 [2];
  uint uStack_4;
  
  piStack_b8 = (int *)*param_1;
  auStack_a8[1] = 0;
  auStack_a8[0] = 0;
  uStack_ac = param_4;
  param_1[8] = 0;
  uStack_b0 = param_3;
  uStack_b4 = param_2;
  (**(code **)(*piStack_b8 + 0x54))();
  param_1[6] = param_3;
  param_1[5] = param_2;
  param_1[7] = param_4;
  if ((uStack_4 & 0x400) != 0) goto LAB_100019b1;
  puVar4 = (undefined4 *)&stack0xffffff6c;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,&stack0xffffff6c,param_1 + 2,0);
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)&stack0xffffff6c;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,&stack0xffffff6c,param_1 + 3,0);
    if (iVar3 != 0) goto LAB_100019b1;
    auStack_a8[0] = 0;
    auStack_a8[1] = 0;
    (**(code **)(*(int *)param_1[2] + 0x38))((int *)param_1[2],auStack_a8);
    if ((auStack_a8[0] & 0x4000) == 0) goto LAB_100019b1;
    piVar1 = (int *)param_1[3];
    auStack_a8[0] = 0;
    auStack_a8[1] = 0;
    (**(code **)(*piVar1 + 0x38))(piVar1,auStack_a8);
    if ((auStack_a8[0] & 0x4000) == 0) goto LAB_100019b1;
    uVar2 = param_1[8];
    param_1[8] = uVar2 | 2;
    if ((uStack_4 & 0x200) != 0) goto LAB_100019b1;
    uVar2 = uVar2 | 0x12;
  }
  else {
    if (((param_1[8] & 2) != 0) || ((param_1[8] & 0x200) != 0)) goto LAB_100019b1;
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    puVar4 = (undefined4 *)&stack0xffffff6c;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,&stack0xffffff6c,param_1 + 2,0);
    if (iVar3 != 0) goto LAB_100019b1;
    puVar4 = (undefined4 *)&stack0xffffff6c;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,&stack0xffffff6c,param_1 + 3,0);
    if (iVar3 != 0) goto LAB_100019b1;
    uVar2 = param_1[8] | 0x21;
  }
  param_1[8] = uVar2;
LAB_100019b1:
  if (((uStack_4 & 0x400) != 0) || (param_1[3] == 0)) {
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    puVar4 = (undefined4 *)&stack0xffffff6c;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,&stack0xffffff6c,param_1 + 2,0);
    if (iVar3 == 0) {
      piVar1 = (int *)param_1[2];
      uStack_b4 = 0;
      piStack_b8 = (int *)0x4;
      uStack_b0 = 0;
      uStack_ac = 0;
      iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,&piStack_b8,param_1 + 3);
      if (iVar3 != 0) {
        return 0;
      }
      param_1[8] = param_1[8] | 0x41;
    }
  }
  return 1;
}

