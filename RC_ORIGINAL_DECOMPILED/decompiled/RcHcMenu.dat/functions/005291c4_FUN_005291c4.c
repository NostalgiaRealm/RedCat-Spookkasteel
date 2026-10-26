/*
 * FUN_005291c4 at 005291c4
 * undefined __register FUN_005291c4(int * param_1)
 * Address ranges: 005291c4-0052926e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005291c4(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  if ((param_1[0xa7] == 0) && (param_1[0xa2] == 0)) {
    iVar1 = (**(code **)(*(int *)param_1[0xa4] + 4))();
    iVar2 = FUN_005285b8(param_1);
    iVar2 = FUN_00523748(iVar2);
    if (iVar1 != iVar2) {
      iVar1 = (**(code **)(*(int *)param_1[0xa4] + 4))();
      iVar2 = FUN_005285b8(param_1);
      if ((*(int *)(iVar2 + 0x204) <= iVar1) && (*(char *)(param_1[0xa4] + 0x40) == '\x02')) {
        piVar3 = (int *)FUN_005285b8(param_1);
        (**(code **)(*piVar3 + 0xcc))();
      }
      uVar4 = (**(code **)(*(int *)param_1[0xa4] + 4))();
      piVar3 = (int *)FUN_005285b8(param_1);
      FUN_00523d00(piVar3,uVar4);
    }
  }
  return;
}

