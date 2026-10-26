/*
 * FUN_005562a8 at 005562a8
 * undefined __register FUN_005562a8(int * param_1, undefined4 param_2)
 * Address ranges: 005562a8-005563e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x555088 slot published:btnNewClick for TfrmPlayer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x555088 slot
   published:btnNewClick for TfrmPlayer. Original bytes unchanged; names and types still inferred.
    */

void FUN_005562a8(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined4 *puStack_13c;
  char *pcStack_138;
  undefined *puStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  undefined4 *local_120;
  int local_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_120 = (undefined4 *)0x0;
  local_11c = 0;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  puStack_128 = &LAB_00556429;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  iStack_130 = 0x5562e9;
  local_10 = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_118);
  iStack_130 = 0x5562f7;
  FUN_00403fd4(&local_18,local_118);
  iStack_130 = local_18;
  puStack_134 = &DAT_0055643c;
  pcStack_138 = "btnNewClick";
  puStack_13c = (undefined4 *)0x556311;
  FUN_004040f0((int *)&local_14,3);
  puStack_13c = local_14;
  puStack_140 = (undefined1 *)0x55631a;
  uVar2 = FUN_004a418c();
  puVar1 = puStack_13c;
  puStack_13c = (undefined4 *)0x556326;
  FUN_004a48b8(uVar2,puVar1,0);
  puStack_13c = (undefined4 *)0x556338;
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  puStack_13c = (undefined4 *)0x556349;
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_Red26");
  puStack_13c = (undefined4 *)0x556355;
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  puStack_13c = (undefined4 *)0x556364;
  local_c = FUN_005543bc((int *)&PTR_FUN_005541f0,'\x01',local_8);
  puStack_140 = &LAB_005563e5;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  puStack_13c = (undefined4 *)&stack0xfffffffc;
  (**(code **)(*local_c + 0xd8))();
  FUN_00432714(local_c[0xc3],&local_11c);
  if ((local_11c != 0) && (local_c[0x8d] == 1)) {
    FUN_00432714(local_c[0xc3],(int *)&local_120);
    FUN_00569570(*(int **)PTR_DAT_00572108,local_120);
  }
  *in_FS_OFFSET = uStack_144;
  puStack_13c = (undefined4 *)&LAB_005563ec;
  puStack_140 = (undefined1 *)0x5563e4;
  FUN_00403094(local_c);
  return;
}

