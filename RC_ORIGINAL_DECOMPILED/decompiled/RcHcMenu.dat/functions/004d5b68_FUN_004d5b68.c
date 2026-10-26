/*
 * FUN_004d5b68 at 004d5b68
 * undefined __register FUN_004d5b68(int * param_1)
 * Address ranges: 004d5b68-004d5c25;004d5c96-004d5caa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d5b68(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  byte local_10c [256];
  int local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_c = 0;
  puStack_12c = &LAB_004d5cd8;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar3 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(char *)((int)param_1 + 9) != '\x01') {
    puStack_134 = (undefined1 *)0x4d5bb5;
    FUN_00402fe0(*param_1,local_10c);
    puStack_134 = (undefined1 *)0x4d5bc3;
    FUN_00403fd4(&local_c,local_10c);
    puStack_134 = (undefined1 *)0x4d5bd0;
    FUN_00404038(&local_c,(undefined4 *)".Execute: not an action query");
    puStack_134 = (undefined1 *)0x4d5be2;
    FUN_00403d94(local_c);
    puVar3 = puStack_128;
  }
  puStack_128 = puVar3;
  piVar1 = local_8 + 5;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    puStack_134 = (undefined1 *)0x4d5bf0;
    thunk_FUN_00402874((uint)local_8);
  }
  puStack_134 = (undefined1 *)0x4d5bf8;
  FUN_004d536c(local_8);
  puStack_138 = &LAB_004d5cab;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  puStack_144 = &LAB_004d5c26;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  puStack_140 = &stack0xfffffffc;
  puStack_134 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x20))();
  *in_FS_OFFSET = uStack_148;
  *in_FS_OFFSET = uStack_13c;
  puStack_134 = &LAB_004d5cb2;
  uStack_13c = 0x4d5ca9;
  puStack_138 = &stack0xfffffffc;
  FUN_004d5ac8();
  return;
}

