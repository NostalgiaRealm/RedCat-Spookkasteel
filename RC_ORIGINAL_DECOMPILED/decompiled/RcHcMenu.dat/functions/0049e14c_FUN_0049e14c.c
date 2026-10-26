/*
 * FUN_0049e14c at 0049e14c
 * undefined __register FUN_0049e14c(int * param_1)
 * Address ranges: 0049e14c-0049e50e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49e00c slot 3 for TDaviAVILoader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49e00c slot 3 for
   TDaviAVILoader. Original bytes unchanged; names and types still inferred. */

void FUN_0049e14c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_FS_OFFSET;
  int iStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  int local_138 [7];
  undefined1 local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_13c = &stack0xfffffffc;
  local_138[2] = 0;
  local_138[1] = 0;
  local_138[0] = 0;
  local_138[5] = 0;
  local_138[4] = 0;
  local_138[3] = 0;
  local_10 = 0;
  local_14 = 0;
  local_118 = 0;
  puStack_140 = &LAB_0049e50f;
  iStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_144;
  local_8 = param_1;
  AVIFileInit();
  if (*(int *)(local_8[1] + -4) == 0) {
    thunk_FUN_00402874(0);
  }
  iVar1 = AVIFileOpen();
  if (iVar1 != 0) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    local_138[6] = local_8[1];
    local_11c = 0xb;
    FUN_0040a894((byte *)"AVIFileOpen Error on %s.",local_138 + 6,0,&local_118);
    FUN_004040f0(&local_10,4);
    FUN_00403d94(local_10);
  }
  iVar1 = AVIFileGetStream();
  if (iVar1 != 0) {
    AVIFileRelease();
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(local_138 + 4,local_114);
    local_138[6] = local_8[1];
    local_11c = 0xb;
    FUN_0040a894((byte *)"AVIFileGetStream Error in %s.",local_138 + 6,0,local_138 + 3);
    FUN_004040f0(local_138 + 5,4);
    FUN_00403d94(local_138[5]);
  }
  iVar1 = AVIStreamGetFrameOpen();
  local_8[5] = iVar1;
  if (local_8[5] == 0) {
    AVIStreamRelease();
    AVIFileRelease();
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(local_138 + 1,local_114);
    local_138[6] = local_8[1];
    local_11c = 0xb;
    FUN_0040a894((byte *)"No decompressor found for AVI file: %s.",local_138 + 6,0,local_138);
    FUN_004040f0(local_138 + 2,4);
    FUN_00403d94(local_138[2]);
  }
  AVIFileGetStream();
  iVar1 = local_8[4];
  AVIStreamInfo();
  local_c = local_8[2];
  uVar2 = local_8[0xf];
  if ((int)uVar2 < 0) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  *(uint *)(local_c + 4) = uVar2;
  uVar2 = local_8[0xd] / local_8[0xc];
  if ((int)uVar2 < 0) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  *(uint *)(local_c + 8) = uVar2;
  uVar2 = local_8[0x16] - local_8[0x14];
  if (SBORROW4(local_8[0x16],local_8[0x14])) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  *(uint *)(local_c + 0xc) = uVar2;
  uVar2 = local_8[0x17] - local_8[0x15];
  if (SBORROW4(local_8[0x17],local_8[0x15])) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  *(uint *)(local_c + 0x10) = uVar2;
  *(undefined1 *)(*(int *)(local_c + 0x14) + 4) = 0;
  *(undefined4 *)(*(int *)(local_c + 0x14) + 8) = 0;
  uVar2 = local_8[0xe];
  if (((int)uVar2 < 0) || (uVar2 == 0xffffffff)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  *(uint *)(*(int *)(local_c + 0x14) + 0xc) = uVar2;
  iVar3 = *(int *)(local_c + 4) + -1;
  if (*(int *)(local_c + 4) == 0) {
    iVar3 = thunk_FUN_00402874(0xffffffff);
  }
  if (iVar3 == -1) {
    iVar3 = thunk_FUN_00402874(0xffffffff);
  }
  *(int *)(*(int *)(local_c + 0x14) + 0x10) = iVar3;
  FUN_0049b884((int *)local_8[0x2a],*(int **)(local_8[2] + 0xc),*(int *)(local_8[2] + 0x10),
               (undefined *)0x18);
  *in_FS_OFFSET = iVar1;
  FUN_00403dd4(local_138,6);
  FUN_00403db0(&local_118);
  FUN_00403dd4(&local_14,2);
  return;
}

