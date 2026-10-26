/*
 * FUN_004d5dc0 at 004d5dc0
 * undefined __register FUN_004d5dc0(int * param_1)
 * Address ranges: 004d5dc0-004d5f36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d5dc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_118;
  int local_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_114 = 0;
  local_118 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_120 = &LAB_004d5f37;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar4 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(char *)((int)param_1 + 9) != '\x02') {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    pcStack_130 = "not a SELECT query";
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
    puVar4 = puStack_11c;
  }
  puStack_11c = puVar4;
  cVar5 = (**(code **)(*local_8 + 0x38))();
  if (cVar5 != '\0') {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_118,local_110);
    FUN_004040f0(&local_114,3);
    FUN_00403d94(local_114);
  }
  piVar1 = local_8 + 5;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  FUN_004d536c(local_8);
  (**(code **)(*local_8 + 0x2c))();
  FUN_004d5380(local_8);
  if (*(char *)(*(int *)(local_8[1] + 4) + 0x18) != '\0') {
    FUN_004d5d70((int)local_8,'\x01');
  }
  if (*(char *)((int)local_8 + 10) != '\0') {
    FUN_004d5fb0(local_8);
    (**(code **)(*local_8 + 0x44))();
  }
  uVar3 = local_8[1];
  piVar1 = (int *)(uVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(uVar3);
  }
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_118,2);
  FUN_00403dd4(&local_10,2);
  return;
}

