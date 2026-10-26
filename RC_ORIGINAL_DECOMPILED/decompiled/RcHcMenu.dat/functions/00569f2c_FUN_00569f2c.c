/*
 * FUN_00569f2c at 00569f2c
 * undefined __register FUN_00569f2c(undefined4 param_1, uint param_2, int * param_3)
 * Address ranges: 00569f2c-00569fcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00569f2c(undefined4 param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_24;
  undefined1 local_20;
  int local_1c [4];
  uint local_c;
  undefined4 local_8;
  
  piVar3 = local_1c;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_3;
    param_3 = param_3 + 1;
    piVar3 = piVar3 + 1;
  }
  local_24 = *(undefined4 *)(param_2 + 8);
  local_20 = 0xb;
  puVar5 = &local_24;
  iVar4 = 0;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_004a418c();
  FUN_004a474c(uVar1,0x569fdc,0,iVar4);
  iVar2 = **(int **)(local_c + 0x68);
  (**(code **)(iVar2 + 0x2c))(*(int **)(local_c + 0x68),local_1c[0],iVar2,iVar4,puVar5);
  if (SBORROW4(*(int *)(local_c + 0x40),local_1c[2])) {
    thunk_FUN_00402874(local_c);
  }
  (**(code **)(**(int **)(local_c + 0x68) + 0x30))();
  (**(code **)(**(int **)(local_c + 0x68) + 0x34))(*(int **)(local_c + 0x68),local_1c[1]);
  if (SBORROW4(*(int *)(local_c + 0x44),local_1c[3])) {
    thunk_FUN_00402874(local_c);
  }
  (**(code **)(**(int **)(local_c + 0x68) + 0x38))();
  uVar1 = FUN_004a418c();
  FUN_004a49b0(uVar1);
  return;
}

