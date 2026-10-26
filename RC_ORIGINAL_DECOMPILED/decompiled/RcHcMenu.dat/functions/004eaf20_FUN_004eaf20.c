/*
 * FUN_004eaf20 at 004eaf20
 * undefined __register FUN_004eaf20(int * param_1)
 * Address ranges: 004eaf20-004eb099
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 3 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 3 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004eaf20(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_140;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_120 = 0;
  local_124 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_130 = &LAB_004eb09a;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0xc] == 0) {
    FUN_00402fe0(*param_1,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    pcStack_140 = "No query";
    FUN_004040f0(&local_18,3);
    FUN_00403d94(local_18);
    puVar1 = puStack_12c;
  }
  puStack_12c = puVar1;
  iVar2 = FUN_0045ba40(local_8[7]);
  if (iVar2 != 0) {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(&local_124,local_11c);
    FUN_004040f0(&local_120,3);
    FUN_00403d94(local_120);
  }
  iVar2 = FUN_00471d88(local_8[0xc]);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_14 = uVar3 + 1;
    local_c = 0;
    do {
      iVar2 = FUN_00468730(*(int *)(local_8[0xc] + 0x24),local_c);
      local_10 = FUN_004d4af0((int *)&PTR_FUN_004ccae8,'\x01',local_c,(int)local_8,
                              *(undefined4 **)(iVar2 + 0x2c));
      (**(code **)(*(int *)local_8[7] + 0x24))((int *)local_8[7],local_c,local_10);
      local_c = local_c + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  *in_FS_OFFSET = pcStack_140;
  FUN_00403dd4(&local_124,2);
  FUN_00403dd4(&local_1c,2);
  return;
}

