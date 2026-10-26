/*
 * FUN_0049d7e8 at 0049d7e8
 * undefined __register FUN_0049d7e8(int * param_1)
 * Address ranges: 0049d7e8-0049dc39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49d2f4 slot 3 for TDaviDADLoader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49d2f4 slot 3 for
   TDaviDADLoader. Original bytes unchanged; names and types still inferred. */

void FUN_0049d7e8(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int *in_FS_OFFSET;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  undefined4 *local_130;
  undefined1 local_12c;
  int local_128;
  byte local_124 [204];
  undefined4 uStackY_58;
  undefined4 uStackY_54;
  uint uStackY_50;
  undefined4 uStackY_4c;
  int in_stack_ffffffd0;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_18 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x29;
  do {
    local_10 = (undefined4 *)((int)local_10 + -1);
  } while (local_10 != (undefined4 *)0x0);
  local_1c = &LAB_0049dc3a;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_20;
  local_24 = 0x49d815;
  local_8 = param_1;
  uVar2 = FUN_00409dd0((undefined *)param_1[1]);
  if ((char)uVar2 == '\0') {
    local_24 = 0x49d829;
    FUN_00402fe0(*local_8,local_124);
    local_24 = 0x49d837;
    FUN_00403fd4(&local_24,local_124);
    local_130 = (undefined4 *)local_8[1];
    local_12c = 0xb;
    FUN_0040a894((byte *)" File \"%s\" not found",&local_130,0,&local_128);
    FUN_004040f0(&local_20,4);
    FUN_00403d94(local_20);
    in_stack_ffffffd0 = local_128;
  }
  uVar2 = FUN_00409dd0((undefined *)local_8[1]);
  if ((char)uVar2 != '\0') {
    piVar3 = FUN_0045c5fc((int *)&PTR_FUN_0045c5a0,'\x01',(undefined4 *)local_8[1]);
    local_8[7] = (int)piVar3;
    local_18 = (undefined1 *)local_8[2];
    uVar2 = (**(code **)(*(int *)local_8[7] + 8))((int *)local_8[7],"Properties","FrameCount");
    *(undefined4 *)(local_18 + 4) = uVar2;
    uVar2 = (**(code **)(*(int *)local_8[7] + 8))((int *)local_8[7],"Properties","FramesPerSecond");
    *(undefined4 *)(local_18 + 8) = uVar2;
    uVar2 = (**(code **)(*(int *)local_8[7] + 8))((int *)local_8[7],"Properties","FrameWidth");
    *(undefined4 *)(local_18 + 0xc) = uVar2;
    uVar2 = (**(code **)(*(int *)local_8[7] + 8))((int *)local_8[7],"Properties","FrameHeight");
    *(undefined4 *)(local_18 + 0x10) = uVar2;
    uVar1 = (**(code **)(*(int *)local_8[7] + 0x10))((int *)local_8[7],"Properties","HasLoop");
    *(undefined1 *)(*(int *)(local_18 + 0x14) + 4) = uVar1;
    uStackY_4c = 0x49d974;
    uVar2 = (**(code **)(*(int *)local_8[7] + 8))((int *)local_8[7],"Properties","LoopCount");
    *(undefined4 *)(*(int *)(local_18 + 0x14) + 8) = uVar2;
    uStackY_4c = 0;
    uStackY_50 = 0x49d994;
    uVar2 = (**(code **)(*(int *)local_8[7] + 8))((int *)local_8[7],"Properties","LoopStartIndex");
    *(undefined4 *)(*(int *)(local_18 + 0x14) + 0xc) = uVar2;
    uVar4 = *(int *)(local_18 + 4) - 1;
    if (*(int *)(local_18 + 4) == 0) {
      uStackY_50 = 0x49d9ad;
      uVar4 = thunk_FUN_00402874(0xffffffff);
    }
    if ((int)uVar4 < 0) {
      uStackY_50 = 0x49d9b6;
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    uStackY_54 = 0x49d9cc;
    uStackY_50 = uVar4;
    uVar2 = (**(code **)(*(int *)local_8[7] + 8))((int *)local_8[7],"Properties","LoopEndIndex");
    *(undefined4 *)(*(int *)(local_18 + 0x14) + 0x10) = uVar2;
    uStackY_54 = 1;
    uStackY_58 = 0x49d9ec;
    uVar1 = (**(code **)(*(int *)local_8[7] + 8))((int *)local_8[7],"Properties","AnimationType");
    *(undefined1 *)(local_8 + 3) = uVar1;
    *(bool *)(local_8 + 6) = (char)local_8[3] == '\x01';
    iVar5 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX);
    local_8[5] = iVar5;
    if ((char)local_8[6] == '\0') {
      iVar5 = *(int *)(local_8[2] + 4);
    }
    else {
      iVar5 = 1;
    }
    uVar4 = iVar5 - 1;
    if (iVar5 == 0) {
      uVar4 = thunk_FUN_00402874(0xffffffff);
    }
    if ((int)uVar4 < 0) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (-1 < (int)uVar4) {
      local_1c = (undefined1 *)(uVar4 + 1);
      local_c = (undefined4 *)0x0;
      do {
        FUN_00409bd8(local_c,&local_134);
        (*(code *)**(undefined4 **)local_8[7])((undefined4 *)local_8[7],"Frames",local_134);
        if (local_10 == (undefined4 *)0x0) {
          FUN_00402fe0(*local_8,local_124);
          FUN_00403fd4(&local_13c,local_124);
          local_130 = local_c;
          local_12c = 0;
          uStackY_4c = 0x49dae8;
          FUN_0040a894((byte *)"DAD File: Missing frame %d",&local_130,0,&local_140);
          uStackY_4c = 0x49dafe;
          FUN_004040f0(&local_138,4);
          uStackY_4c = 0x49db13;
          FUN_00403d94(local_138);
        }
        FUN_0049d420((int)local_8,local_10,&local_144);
        FUN_00403e48((int *)&local_10,local_144);
        uVar2 = FUN_00409dd0((undefined *)local_10);
        if ((char)uVar2 == '\0') {
          FUN_00402fe0(*local_8,local_124);
          FUN_00403fd4(&local_14c,local_124);
          local_130 = local_10;
          local_12c = 0xb;
          uStackY_4c = 0x49db9c;
          FUN_0040a894((byte *)" File \"%s\" not found",&local_130,0,&local_150);
          uStackY_4c = 0x49dbb2;
          FUN_004040f0(&local_148,4);
          uStackY_4c = 0x49dbc7;
          FUN_00403d94(local_148);
        }
        (**(code **)(*(int *)local_8[5] + 0x34))((int *)local_8[5],local_10);
        local_c = (undefined4 *)((int)local_c + 1);
        local_1c = local_1c + -1;
      } while (local_1c != (undefined1 *)0x0);
    }
  }
  *in_FS_OFFSET = in_stack_ffffffd0;
  FUN_00403dd4(&local_150,3);
  FUN_00403db0(&local_144);
  FUN_00403dd4(&local_140,4);
  FUN_00403db0(&local_128);
  FUN_00403dd4(&local_24,2);
  FUN_00403db0((int *)&local_10);
  return;
}

