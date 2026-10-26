/*
 * FUN_0049c45c at 0049c45c
 * undefined __register FUN_0049c45c(int * param_1, int * param_2)
 * Address ranges: 0049c45c-0049c6cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49bb88 slot 21 for TTarga. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0049c5e4) */
/* Recovered original virtual function entry from validated Delphi VMT 0x49bb88 slot 21 for TTarga.
   Original bytes unchanged; names and types still inferred. */

void FUN_0049c45c(int *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  int local_13c;
  int local_138;
  byte local_134 [256];
  int local_34;
  int local_30;
  char local_2a [12];
  ushort local_1e;
  ushort local_1c;
  byte local_1a;
  undefined1 local_19;
  int local_18;
  undefined2 local_12;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_144 = &stack0xfffffffc;
  local_138 = 0;
  local_13c = 0;
  local_30 = 0;
  local_34 = 0;
  puStack_148 = &LAB_0049c6cc;
  pcStack_14c = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_14c;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    if ((local_8[0xf] != 0x18) && (local_8[0xf] != 0x20)) {
      FUN_00402fe0(*local_8,local_134);
      FUN_00403fd4(&local_34,local_134);
      FUN_004040f0(&local_30,4);
      FUN_00403d94(local_30);
    }
    if ((local_8[0xf] == 0x18) || (local_8[0xf] == 0x20)) {
      FUN_00408508((undefined4 *)local_2a,0x12);
      uVar2 = FUN_00404030(local_8[0x132]);
      if (0xff < uVar2) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      local_2a[0] = (char)uVar2;
      local_2a[1] = 0;
      local_2a[2] = 2;
      uVar2 = local_8[0x23];
      if (0xffff < uVar2) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      local_1e = (ushort)uVar2;
      uVar2 = local_8[0x10];
      if (0xffff < uVar2) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      local_1c = (ushort)uVar2;
      uVar2 = local_8[0xf];
      if (0xff < uVar2) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      local_1a = (byte)uVar2;
      local_19 = 0x20;
      (**(code **)(*local_c + 8))(local_c,local_2a,0x12);
      if (local_2a[0] != '\0') {
        uVar2 = FUN_00404200(local_8 + 0x132);
        iVar4 = 0;
        if (*(int *)(uVar2 - 4) == 0) {
          uVar2 = thunk_FUN_00402874(uVar2);
          iVar4 = extraout_EDX;
        }
        (**(code **)(*local_c + 8))(local_c,uVar2 + iVar4,local_2a[0]);
      }
      uVar2 = (uint)(local_1a >> 3) * (uint)local_1e;
      if (0xffff < uVar2) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      local_12 = (undefined2)uVar2;
      if (local_8[0x24] < (int)(uVar2 & 0xffff)) {
        FUN_00402fe0(*local_8,local_134);
        FUN_00403fd4(&local_13c,local_134);
        pcStack_14c = "Targa destination image is larger than DIB";
        FUN_004040f0(&local_138,4);
        FUN_00403d94(local_138);
      }
      uVar2 = local_1c - 1;
      if (SBORROW4((uint)local_1c,1)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      if (-1 < (int)uVar2) {
        local_18 = uVar2 + 1;
        local_10 = 0;
        do {
          uVar3 = FUN_0049ae44(local_8,local_10);
          (**(code **)(*local_c + 8))(local_c,uVar3,local_12);
          local_10 = local_10 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
    }
  }
  *in_FS_OFFSET = pcStack_14c;
  puStack_144 = &LAB_0049c6d3;
  puStack_148 = (undefined1 *)0x49c6be;
  FUN_00403dd4(&local_13c,2);
  puStack_148 = (undefined1 *)0x49c6cb;
  FUN_00403dd4(&local_34,2);
  return;
}

