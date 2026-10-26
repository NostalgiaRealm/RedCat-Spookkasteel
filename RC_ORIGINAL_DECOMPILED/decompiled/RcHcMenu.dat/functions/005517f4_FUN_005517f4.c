/*
 * FUN_005517f4 at 005517f4
 * undefined __register FUN_005517f4(int * param_1, int * param_2)
 * Address ranges: 005517f4-00551912
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x550e44 slot 7 for TMenuIni. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x550e44 slot 7 for TMenuIni.
   Original bytes unchanged; names and types still inferred. */

void FUN_005517f4(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_140;
  undefined4 *puVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_120 = &LAB_00551913;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  puVar4 = &DAT_00551928;
  pcVar3 = "DoSaveToFile";
  iVar5 = local_14;
  FUN_004040f0((int *)&local_10,3);
  puVar2 = local_10;
  uVar1 = FUN_004a418c();
  FUN_004a48b8(uVar1,puVar2,0);
  (**(code **)(*local_c + 0xc))(local_c,"GENERAL","CURRENTPLAYER",local_8[10],pcVar3,puVar4,iVar5);
  (**(code **)(*local_c + 0xc))
            (local_c,"GENERAL","PREVSTATE",*(undefined1 *)(*(int *)PTR_DAT_00572108 + 0x100));
  (**(code **)(*local_c + 0xc))(local_c,"GENERAL","HAUNTED",(char)local_8[0xe]);
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\0') {
    uStackY_140 = 0xff;
    (**(code **)(*local_c + 0xc))(local_c,"GENERAL","EXITCODE");
  }
  else {
    uStackY_140 = 0x28;
    (**(code **)(*local_c + 0xc))(local_c,"GENERAL","EXITCODE");
  }
  *in_FS_OFFSET = uStackY_140;
  FUN_00403dd4(&local_14,2);
  return;
}

