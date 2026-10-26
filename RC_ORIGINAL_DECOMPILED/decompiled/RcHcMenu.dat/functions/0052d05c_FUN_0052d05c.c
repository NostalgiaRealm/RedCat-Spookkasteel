/*
 * FUN_0052d05c at 0052d05c
 * undefined __register FUN_0052d05c(int * param_1, char param_2)
 * Address ranges: 0052d05c-0052d2d2;0052d2da-0052d2fa;0052d318-0052d39e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 17 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 17 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052d05c(int *param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_16c;
  undefined1 *puStack_168;
  undefined1 *puStack_164;
  char *pcStack_160;
  char *pcStack_15c;
  undefined1 *puStack_158;
  char *pcStack_154;
  char *pcStack_150;
  undefined1 *puStack_14c;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  int local_130;
  int local_12c;
  int *local_128;
  char local_124;
  byte local_120 [256];
  int local_20;
  int local_1c;
  int *local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  char local_9;
  int *local_8;
  
  puStack_140 = &stack0xfffffffc;
  local_12c = 0;
  local_130 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_144 = &LAB_0052d39f;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  puVar1 = &stack0xfffffffc;
  local_9 = param_2;
  local_8 = param_1;
  if (param_1[0x22] == -0x80000000) {
    puStack_14c = (undefined1 *)0x52d0af;
    FUN_00402fe0(*param_1,local_120);
    puStack_14c = (undefined1 *)0x52d0bd;
    FUN_00403fd4(&local_20,local_120);
    puStack_14c = (undefined1 *)local_20;
    pcStack_150 = ".DoDelete:";
    pcStack_154 = " Invalid position in list";
    puStack_158 = (undefined1 *)0x52d0d7;
    FUN_004040f0(&local_1c,3);
    puStack_158 = (undefined1 *)0x52d0e9;
    FUN_00403d94(local_1c);
    puVar1 = puStack_140;
  }
  puStack_140 = puVar1;
  puStack_158 = (undefined1 *)0x52d106;
  FUN_004e251c((int *)local_8[0x20],local_8[0x22],&local_128);
  if (local_124 == '\x03') {
    puStack_158 = (undefined1 *)0x52d126;
    cVar2 = FUN_004e260c((int *)local_8[0x20],local_8[0x22]);
    if (cVar2 != '\0') {
      puStack_158 = (undefined1 *)0x52d13e;
      FUN_00403d94("Assertion failure");
    }
    puStack_158 = (undefined1 *)0x52d15b;
    FUN_004e251c((int *)local_8[0x20],local_8[0x22],&local_128);
    puStack_158 = (undefined1 *)0x52d166;
    FUN_00403094(local_128);
    puStack_158 = (undefined1 *)0x52d17f;
    FUN_004e25e8((int *)local_8[0x20],local_8[0x22],0);
  }
  else {
    puStack_158 = (undefined1 *)0x52d198;
    local_14 = FUN_004e25c4((int *)local_8[0x20],local_8[0x22]);
    puStack_158 = (undefined1 *)0x52d1b2;
    local_10 = FUN_004e257c((int *)local_8[0x20],local_8[0x22]);
    puStack_158 = (undefined1 *)0x52d1cc;
    local_f = FUN_004e260c((int *)local_8[0x20],local_8[0x22]);
    puStack_158 = (undefined1 *)0x52d1e0;
    FUN_004e2654((int *)local_8[0x21],&local_14);
  }
  puStack_158 = (undefined1 *)0x52d1ee;
  iVar3 = FUN_0045da14(local_8[0x21]);
  if (1 < iVar3) {
    puStack_158 = (undefined1 *)0x52d201;
    FUN_00402fe0(*local_8,local_120);
    puStack_158 = (undefined1 *)0x52d212;
    FUN_00403fd4(&local_130,local_120);
    puStack_158 = (undefined1 *)local_130;
    pcStack_15c = ".DoDeleteRecursively: ";
    pcStack_160 = " Functionality is not supported";
    puStack_164 = (undefined1 *)0x52d232;
    FUN_004040f0(&local_12c,3);
    puStack_164 = (undefined1 *)0x52d247;
    FUN_00403d94(local_12c);
  }
  pcStack_15c = &LAB_0052d2fb;
  pcStack_160 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_160;
  puStack_164 = (undefined1 *)0x52d263;
  puStack_158 = &stack0xfffffffc;
  iVar3 = FUN_0045da14(local_8[0x21]);
  if (iVar3 == 1) {
    puStack_164 = (undefined1 *)0x52d276;
    cVar2 = FUN_004e260c((int *)local_8[0x21],0);
    if (cVar2 != '\0') {
      puStack_164 = (undefined1 *)0x52d288;
      piVar4 = FUN_00418f00((int *)&PTR_FUN_00544284,'\x01',(int *)0x0);
      puStack_168 = &LAB_0052d2d3;
      uStack_16c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_16c;
      puStack_164 = &stack0xfffffffc;
      local_18 = piVar4;
      piVar5 = (int *)FUN_004e25c4((int *)local_8[0x21],0);
      FUN_004d4488((int *)local_8[0xd],piVar5,local_9,piVar4);
      *in_FS_OFFSET = piVar4;
      puStack_168 = (undefined1 *)0x52d2da;
      uStack_16c = 0x52d2d2;
      FUN_00403094(local_18);
      return;
    }
  }
  puStack_164 = (undefined1 *)0x52d2f1;
  FUN_0045d540((int *)local_8[0x20],local_8[0x22]);
  *in_FS_OFFSET = pcStack_160;
  puStack_158 = (undefined1 *)0x52d326;
  iVar3 = FUN_0045da14(local_8[0x20]);
  if (iVar3 == 0) {
    local_8[0x22] = -0x80000000;
  }
  else {
    puStack_158 = (undefined1 *)0x52d347;
    iVar3 = FUN_0045da14(local_8[0x20]);
    if (iVar3 == local_8[0x22]) {
      piVar4 = local_8 + 0x22;
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      if (SBORROW4(iVar3,1)) {
        puStack_158 = (undefined1 *)0x52d363;
        thunk_FUN_00402874((uint)local_8);
      }
    }
  }
  piVar4 = local_8 + 0x25;
  iVar3 = *piVar4;
  *piVar4 = *piVar4 + 1;
  if (SCARRY4(iVar3,1)) {
    puStack_158 = (undefined1 *)0x52d374;
    thunk_FUN_00402874((uint)local_8);
  }
  *in_FS_OFFSET = pcStack_154;
  puStack_14c = &LAB_0052d3a6;
  pcStack_150 = (char *)0x52d391;
  FUN_00403dd4(&local_130,2);
  pcStack_150 = (char *)0x52d39e;
  FUN_00403dd4(&local_20,2);
  return;
}

