/*
 * FUN_004d0310 at 004d0310
 * undefined __register FUN_004d0310(int * param_1)
 * Address ranges: 004d0310-004d03b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d0310(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_118 = &LAB_004d03b9;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_8 = param_1;
  cVar3 = (**(code **)(*param_1 + 0x44))();
  if (cVar3 == '\0') {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
  }
  (**(code **)(*local_8 + 0x18))();
  piVar1 = local_8 + 8;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_004d03c0;
  puStack_118 = (undefined1 *)0x4d03b8;
  FUN_00403dd4(&local_10,2);
  return;
}

