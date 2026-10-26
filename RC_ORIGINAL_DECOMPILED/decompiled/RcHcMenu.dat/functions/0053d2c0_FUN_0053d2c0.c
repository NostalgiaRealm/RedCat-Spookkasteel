/*
 * FUN_0053d2c0 at 0053d2c0
 * undefined __register FUN_0053d2c0(int * param_1)
 * Address ranges: 0053d2c0-0053d437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053d2c0(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  char *pcStack_12c;
  char *pcStack_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_0053d45a;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0xd] == 0) {
    iStack_124 = 0x53d2fb;
    FUN_00402fe0(*param_1,local_114);
    iStack_124 = 0x53d309;
    FUN_00403fd4(&local_14,local_114);
    iStack_124 = local_14;
    pcStack_128 = ".OpenQuery: ";
    pcStack_12c = " Connection is nil";
    puStack_130 = (undefined1 *)0x53d323;
    FUN_004040f0(&local_10,3);
    puStack_130 = (undefined1 *)0x53d335;
    FUN_00403d94(local_10);
    puVar1 = puStack_118;
  }
  puStack_118 = puVar1;
  if (local_8[0x22] != 0) {
    puStack_130 = (undefined1 *)0x53d349;
    FUN_0053d4cc((int)local_8);
    puStack_130 = (undefined1 *)0x53d357;
    FUN_00403094((int *)local_8[0x22]);
    local_8[0x22] = 0;
  }
  puStack_130 = (undefined1 *)0x53d36f;
  iVar2 = FUN_004cf3c8((int *)local_8[0xd],'\0');
  local_8[0x22] = iVar2;
  puStack_130 = (undefined1 *)0x53d380;
  piVar3 = (int *)(**(code **)(*local_8 + 0xc))();
  puStack_130 = (undefined1 *)0x53d385;
  local_c = FUN_004cf39c(piVar3,extraout_EDX,extraout_ECX);
  puStack_134 = &LAB_0053d438;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_130 = &stack0xfffffffc;
  FUN_004b49b8(local_c,local_8[7]);
  *(char *)(local_c + 9) = (char)local_8[0xe];
  local_c[0xf] = local_8[0xf];
  FUN_004b4e70((int)local_c,(int *)local_8[10]);
  FUN_004b4f0c(local_c,0);
  FUN_004d69fc((int *)local_8[0x22],(int)local_c);
  FUN_004d5dc0((int *)local_8[0x22]);
  (**(code **)(*local_8 + 0x14))();
  piVar3 = local_8 + 0x25;
  iVar2 = *piVar3;
  *piVar3 = *piVar3 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  if ((char)local_8[4] == '\0') {
    local_8[0x23] = -0x80000000;
  }
  *in_FS_OFFSET = uStack_138;
  puStack_130 = &LAB_0053d43f;
  puStack_134 = (undefined1 *)0x53d437;
  FUN_00403094(local_c);
  return;
}

