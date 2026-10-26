/*
 * FUN_005679c0 at 005679c0
 * undefined __register FUN_005679c0(int * param_1)
 * Address ranges: 005679c0-00567aea;00567af2-00567b21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005679c0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_154;
  undefined1 *puStackY_150;
  char *pcVar5;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_124;
  undefined1 local_120;
  byte *local_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_11c = (byte *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  local_10 = (undefined4 *)0x0;
  puStack_12c = &LAB_00567b22;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_118);
  FUN_00403fd4(&local_18,local_118);
  FUN_004040f0((int *)&local_14,3);
  puVar1 = local_14;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  pcVar5 = "Player%d.ini";
  puStackY_150 = (undefined1 *)0x567a63;
  FUN_004040f0((int *)&local_11c,3);
  local_124 = local_8[7] + 1;
  pbVar3 = local_11c;
  if (SCARRY4(local_8[7],1)) {
    puStackY_150 = (undefined1 *)0x567a79;
    pbVar3 = (byte *)thunk_FUN_00402874((uint)local_11c);
    local_124 = extraout_EDX;
  }
  local_120 = 0;
  puStackY_150 = (undefined1 *)0x567a93;
  FUN_0040a894(pbVar3,&local_124,0,(int *)pcVar5);
  uVar4 = FUN_00409dd0((undefined *)local_10);
  if ((char)uVar4 != '\0') {
    local_c = FUN_0045c5fc((int *)&PTR_FUN_0045c5a0,'\x01',local_10);
    puStackY_150 = &LAB_00567aeb;
    uStackY_154 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_154;
    FUN_00567694((int)local_8,local_c);
    FUN_00567940(local_8,local_c);
    *in_FS_OFFSET = uStackY_154;
    puStackY_150 = (undefined1 *)0x567aea;
    FUN_00403094(local_c);
    return;
  }
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "Settings\\";
  FUN_00403db0((int *)&local_11c);
  FUN_00403dd4(&local_18,3);
  return;
}

