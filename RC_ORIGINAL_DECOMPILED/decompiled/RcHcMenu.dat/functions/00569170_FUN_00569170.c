/*
 * FUN_00569170 at 00569170
 * undefined __register FUN_00569170(int * param_1, undefined4 param_2)
 * Address ranges: 00569170-005692f3;0056932a-00569388
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00569170(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *in_FS_OFFSET;
  int iStackY_164;
  undefined1 *puStackY_160;
  undefined1 *puStackY_15c;
  char *pcVar6;
  int iStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  undefined4 *local_12c;
  undefined4 local_128;
  undefined4 *local_124;
  byte local_120 [256];
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_13c = &stack0xfffffffc;
  local_12c = (undefined4 *)0x0;
  local_128 = 0;
  local_124 = (undefined4 *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_10 = (undefined4 *)0x0;
  puStack_140 = &LAB_00569389;
  iStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_144;
  local_14 = 0;
  local_18 = param_2;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_120);
  FUN_00403fd4(&local_20,local_120);
  pcVar6 = "LoadPlayer";
  puStackY_15c = (undefined1 *)0x5691f5;
  FUN_004040f0(&local_1c,3);
  puStackY_15c = (undefined1 *)local_1c;
  puStackY_160 = (undefined1 *)0x5691fe;
  uVar2 = FUN_004a418c();
  puVar1 = puStackY_15c;
  puStackY_15c = (undefined1 *)0x56920a;
  FUN_004a474c(uVar2,(int)puVar1,2,(int)pcVar6);
  puStackY_15c = (undefined1 *)0x569218;
  FUN_004b0344(local_c,(int *)&local_124);
  puStackY_15c = (undefined1 *)0x56922f;
  FUN_0040407c((int *)&local_10,(undefined4 *)local_8[0x44],local_124);
  puStackY_15c = (undefined1 *)0x569237;
  uVar3 = FUN_00409dd0((undefined *)local_10);
  if ((char)uVar3 == '\0') {
    puStackY_15c = (undefined1 *)0x56933f;
    FUN_0040407c((int *)&local_12c,(undefined4 *)"Unable to load: ",local_10);
    puStackY_15c = (undefined1 *)0x569351;
    piVar5 = FUN_0040ceec((int *)&DAT_00408ac4,'\x01',local_12c);
    puStackY_15c = (undefined1 *)0x569356;
    FUN_0040382c(piVar5);
  }
  else {
    if (local_8[0x46] == 0) {
      puStackY_15c = (undefined1 *)0x569257;
      iVar4 = FUN_00565a38((int *)&LAB_0056591c,'\x01');
      local_8[0x46] = iVar4;
      *(undefined4 *)(local_8[0x47] + 0x28) = 0xffffffff;
    }
    puStackY_160 = &LAB_005692f4;
    iStackY_164 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStackY_164;
    puStackY_15c = &stack0xfffffffc;
    FUN_00565fec((int *)local_8[0x46],(undefined *)local_10);
    piVar5 = (int *)(**(code **)(*(int *)local_8[0x46] + 8))();
    iVar4 = FUN_004a418c();
    FUN_004a4afc(iVar4,0x5693c4,piVar5);
    *(undefined4 *)(local_8[0x47] + 0x28) = local_c;
    if (*(char *)(DAT_005748e0 + 0x100) == '\x02') {
      FUN_005679c0((int *)local_8[0x46]);
      FUN_00566158((int *)local_8[0x46],(undefined *)local_10);
    }
    *in_FS_OFFSET = iStackY_164;
  }
  *in_FS_OFFSET = (int)pcVar6;
  FUN_00403dd4((int *)&local_12c,3);
  FUN_00403dd4(&local_20,2);
  FUN_00403db0((int *)&local_10);
  return;
}

