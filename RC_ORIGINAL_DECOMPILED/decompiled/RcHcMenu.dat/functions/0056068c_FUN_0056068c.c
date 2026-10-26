/*
 * FUN_0056068c at 0056068c
 * undefined __register FUN_0056068c(int * param_1)
 * Address ranges: 0056068c-005607d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056068c(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  int iVar4;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined4 *puStack_138;
  char *pcStack_134;
  undefined *puStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  undefined4 *local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_11c = (undefined4 *)0x0;
  local_118 = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_124 = &LAB_00560816;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  iStack_12c = 0x5606ca;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  iStack_12c = 0x5606d8;
  FUN_00403fd4(&local_14,local_114);
  iStack_12c = local_14;
  puStack_130 = &DAT_0056082c;
  pcStack_134 = "AskForNewPlayer";
  puStack_138 = (undefined4 *)0x5606f2;
  FUN_004040f0((int *)&local_10,3);
  puStack_138 = local_10;
  puStack_13c = (undefined1 *)0x5606fb;
  uVar3 = FUN_004a418c();
  puVar2 = puStack_138;
  puStack_138 = (undefined4 *)0x560707;
  FUN_004a48b8(uVar3,puVar2,0);
  puStack_138 = (undefined4 *)0x56070f;
  FUN_005534dc(local_8);
  puStack_138 = (undefined4 *)0x56071e;
  local_c = FUN_005543bc((int *)&PTR_FUN_005541f0,'\x01',local_8);
  puStack_13c = &LAB_005607d2;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puStack_138 = (undefined4 *)&stack0xfffffffc;
  FUN_0043262c((int *)local_c[0xbc],0,extraout_ECX);
  piVar1 = (int *)(*(uint *)(*(int *)PTR_DAT_005725d4 + 0x2f4) + 0x38);
  iVar4 = *(int *)(*(int *)PTR_DAT_005725d4 + 0x38) - *piVar1;
  if (SBORROW4(*(int *)(*(int *)PTR_DAT_005725d4 + 0x38),*piVar1)) {
    thunk_FUN_00402874(*(uint *)(*(int *)PTR_DAT_005725d4 + 0x2f4));
    iVar4 = extraout_EDX;
  }
  FUN_00431f34((int *)local_c[0xbd],iVar4);
  do {
    (**(code **)(*local_c + 0xd8))();
    FUN_00432714(local_c[0xc3],&local_118);
  } while (local_118 == 0);
  FUN_00432714(local_c[0xc3],(int *)&local_11c);
  FUN_00569570(*(int **)PTR_DAT_00572108,local_11c);
  *in_FS_OFFSET = uStack_140;
  puStack_138 = (undefined4 *)&LAB_005607d9;
  puStack_13c = (undefined1 *)0x5607d1;
  FUN_00403094(local_c);
  return;
}

