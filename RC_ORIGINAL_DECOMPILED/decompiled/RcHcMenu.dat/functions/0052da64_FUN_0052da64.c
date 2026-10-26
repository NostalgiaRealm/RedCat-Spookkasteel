/*
 * FUN_0052da64 at 0052da64
 * undefined __register FUN_0052da64(int * param_1)
 * Address ranges: 0052da64-0052dba2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 21 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 21 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052da64(int *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  char *pcStack_13c;
  char *pcStack_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  byte local_124 [256];
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_20 = 0;
  local_24 = 0;
  puStack_12c = &LAB_0052dbd6;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0xd] == 0) {
    iStack_134 = 0x52da9f;
    FUN_00402fe0(*param_1,local_124);
    iStack_134 = 0x52daad;
    FUN_00403fd4(&local_24,local_124);
    iStack_134 = local_24;
    pcStack_138 = "DoOpen";
    pcStack_13c = " Connection is nil";
    puStack_140 = (undefined1 *)0x52dac7;
    FUN_004040f0(&local_20,3);
    puStack_140 = (undefined1 *)0x52dad9;
    FUN_00403d94(local_20);
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  puStack_140 = (undefined1 *)0x52dae1;
  (**(code **)(*local_8 + 0x50))();
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  puStack_144 = &LAB_0052dba3;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  puStack_140 = &stack0xfffffffc;
  local_18 = FUN_004cf39c((int *)local_8[0xd],extraout_EDX,extraout_ECX);
  local_1c = (int *)FUN_004cf3c8((int *)local_8[0xd],'\0');
  FUN_004b51e8((int)local_18);
  FUN_004b49b8(local_18,local_8[7]);
  uVar2 = FUN_00549b9c((int)local_8);
  *(undefined1 *)(local_18 + 9) = uVar2;
  FUN_004b4b84((int)local_18,*(int *)(local_8[0xf] + 0x10));
  local_18[0xf] = local_8[0xf];
  FUN_004b4e70((int)local_18,(int *)local_8[10]);
  FUN_004b4f0c(local_18,0);
  FUN_004d69fc(local_1c,(int)local_18);
  FUN_0052d9dc(local_1c,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
  *in_FS_OFFSET = uStack_148;
  puStack_140 = &LAB_0052dbaa;
  puStack_144 = (undefined1 *)0x52db9a;
  FUN_00403094(local_18);
  puStack_144 = (undefined1 *)0x52dba2;
  FUN_00403094(local_1c);
  return;
}

