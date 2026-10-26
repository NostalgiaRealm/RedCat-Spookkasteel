/*
 * FUN_004744a0 at 004744a0
 * undefined __register FUN_004744a0(int * param_1)
 * Address ranges: 004744a0-004745a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004744a0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_004745a1;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_8 = param_1;
  if (param_1[0xe] == 0) {
    piVar2 = (int *)FUN_00495ee0((int)param_1);
    iVar3 = FUN_00494858(piVar2);
    if (*(char *)(iVar3 + 4) == '\0') {
      FUN_00402fe0(*local_8,local_114);
      FUN_00403fd4(&local_14,local_114);
      FUN_004040f0(&local_10,3);
      FUN_00403d94(local_10);
    }
    iVar3 = FUN_00474478((int)local_8);
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x30) + 0x38))(*(int *)(iVar3 + 0x30),1);
    local_8[0xe] = iVar3;
    iVar3 = FUN_00495ee0((int)local_8);
    FUN_00495b40(*local_8,iVar3,local_8[0xe]);
    bVar1 = FUN_004746a4((int)local_8);
    if (bVar1) {
      FUN_00494340((int *)local_8[0xe]);
      FUN_004746c4((int)local_8,'\0');
    }
  }
  local_c = local_8[0xe];
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_004745a8;
  puStack_11c = (undefined1 *)0x4745a0;
  FUN_00403dd4(&local_14,2);
  return;
}

