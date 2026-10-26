/*
 * FUN_0055c65c at 0055c65c
 * undefined __register FUN_0055c65c(int * param_1, undefined4 param_2)
 * Address ranges: 0055c65c-0055c7e4;0055c917-0055cc81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55c204 slot published:FormShow for TfrmStartGame. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55c204 slot
   published:FormShow for TfrmStartGame. Original bytes unchanged; names and types still inferred.
    */

void FUN_0055c65c(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  uint **ppuVar5;
  undefined4 uStack_178;
  undefined4 uStack_160;
  undefined1 *puStack_15c;
  undefined1 *puStack_158;
  uint *local_154;
  byte local_150 [36];
  byte *local_12c;
  undefined1 local_128;
  uint *local_124;
  uint *local_120;
  uint *local_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_158 = &stack0xfffffffc;
  local_154 = (uint *)0x0;
  local_124 = (uint *)0x0;
  local_120 = (uint *)0x0;
  local_11c = (uint *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  puStack_15c = &LAB_0055cc82;
  uStack_160 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_160;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_118);
  FUN_00403fd4(&local_18,local_118);
  FUN_004040f0((int *)&local_14,3);
  puVar3 = local_14;
  uVar4 = FUN_004a418c();
  FUN_004a48b8(uVar4,puVar3,0);
  FUN_005530c0((int)local_8);
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x01') {
    uStack_178 = *(undefined4 *)(PTR_DAT_00572404 + 0xb0);
    FUN_004040f0((int *)&local_11c,3);
    FUN_00432744(local_8[0xbc],local_11c);
  }
  else {
    uStack_178 = *(undefined4 *)(PTR_DAT_00572404 + 0xac);
    FUN_004040f0((int *)&local_120,3);
    FUN_00432744(local_8[0xbc],local_120);
  }
  FUN_00432744(local_8[0xb8],*(uint **)(PTR_DAT_00572404 + 0xcc));
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x01') {
    local_10 = *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x18) + 0xc);
  }
  else {
    local_10 = *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 0xc);
  }
  switch(local_10) {
  case 0:
    FUN_00432744(local_8[0xcc],*(uint **)(PTR_DAT_00572404 + 0xd0));
    FUN_004aeaf0((int *)local_8[0xc2],*(int *)(*(int *)PTR_DAT_00572108 + 0xb0));
    break;
  case 1:
    FUN_00432744(local_8[0xcc],*(uint **)(PTR_DAT_00572404 + 0xd4));
    FUN_004aeaf0((int *)local_8[0xc2],*(int *)(*(int *)PTR_DAT_00572108 + 0xb4));
    break;
  case 2:
    FUN_00432744(local_8[0xcc],*(uint **)(PTR_DAT_00572404 + 0xd8));
    FUN_004aeaf0((int *)local_8[0xc2],*(int *)(*(int *)PTR_DAT_00572108 + 0xb8));
    break;
  case 3:
    FUN_00432744(local_8[0xcc],*(uint **)(PTR_DAT_00572404 + 0xdc));
    FUN_004aeaf0((int *)local_8[0xc2],*(int *)(*(int *)PTR_DAT_00572108 + 0xdc));
    break;
  case 4:
    FUN_00432744(local_8[0xcc],*(uint **)(PTR_DAT_00572404 + 0xe0));
    FUN_004aeaf0((int *)local_8[0xc2],*(int *)(*(int *)PTR_DAT_00572108 + 0xbc));
  }
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0xc) +
                  0x24);
  if (iVar2 == 1) {
    FUN_004aeaf0((int *)local_8[199],*(int *)(*(int *)PTR_DAT_00572108 + 0xec));
    FUN_00432744(local_8[0xcb],*(uint **)(PTR_DAT_00572404 + 0xf8));
  }
  else if (iVar2 == 2) {
    FUN_004aeaf0((int *)local_8[199],*(int *)(*(int *)PTR_DAT_00572108 + 0xf4));
    FUN_00432744(local_8[0xcb],*(uint **)(PTR_DAT_00572404 + 0x100));
  }
  else if (iVar2 == 3) {
    FUN_004aeaf0((int *)local_8[199],*(int *)(*(int *)PTR_DAT_00572108 + 0xf0));
    FUN_00432744(local_8[0xcb],*(uint **)(PTR_DAT_00572404 + 0xfc));
  }
  FUN_00432744(local_8[0xc2],(uint *)0x0);
  FUN_00432744(local_8[199],(uint *)0x0);
  FUN_00432744(local_8[0xca],*(uint **)(PTR_DAT_00572404 + 0x70));
  FUN_00432744(local_8[0xcb],*(uint **)(PTR_DAT_00572404 + 0xf4));
  FUN_00432744(local_8[0xcd],*(uint **)(PTR_DAT_00572404 + 0x78));
  FUN_00432744(local_8[0xc3],*(uint **)(PTR_DAT_00572404 + 0x24));
  FUN_00432744(local_8[0xc4],*(uint **)(PTR_DAT_00572404 + 0x28));
  FUN_00432744(local_8[200],*(uint **)(PTR_DAT_00572404 + 0x98));
  ppuVar5 = &local_124;
  FUN_00565978(*(int *)(*(int *)PTR_DAT_00572108 + 0x118),local_150);
  local_12c = local_150;
  local_128 = 4;
  FUN_0040a894(&DAT_0055ccc8,&local_12c,0,(int *)ppuVar5);
  FUN_00432744(local_8[0xc5],local_124);
  ppuVar5 = &local_154;
  local_12c = (byte *)FUN_0056595c(*(int *)(*(int *)PTR_DAT_00572108 + 0x118));
  local_128 = 0;
  FUN_0040a894(&DAT_0055ccd4,&local_12c,0,(int *)ppuVar5);
  FUN_00432744(local_8[0xc6],local_154);
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x02') {
    cVar1 = *(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 8);
    if (cVar1 == '\0') {
      FUN_00432744(local_8[0xc9],*(uint **)(PTR_DAT_00572404 + 0xc0));
    }
    else if (cVar1 == '\x01') {
      FUN_00432744(local_8[0xc9],*(uint **)(PTR_DAT_00572404 + 0xc4));
    }
    else if (cVar1 == '\x02') {
      FUN_00432744(local_8[0xc9],*(uint **)(PTR_DAT_00572404 + 200));
    }
  }
  else if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x01') {
    cVar1 = *(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x18) + 8);
    if (cVar1 == '\0') {
      FUN_00432744(local_8[0xc9],*(uint **)(PTR_DAT_00572404 + 0xc0));
    }
    else if (cVar1 == '\x01') {
      FUN_00432744(local_8[0xc9],*(uint **)(PTR_DAT_00572404 + 0xc4));
    }
    else if (cVar1 == '\x02') {
      FUN_00432744(local_8[0xc9],*(uint **)(PTR_DAT_00572404 + 200));
    }
  }
  uVar4 = FUN_004a418c();
  FUN_004a49b0(uVar4);
  *in_FS_OFFSET = uStack_178;
  FUN_00403db0((int *)&local_154);
  FUN_00403dd4((int *)&local_124,3);
  FUN_00403dd4(&local_18,2);
  return;
}

