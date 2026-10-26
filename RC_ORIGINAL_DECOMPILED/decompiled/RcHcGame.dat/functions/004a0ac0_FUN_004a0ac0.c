/*
 * FUN_004a0ac0 at 004a0ac0
 * undefined FUN_004a0ac0(void)
 * Address ranges: 004a0ac0-004a0b99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004a0ac0(int param_1,undefined4 param_2)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar3 = *(float *)(param_1 + 0x48);
  if (fVar3 == 1.0) {
    uVar4 = 0;
    fVar1 = (float10)FUN_00409e30(*(undefined4 *)(param_1 + 0x28),0);
    fVar3 = (float)fVar1;
    FUN_004247e0(fVar3);
    FUN_005b3f00(fVar3,uVar4);
  }
  else {
    uVar4 = 0;
    fVar1 = (float10)FUN_00409e30(*(undefined4 *)(param_1 + 0x28),0,fVar3);
    fVar2 = (float)fVar1;
    FUN_004247e0(fVar2);
    FUN_005b3f20(fVar2,uVar4,fVar3);
  }
  if ((*(int *)(param_1 + 0x50) != 0) && (0.0 < *(float *)(param_1 + 0x58))) {
    fVar2 = *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x48);
    uVar4 = 0;
    fVar1 = (float10)FUN_00409e30(*(undefined4 *)(param_1 + 0x54),0,fVar2);
    fVar3 = (float)fVar1;
    FUN_004247e0(fVar3);
    FUN_005b3f20(fVar3,uVar4,fVar2);
    fVar1 = (float10)FUN_00409e30(param_2);
    fVar1 = (float10)*(float *)(param_1 + 0x58) - fVar1 / (float10)0.25;
    *(float *)(param_1 + 0x58) = (float)fVar1;
    if (fVar1 < (float10)0.0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  return;
}

