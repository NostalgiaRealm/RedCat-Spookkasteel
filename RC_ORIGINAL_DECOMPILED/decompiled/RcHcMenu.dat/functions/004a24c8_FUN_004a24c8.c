/*
 * FUN_004a24c8 at 004a24c8
 * undefined __register FUN_004a24c8(int param_1, byte param_2, undefined4 * param_3)
 * Address ranges: 004a24c8-004a2529
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a24c8(int param_1,byte param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  piVar1 = (int *)FUN_004a252c(param_1,param_2);
  uVar2 = (**(code **)(*piVar1 + 0x20))();
  puVar4 = param_3;
  piVar1 = (int *)FUN_004a252c(param_1,param_2);
  uVar3 = (**(code **)(*piVar1 + 0x2c))();
  FUN_00411624(0,0,uVar3,puVar4,uVar2);
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100),param_1,param_2,param_3);
  }
  return;
}

