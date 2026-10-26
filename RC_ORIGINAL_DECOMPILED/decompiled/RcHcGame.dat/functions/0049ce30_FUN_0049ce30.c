/*
 * FUN_0049ce30 at 0049ce30
 * undefined FUN_0049ce30(void)
 * Address ranges: 0049ce30-0049cec5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0049ce30(int param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 != 0.0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18c);
    uVar2 = *(undefined4 *)(param_1 + 400);
    uVar3 = *(undefined4 *)(param_1 + 0x194);
    FUN_005b3070();
    iVar4 = param_1 + 0x168;
    FUN_005b3250(param_2);
    *(undefined4 *)(param_1 + 0x18c) = uVar1;
    *(undefined4 *)(param_1 + 400) = uVar2;
    *(float *)(param_1 + 0x164) = param_2 + *(float *)(param_1 + 0x164);
    *(undefined4 *)(param_1 + 0x194) = uVar3;
    *(undefined1 *)(param_1 + 0x198) = 1;
    FUN_004247e0(iVar4);
    FUN_005b50a0(iVar4);
    FUN_004337a0(0);
  }
  return;
}

