/*
 * FUN_004c70b4 at 004c70b4
 * int __register FUN_004c70b4(int param_1, int * param_2)
 * Address ranges: 004c70b4-004c7148
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004c70b4(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  
  FUN_004c7000(param_1);
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),param_2);
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x20))();
    if (0 < iVar1) {
      uVar2 = FUN_00421574(param_2);
      *(uint *)(param_1 + 0x1c) = uVar2;
      iVar3 = (**(code **)(*param_2 + 0x2c))();
      iVar4 = (**(code **)(*param_2 + 0x20))();
      iVar1 = iVar3 / iVar4;
      if (iVar3 % iVar4 == 0) {
        local_10 = (**(code **)(*param_2 + 0x2c))();
        iVar1 = (**(code **)(*param_2 + 0x20))();
        local_10 = local_10 / iVar1;
        if (4 < local_10) {
          local_10 = 1;
        }
        iVar1 = FUN_004c714c(param_1,(char)local_10);
      }
    }
  }
  return iVar1;
}

