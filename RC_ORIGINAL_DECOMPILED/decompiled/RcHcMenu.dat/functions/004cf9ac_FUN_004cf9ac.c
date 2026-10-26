/*
 * FUN_004cf9ac at 004cf9ac
 * undefined __register FUN_004cf9ac(int * param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 004cf9ac-004cfaa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cf9ac(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = 0;
  puStack_120 = &LAB_004cfaa4;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  cVar4 = (**(code **)(*param_1 + 0x44))();
  if (cVar4 != '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_00404038(&local_14,(undefined4 *)".OpenWith: already open");
    FUN_00403d94(local_14);
  }
  if (*(short *)((int)local_8 + 0x32) != 0) {
    (*(code *)local_8[0xc])(local_8[0xd],local_8);
  }
  (**(code **)(*local_8 + 0x10))(local_8,local_c,local_10);
  cVar4 = (**(code **)(*local_8 + 0x44))();
  if (cVar4 != '\0') {
    FUN_00403e04(local_8 + 6,local_c);
    FUN_00403e04(local_8 + 7,local_10);
    uVar3 = local_8[1];
    piVar1 = (int *)(uVar3 + 0x20);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar2,1)) {
      thunk_FUN_00402874(uVar3);
    }
  }
  if (*(short *)((int)local_8 + 0x3a) != 0) {
    (*(code *)local_8[0xe])(local_8[0xf],local_8);
  }
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_004cfaab;
  puStack_120 = (undefined1 *)0x4cfaa3;
  FUN_00403db0(&local_14);
  return;
}

