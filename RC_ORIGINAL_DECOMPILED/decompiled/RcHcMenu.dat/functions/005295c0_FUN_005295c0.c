/*
 * FUN_005295c0 at 005295c0
 * undefined __register FUN_005295c0(int * param_1, char param_2, char param_3)
 * Address ranges: 005295c0-0052963a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005295c0(int *param_1,char param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  
  if (param_2 != '\0') {
    uVar2 = FUN_00529294((int)param_1);
    if ((char)uVar2 != '\0') {
      cVar1 = (**(code **)(*(int *)param_1[0xa4] + 100))();
      if (cVar1 == '\0') {
        uVar3 = (**(code **)(*(int *)param_1[0xa4] + 4))();
        iVar4 = FUN_005285b8(param_1);
        iVar5 = FUN_00523748(iVar4);
        iVar4 = iVar5 - uVar3;
        if (SBORROW4(iVar5,uVar3)) {
          thunk_FUN_00402874(uVar3);
          iVar4 = extraout_EDX;
        }
        FUN_0054823c((int *)param_1[0xa4],iVar4);
      }
    }
  }
  FUN_00521e74((int)param_1,param_2,param_3);
  return;
}

