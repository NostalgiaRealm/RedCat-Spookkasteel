/*
 * FUN_004d516c at 004d516c
 * undefined __register FUN_004d516c(int * param_1)
 * Address ranges: 004d516c-004d52d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d516c(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  int local_114;
  int local_110;
  byte local_10c [256];
  int local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_114 = 0;
  local_110 = 0;
  local_c = 0;
  puStack_11c = &LAB_004d52d3;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar4 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(char *)((int)param_1 + 9) != '\x02') {
    FUN_00402fe0(*param_1,local_10c);
    FUN_00403fd4(&local_c,local_10c);
    FUN_00404038(&local_c,(undefined4 *)".Close: not a SELECT query");
    FUN_00403d94(local_c);
    puVar4 = puStack_118;
  }
  puStack_118 = puVar4;
  if (local_8[4] != 0) {
    FUN_00402fe0(*local_8,local_10c);
    FUN_00403fd4(&local_110,local_10c);
    FUN_00404038(&local_110,(undefined4 *)".Close: bookmark(s) not freed");
    FUN_00403d94(local_110);
  }
  cVar5 = (**(code **)(*local_8 + 0x38))();
  if (cVar5 == '\0') {
    FUN_00402fe0(*local_8,local_10c);
    FUN_00403fd4(&local_114,local_10c);
    FUN_00404038(&local_114,(undefined4 *)"Query isn\'t open.");
    FUN_00403d94(local_114);
  }
  cVar5 = (**(code **)(*local_8 + 0x38))();
  if (cVar5 != '\0') {
    (**(code **)(*local_8 + 0x18))();
    FUN_004d5d70((int)local_8,'\0');
    uVar3 = local_8[1];
    piVar1 = (int *)(uVar3 + 0x28);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (SBORROW4(iVar2,1)) {
      thunk_FUN_00402874(uVar3);
    }
  }
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_004d52da;
  puStack_11c = (undefined1 *)0x4d52ca;
  FUN_00403dd4(&local_114,2);
  puStack_11c = (undefined1 *)0x4d52d2;
  FUN_00403db0(&local_c);
  return;
}

