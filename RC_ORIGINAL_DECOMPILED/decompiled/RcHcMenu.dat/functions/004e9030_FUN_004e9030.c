/*
 * FUN_004e9030 at 004e9030
 * undefined __register FUN_004e9030(int param_1, uint * param_2)
 * Address ranges: 004e9030-004e9100
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e9030(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_10;
  uint *local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_1c = &LAB_004e9101;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_004e9110(param_1);
  uVar2 = FUN_004e82ec(iVar1);
  *local_c = uVar2;
  iVar1 = FUN_004e9110(local_8);
  uVar3 = FUN_004e831c(iVar1);
  *(char *)(local_c + 1) = (char)uVar3;
  iVar1 = FUN_004e9110(local_8);
  uVar3 = FUN_004e834c(iVar1);
  *(char *)((int)local_c + 5) = (char)uVar3;
  iVar1 = FUN_004e9110(local_8);
  FUN_004e837c(iVar1,(int *)&local_10);
  FUN_00403e04((int *)(local_c + 2),local_10);
  iVar1 = FUN_004e9110(local_8);
  if (*(short *)(iVar1 + 0x5a) != 0) {
    puVar6 = local_c + 1;
    iVar1 = (int)local_c + 5;
    puVar5 = local_c + 2;
    puVar7 = local_c;
    iVar4 = FUN_004e9110(local_8);
    uVar3 = FUN_004e9110(local_8);
    (**(code **)(iVar4 + 0x58))
              (*(undefined4 *)(iVar4 + 0x5c),uVar3,local_8,puVar5,iVar1,puVar6,puVar7);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004e9108;
  puStack_1c = (undefined1 *)0x4e9100;
  FUN_00403db0((int *)&local_10);
  return;
}

