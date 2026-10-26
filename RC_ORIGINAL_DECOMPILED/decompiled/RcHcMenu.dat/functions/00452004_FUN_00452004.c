/*
 * FUN_00452004 at 00452004
 * undefined __register FUN_00452004(undefined * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00452004-00452057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00452004(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_PTR_0056f9d0;
  }
  puVar1 = *(undefined4 **)(*(int *)(param_4 + -4) + 0x74);
  if ((puVar1 != (undefined4 *)0x0) &&
     (puVar2 = (undefined *)FUN_00402fdc(puVar1), param_1 == puVar2)) {
    return;
  }
  FUN_00403094(*(int **)(*(int *)(param_4 + -4) + 0x74));
  uVar3 = (**(code **)(param_1 + 0x2c))(param_1,1,*(undefined4 *)(param_4 + -4));
  *(undefined4 *)(*(int *)(param_4 + -4) + 0x74) = uVar3;
  return;
}

